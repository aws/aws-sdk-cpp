/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanStepConfiguration.h>

#include <utility>

namespace Aws {
namespace drs {
namespace Model {

/**
 */
class UpdateRecoveryPlanStepRequest : public DrsRequest {
 public:
  AWS_DRS_API UpdateRecoveryPlanStepRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRecoveryPlanStep"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan step to update.</p>
   */
  inline const Aws::String& GetRecoveryPlanStepArn() const { return m_recoveryPlanStepArn; }
  inline bool RecoveryPlanStepArnHasBeenSet() const { return m_recoveryPlanStepArnHasBeenSet; }
  template <typename RecoveryPlanStepArnT = Aws::String>
  void SetRecoveryPlanStepArn(RecoveryPlanStepArnT&& value) {
    m_recoveryPlanStepArnHasBeenSet = true;
    m_recoveryPlanStepArn = std::forward<RecoveryPlanStepArnT>(value);
  }
  template <typename RecoveryPlanStepArnT = Aws::String>
  UpdateRecoveryPlanStepRequest& WithRecoveryPlanStepArn(RecoveryPlanStepArnT&& value) {
    SetRecoveryPlanStepArn(std::forward<RecoveryPlanStepArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStepName() const { return m_stepName; }
  inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
  template <typename StepNameT = Aws::String>
  void SetStepName(StepNameT&& value) {
    m_stepNameHasBeenSet = true;
    m_stepName = std::forward<StepNameT>(value);
  }
  template <typename StepNameT = Aws::String>
  UpdateRecoveryPlanStepRequest& WithStepName(StepNameT&& value) {
    SetStepName(std::forward<StepNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecoveryPlanStepConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RecoveryPlanStepConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RecoveryPlanStepConfiguration>
  UpdateRecoveryPlanStepRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanStepArn;

  Aws::String m_stepName;

  RecoveryPlanStepConfiguration m_configuration;
  bool m_recoveryPlanStepArnHasBeenSet = false;
  bool m_stepNameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
