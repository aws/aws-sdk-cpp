/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ExecutionServerStepConfiguration.h>
#include <aws/drs/model/WaitStepConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>Type-specific configuration for an execution step response. Mirrors
 * RecoveryPlanStepConfiguration but uses execution-enriched server
 * shapes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecutionStepConfiguration">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecutionStepConfiguration {
 public:
  AWS_DRS_API RecoveryPlanExecutionStepConfiguration() = default;
  AWS_DRS_API RecoveryPlanExecutionStepConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecutionStepConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a SERVER type step (with execution state like jobID).</p>
   */
  inline const ExecutionServerStepConfiguration& GetExecutionServerStepConfiguration() const { return m_executionServerStepConfiguration; }
  inline bool ExecutionServerStepConfigurationHasBeenSet() const { return m_executionServerStepConfigurationHasBeenSet; }
  template <typename ExecutionServerStepConfigurationT = ExecutionServerStepConfiguration>
  void SetExecutionServerStepConfiguration(ExecutionServerStepConfigurationT&& value) {
    m_executionServerStepConfigurationHasBeenSet = true;
    m_executionServerStepConfiguration = std::forward<ExecutionServerStepConfigurationT>(value);
  }
  template <typename ExecutionServerStepConfigurationT = ExecutionServerStepConfiguration>
  RecoveryPlanExecutionStepConfiguration& WithExecutionServerStepConfiguration(ExecutionServerStepConfigurationT&& value) {
    SetExecutionServerStepConfiguration(std::forward<ExecutionServerStepConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for a WAIT type step.</p>
   */
  inline const WaitStepConfiguration& GetWaitStepConfiguration() const { return m_waitStepConfiguration; }
  inline bool WaitStepConfigurationHasBeenSet() const { return m_waitStepConfigurationHasBeenSet; }
  template <typename WaitStepConfigurationT = WaitStepConfiguration>
  void SetWaitStepConfiguration(WaitStepConfigurationT&& value) {
    m_waitStepConfigurationHasBeenSet = true;
    m_waitStepConfiguration = std::forward<WaitStepConfigurationT>(value);
  }
  template <typename WaitStepConfigurationT = WaitStepConfiguration>
  RecoveryPlanExecutionStepConfiguration& WithWaitStepConfiguration(WaitStepConfigurationT&& value) {
    SetWaitStepConfiguration(std::forward<WaitStepConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ExecutionServerStepConfiguration m_executionServerStepConfiguration;

  WaitStepConfiguration m_waitStepConfiguration;
  bool m_executionServerStepConfigurationHasBeenSet = false;
  bool m_waitStepConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
