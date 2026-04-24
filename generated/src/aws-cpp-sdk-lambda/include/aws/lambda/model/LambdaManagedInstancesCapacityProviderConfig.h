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
 * <p>Configuration for Lambda-managed instances used by the capacity
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LambdaManagedInstancesCapacityProviderConfig">AWS
 * API Reference</a></p>
 */
class LambdaManagedInstancesCapacityProviderConfig {
 public:
  AWS_LAMBDA_API LambdaManagedInstancesCapacityProviderConfig() = default;
  AWS_LAMBDA_API LambdaManagedInstancesCapacityProviderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API LambdaManagedInstancesCapacityProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetCapacityProviderArn() const { return m_capacityProviderArn; }
  inline bool CapacityProviderArnHasBeenSet() const { return m_capacityProviderArnHasBeenSet; }
  template <typename CapacityProviderArnT = Aws::String>
  void SetCapacityProviderArn(CapacityProviderArnT&& value) {
    m_capacityProviderArnHasBeenSet = true;
    m_capacityProviderArn = std::forward<CapacityProviderArnT>(value);
  }
  template <typename CapacityProviderArnT = Aws::String>
  LambdaManagedInstancesCapacityProviderConfig& WithCapacityProviderArn(CapacityProviderArnT&& value) {
    SetCapacityProviderArn(std::forward<CapacityProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of concurrent execution environments that can run on each
   * compute instance.</p>
   */
  inline int GetPerExecutionEnvironmentMaxConcurrency() const { return m_perExecutionEnvironmentMaxConcurrency; }
  inline bool PerExecutionEnvironmentMaxConcurrencyHasBeenSet() const { return m_perExecutionEnvironmentMaxConcurrencyHasBeenSet; }
  inline void SetPerExecutionEnvironmentMaxConcurrency(int value) {
    m_perExecutionEnvironmentMaxConcurrencyHasBeenSet = true;
    m_perExecutionEnvironmentMaxConcurrency = value;
  }
  inline LambdaManagedInstancesCapacityProviderConfig& WithPerExecutionEnvironmentMaxConcurrency(int value) {
    SetPerExecutionEnvironmentMaxConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory in GiB allocated per vCPU for execution
   * environments.</p>
   */
  inline double GetExecutionEnvironmentMemoryGiBPerVCpu() const { return m_executionEnvironmentMemoryGiBPerVCpu; }
  inline bool ExecutionEnvironmentMemoryGiBPerVCpuHasBeenSet() const { return m_executionEnvironmentMemoryGiBPerVCpuHasBeenSet; }
  inline void SetExecutionEnvironmentMemoryGiBPerVCpu(double value) {
    m_executionEnvironmentMemoryGiBPerVCpuHasBeenSet = true;
    m_executionEnvironmentMemoryGiBPerVCpu = value;
  }
  inline LambdaManagedInstancesCapacityProviderConfig& WithExecutionEnvironmentMemoryGiBPerVCpu(double value) {
    SetExecutionEnvironmentMemoryGiBPerVCpu(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityProviderArn;

  int m_perExecutionEnvironmentMaxConcurrency{0};

  double m_executionEnvironmentMemoryGiBPerVCpu{0.0};
  bool m_capacityProviderArnHasBeenSet = false;
  bool m_perExecutionEnvironmentMaxConcurrencyHasBeenSet = false;
  bool m_executionEnvironmentMemoryGiBPerVCpuHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
