/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ListRecoveryPlanExecutionStepsFilter.h>

#include <utility>

namespace Aws {
namespace drs {
namespace Model {

/**
 */
class ListRecoveryPlanExecutionStepsRequest : public DrsRequest {
 public:
  AWS_DRS_API ListRecoveryPlanExecutionStepsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRecoveryPlanExecutionSteps"; }

  AWS_DRS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Recovery Plan execution.</p>
   */
  inline const Aws::String& GetRecoveryPlanExecutionArn() const { return m_recoveryPlanExecutionArn; }
  inline bool RecoveryPlanExecutionArnHasBeenSet() const { return m_recoveryPlanExecutionArnHasBeenSet; }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  void SetRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    m_recoveryPlanExecutionArnHasBeenSet = true;
    m_recoveryPlanExecutionArn = std::forward<RecoveryPlanExecutionArnT>(value);
  }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  ListRecoveryPlanExecutionStepsRequest& WithRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    SetRecoveryPlanExecutionArn(std::forward<RecoveryPlanExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters for listing execution steps.</p>
   */
  inline const ListRecoveryPlanExecutionStepsFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = ListRecoveryPlanExecutionStepsFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = ListRecoveryPlanExecutionStepsFilter>
  ListRecoveryPlanExecutionStepsRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRecoveryPlanExecutionStepsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecoveryPlanExecutionStepsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recoveryPlanExecutionArn;

  ListRecoveryPlanExecutionStepsFilter m_filter;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_recoveryPlanExecutionArnHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
