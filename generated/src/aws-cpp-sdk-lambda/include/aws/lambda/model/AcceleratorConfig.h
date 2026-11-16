/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

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
 * <p>The accelerator resource settings for a Lambda execution environment,
 * including the amount of accelerator memory to allocate.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AcceleratorConfig">AWS
 * API Reference</a></p>
 */
class AcceleratorConfig {
 public:
  AWS_LAMBDA_API AcceleratorConfig() = default;
  AWS_LAMBDA_API AcceleratorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API AcceleratorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum amount of memory (in GB) of each accelerator device exposed to
   * the execution environment. Lambda might allocate more, depending on the
   * accelerator instance types available.</p>
   */
  inline int GetAcceleratorMemorySize() const { return m_acceleratorMemorySize; }
  inline bool AcceleratorMemorySizeHasBeenSet() const { return m_acceleratorMemorySizeHasBeenSet; }
  inline void SetAcceleratorMemorySize(int value) {
    m_acceleratorMemorySizeHasBeenSet = true;
    m_acceleratorMemorySize = value;
  }
  inline AcceleratorConfig& WithAcceleratorMemorySize(int value) {
    SetAcceleratorMemorySize(value);
    return *this;
  }
  ///@}
 private:
  int m_acceleratorMemorySize{0};
  bool m_acceleratorMemorySizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
