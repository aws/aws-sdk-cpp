/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingViewSegmentTimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class ListBillingViewSegmentsRequest : public BillingRequest {
 public:
  AWS_BILLING_API ListBillingViewSegmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBillingViewSegments"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The billing period to query. If you don't provide a time range, the current
   * billing period, which is the calendar month in UTC, is used. </p>
   */
  inline const BillingViewSegmentTimeRange& GetTimeRange() const { return m_timeRange; }
  inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
  template <typename TimeRangeT = BillingViewSegmentTimeRange>
  void SetTimeRange(TimeRangeT&& value) {
    m_timeRangeHasBeenSet = true;
    m_timeRange = std::forward<TimeRangeT>(value);
  }
  template <typename TimeRangeT = BillingViewSegmentTimeRange>
  ListBillingViewSegmentsRequest& WithTimeRange(TimeRangeT&& value) {
    SetTimeRange(std::forward<TimeRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) that uniquely identifies the billing view to
   * query. If you don't provide an ARN, the caller's <code>PRIMARY</code> billing
   * view is used. The ARN must reference a primary billing view. Custom billing
   * views aren't supported. </p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ListBillingViewSegmentsRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of entries a paginated response contains. Valid values range from
   * 1 to 100. The default is 100. </p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBillingViewSegmentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pagination token that is used on subsequent calls to list billing view
   * segments. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBillingViewSegmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  BillingViewSegmentTimeRange m_timeRange;

  Aws::String m_arn;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_timeRangeHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
