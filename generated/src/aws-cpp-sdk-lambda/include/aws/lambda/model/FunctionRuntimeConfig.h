/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>The customer-managed runtime configuration for your function. Specifies the
 * customer-managed runtime and the runtime alias that your function
 * uses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionRuntimeConfig">AWS
 * API Reference</a></p>
 */
class FunctionRuntimeConfig {
 public:
  AWS_LAMBDA_API FunctionRuntimeConfig() = default;
  AWS_LAMBDA_API FunctionRuntimeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API FunctionRuntimeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer-managed runtime that your
   * function uses.</p>
   */
  inline const Aws::String& GetRuntimeArn() const { return m_runtimeArn; }
  inline bool RuntimeArnHasBeenSet() const { return m_runtimeArnHasBeenSet; }
  template <typename RuntimeArnT = Aws::String>
  void SetRuntimeArn(RuntimeArnT&& value) {
    m_runtimeArnHasBeenSet = true;
    m_runtimeArn = std::forward<RuntimeArnT>(value);
  }
  template <typename RuntimeArnT = Aws::String>
  FunctionRuntimeConfig& WithRuntimeArn(RuntimeArnT&& value) {
    SetRuntimeArn(std::forward<RuntimeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the customer-managed runtime alias that your function uses. A
   * runtime alias is a name that points to a runtime version.</p>
   */
  inline const Aws::String& GetRuntimeAlias() const { return m_runtimeAlias; }
  inline bool RuntimeAliasHasBeenSet() const { return m_runtimeAliasHasBeenSet; }
  template <typename RuntimeAliasT = Aws::String>
  void SetRuntimeAlias(RuntimeAliasT&& value) {
    m_runtimeAliasHasBeenSet = true;
    m_runtimeAlias = std::forward<RuntimeAliasT>(value);
  }
  template <typename RuntimeAliasT = Aws::String>
  FunctionRuntimeConfig& WithRuntimeAlias(RuntimeAliasT&& value) {
    SetRuntimeAlias(std::forward<RuntimeAliasT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeArn;

  Aws::String m_runtimeAlias;
  bool m_runtimeArnHasBeenSet = false;
  bool m_runtimeAliasHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
