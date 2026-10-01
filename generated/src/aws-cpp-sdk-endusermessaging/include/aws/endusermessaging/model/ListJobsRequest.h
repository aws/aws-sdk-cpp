/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/JobStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace EndUserMessaging {
namespace Model {

/**
 */
class ListJobsRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API ListJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  AWS_ENDUSERMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is returned when
   * more results are available, and is null when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to jobs that have the specified status.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListJobsRequest& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to jobs for the specified brand profile.</p>
   */
  inline const Aws::String& GetBrandProfileId() const { return m_brandProfileId; }
  inline bool BrandProfileIdHasBeenSet() const { return m_brandProfileIdHasBeenSet; }
  template <typename BrandProfileIdT = Aws::String>
  void SetBrandProfileId(BrandProfileIdT&& value) {
    m_brandProfileIdHasBeenSet = true;
    m_brandProfileId = std::forward<BrandProfileIdT>(value);
  }
  template <typename BrandProfileIdT = Aws::String>
  ListJobsRequest& WithBrandProfileId(BrandProfileIdT&& value) {
    SetBrandProfileId(std::forward<BrandProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to jobs of the specified operation type.</p>
   */
  inline const Aws::String& GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  template <typename OperationTypeT = Aws::String>
  void SetOperationType(OperationTypeT&& value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = std::forward<OperationTypeT>(value);
  }
  template <typename OperationTypeT = Aws::String>
  ListJobsRequest& WithOperationType(OperationTypeT&& value) {
    SetOperationType(std::forward<OperationTypeT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  JobStatus m_status{JobStatus::NOT_SET};

  Aws::String m_brandProfileId;

  Aws::String m_operationType;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_brandProfileIdHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
