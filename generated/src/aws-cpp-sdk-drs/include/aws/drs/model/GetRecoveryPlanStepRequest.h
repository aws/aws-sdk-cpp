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
class GetRecoveryPlanStepRequest : public DrsRequest {
 public:
  AWS_DRS_API GetRecoveryPlanStepRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecoveryPlanStep"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan step to retrieve.</p>
   */
  inline const Aws::String& GetRecoveryPlanStepArn() const { return m_recoveryPlanStepArn; }
  inline bool RecoveryPlanStepArnHasBeenSet() const { return m_recoveryPlanStepArnHasBeenSet; }
  template <typename RecoveryPlanStepArnT = Aws::String>
  void SetRecoveryPlanStepArn(RecoveryPlanStepArnT&& value) {
    m_recoveryPlanStepArnHasBeenSet = true;
    m_recoveryPlanStepArn = std::forward<RecoveryPlanStepArnT>(value);
  }
  template <typename RecoveryPlanStepArnT = Aws::String>
  GetRecoveryPlanStepRequest& WithRecoveryPlanStepArn(RecoveryPlanStepArnT&& value) {
    SetRecoveryPlanStepArn(std::forward<RecoveryPlanStepArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanStepArn;
  bool m_recoveryPlanStepArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
