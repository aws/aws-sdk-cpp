/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionStepStatus.h>

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
 * <p>Filters for listing Recovery Plan execution steps.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListRecoveryPlanExecutionStepsFilter">AWS
 * API Reference</a></p>
 */
class ListRecoveryPlanExecutionStepsFilter {
 public:
  AWS_DRS_API ListRecoveryPlanExecutionStepsFilter() = default;
  AWS_DRS_API ListRecoveryPlanExecutionStepsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API ListRecoveryPlanExecutionStepsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by execution step status.</p>
   */
  inline RecoveryPlanExecutionStepStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecoveryPlanExecutionStepStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListRecoveryPlanExecutionStepsFilter& WithStatus(RecoveryPlanExecutionStepStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  RecoveryPlanExecutionStepStatus m_status{RecoveryPlanExecutionStepStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
