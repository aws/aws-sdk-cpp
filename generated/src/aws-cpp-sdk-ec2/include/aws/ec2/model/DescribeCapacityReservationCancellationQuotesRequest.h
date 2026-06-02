/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Filter.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DescribeCapacityReservationCancellationQuotesRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeCapacityReservationCancellationQuotesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityReservationCancellationQuotes"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the cancellation quotes to describe.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityReservationCancellationQuoteIds() const {
    return m_capacityReservationCancellationQuoteIds;
  }
  inline bool CapacityReservationCancellationQuoteIdsHasBeenSet() const { return m_capacityReservationCancellationQuoteIdsHasBeenSet; }
  template <typename CapacityReservationCancellationQuoteIdsT = Aws::Vector<Aws::String>>
  void SetCapacityReservationCancellationQuoteIds(CapacityReservationCancellationQuoteIdsT&& value) {
    m_capacityReservationCancellationQuoteIdsHasBeenSet = true;
    m_capacityReservationCancellationQuoteIds = std::forward<CapacityReservationCancellationQuoteIdsT>(value);
  }
  template <typename CapacityReservationCancellationQuoteIdsT = Aws::Vector<Aws::String>>
  DescribeCapacityReservationCancellationQuotesRequest& WithCapacityReservationCancellationQuoteIds(
      CapacityReservationCancellationQuoteIdsT&& value) {
    SetCapacityReservationCancellationQuoteIds(std::forward<CapacityReservationCancellationQuoteIdsT>(value));
    return *this;
  }
  template <typename CapacityReservationCancellationQuoteIdsT = Aws::String>
  DescribeCapacityReservationCancellationQuotesRequest& AddCapacityReservationCancellationQuoteIds(
      CapacityReservationCancellationQuoteIdsT&& value) {
    m_capacityReservationCancellationQuoteIdsHasBeenSet = true;
    m_capacityReservationCancellationQuoteIds.emplace_back(std::forward<CapacityReservationCancellationQuoteIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeCapacityReservationCancellationQuotesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeCapacityReservationCancellationQuotesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DescribeCapacityReservationCancellationQuotesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more filters. Filter names and values are case-sensitive.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeCapacityReservationCancellationQuotesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeCapacityReservationCancellationQuotesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_capacityReservationCancellationQuoteIds;

  int m_maxResults{0};

  Aws::String m_nextToken;

  bool m_dryRun{false};

  Aws::Vector<Filter> m_filters;
  bool m_capacityReservationCancellationQuoteIdsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
