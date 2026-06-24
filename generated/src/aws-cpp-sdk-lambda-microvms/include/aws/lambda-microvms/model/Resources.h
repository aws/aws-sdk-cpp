/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Resource requirements for a MicroVM.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/Resources">AWS
 * API Reference</a></p>
 */
class Resources {
 public:
  AWS_LAMBDAMICROVMS_API Resources() = default;
  AWS_LAMBDAMICROVMS_API Resources(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Resources& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum amount of memory in MiB to allocate to the MicroVM.</p>
   */
  inline int GetMinimumMemoryInMiB() const { return m_minimumMemoryInMiB; }
  inline bool MinimumMemoryInMiBHasBeenSet() const { return m_minimumMemoryInMiBHasBeenSet; }
  inline void SetMinimumMemoryInMiB(int value) {
    m_minimumMemoryInMiBHasBeenSet = true;
    m_minimumMemoryInMiB = value;
  }
  inline Resources& WithMinimumMemoryInMiB(int value) {
    SetMinimumMemoryInMiB(value);
    return *this;
  }
  ///@}
 private:
  int m_minimumMemoryInMiB{0};
  bool m_minimumMemoryInMiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
