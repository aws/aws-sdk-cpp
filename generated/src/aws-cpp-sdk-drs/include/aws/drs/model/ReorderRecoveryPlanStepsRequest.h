/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/Drs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace drs {
namespace Model {

/**
 */
class ReorderRecoveryPlanStepsRequest : public DrsRequest {
 public:
  AWS_DRS_API ReorderRecoveryPlanStepsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ReorderRecoveryPlanSteps"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan.</p>
   */
  inline const Aws::String& GetRecoveryPlanArn() const { return m_recoveryPlanArn; }
  inline bool RecoveryPlanArnHasBeenSet() const { return m_recoveryPlanArnHasBeenSet; }
  template <typename RecoveryPlanArnT = Aws::String>
  void SetRecoveryPlanArn(RecoveryPlanArnT&& value) {
    m_recoveryPlanArnHasBeenSet = true;
    m_recoveryPlanArn = std::forward<RecoveryPlanArnT>(value);
  }
  template <typename RecoveryPlanArnT = Aws::String>
  ReorderRecoveryPlanStepsRequest& WithRecoveryPlanArn(RecoveryPlanArnT&& value) {
    SetRecoveryPlanArn(std::forward<RecoveryPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ordered list of all step ARNs representing the desired sequence.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOrderedStepArns() const { return m_orderedStepArns; }
  inline bool OrderedStepArnsHasBeenSet() const { return m_orderedStepArnsHasBeenSet; }
  template <typename OrderedStepArnsT = Aws::Vector<Aws::String>>
  void SetOrderedStepArns(OrderedStepArnsT&& value) {
    m_orderedStepArnsHasBeenSet = true;
    m_orderedStepArns = std::forward<OrderedStepArnsT>(value);
  }
  template <typename OrderedStepArnsT = Aws::Vector<Aws::String>>
  ReorderRecoveryPlanStepsRequest& WithOrderedStepArns(OrderedStepArnsT&& value) {
    SetOrderedStepArns(std::forward<OrderedStepArnsT>(value));
    return *this;
  }
  template <typename OrderedStepArnsT = Aws::String>
  ReorderRecoveryPlanStepsRequest& AddOrderedStepArns(OrderedStepArnsT&& value) {
    m_orderedStepArnsHasBeenSet = true;
    m_orderedStepArns.emplace_back(std::forward<OrderedStepArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanArn;

  Aws::Vector<Aws::String> m_orderedStepArns;
  bool m_recoveryPlanArnHasBeenSet = false;
  bool m_orderedStepArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
