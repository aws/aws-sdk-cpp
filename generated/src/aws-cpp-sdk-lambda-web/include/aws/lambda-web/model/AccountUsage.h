/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>Contains your current web function usage for the current AWS
 * Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/AccountUsage">AWS
 * API Reference</a></p>
 */
class AccountUsage {
 public:
  AWS_LAMBDAWEB_API AccountUsage() = default;
  AWS_LAMBDAWEB_API AccountUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API AccountUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of web functions in your account in the current AWS Region.</p>
   */
  inline int GetFunctionCount() const { return m_functionCount; }
  inline bool FunctionCountHasBeenSet() const { return m_functionCountHasBeenSet; }
  inline void SetFunctionCount(int value) {
    m_functionCountHasBeenSet = true;
    m_functionCount = value;
  }
  inline AccountUsage& WithFunctionCount(int value) {
    SetFunctionCount(value);
    return *this;
  }
  ///@}
 private:
  int m_functionCount{0};
  bool m_functionCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
