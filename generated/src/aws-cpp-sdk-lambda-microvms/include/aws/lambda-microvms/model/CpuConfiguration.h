/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Architecture.h>

#include <utility>

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
 * <p>Configuration for the CPU architecture of a MicroVM.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/CpuConfiguration">AWS
 * API Reference</a></p>
 */
class CpuConfiguration {
 public:
  AWS_LAMBDAMICROVMS_API CpuConfiguration() = default;
  AWS_LAMBDAMICROVMS_API CpuConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API CpuConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CPU architecture.</p>
   */
  inline Architecture GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  inline void SetArchitecture(Architecture value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline CpuConfiguration& WithArchitecture(Architecture value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}
 private:
  Architecture m_architecture{Architecture::NOT_SET};
  bool m_architectureHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
