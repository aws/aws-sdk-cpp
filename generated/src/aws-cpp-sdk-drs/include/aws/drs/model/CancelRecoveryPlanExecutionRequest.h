/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/Drs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace drs {
namespace Model {

/**
 */
class CancelRecoveryPlanExecutionRequest : public DrsRequest {
 public:
  AWS_DRS_API CancelRecoveryPlanExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelRecoveryPlanExecution"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan execution to cancel.</p>
   */
  inline const Aws::String& GetRecoveryPlanExecutionArn() const { return m_recoveryPlanExecutionArn; }
  inline bool RecoveryPlanExecutionArnHasBeenSet() const { return m_recoveryPlanExecutionArnHasBeenSet; }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  void SetRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    m_recoveryPlanExecutionArnHasBeenSet = true;
    m_recoveryPlanExecutionArn = std::forward<RecoveryPlanExecutionArnT>(value);
  }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  CancelRecoveryPlanExecutionRequest& WithRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    SetRecoveryPlanExecutionArn(std::forward<RecoveryPlanExecutionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionArn;
  bool m_recoveryPlanExecutionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
