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
class DescribeMetricCategoriesRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeMetricCategoriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeMetricCategories"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the metric categories. If you specify IDs, you can't specify
   * <code>MaxResults</code> or <code>NextToken</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMetricCategoryIds() const { return m_metricCategoryIds; }
  inline bool MetricCategoryIdsHasBeenSet() const { return m_metricCategoryIdsHasBeenSet; }
  template <typename MetricCategoryIdsT = Aws::Vector<Aws::String>>
  void SetMetricCategoryIds(MetricCategoryIdsT&& value) {
    m_metricCategoryIdsHasBeenSet = true;
    m_metricCategoryIds = std::forward<MetricCategoryIdsT>(value);
  }
  template <typename MetricCategoryIdsT = Aws::Vector<Aws::String>>
  DescribeMetricCategoriesRequest& WithMetricCategoryIds(MetricCategoryIdsT&& value) {
    SetMetricCategoryIds(std::forward<MetricCategoryIdsT>(value));
    return *this;
  }
  template <typename MetricCategoryIdsT = Aws::String>
  DescribeMetricCategoriesRequest& AddMetricCategoryIds(MetricCategoryIdsT&& value) {
    m_metricCategoryIdsHasBeenSet = true;
    m_metricCategoryIds.emplace_back(std::forward<MetricCategoryIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters.</p> <ul> <li> <p> <code>metric-name</code> - The name of a
   * metric in the metric category.</p> </li> </ul>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeMetricCategoriesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeMetricCategoriesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
   * <p>Valid range: 5 - 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeMetricCategoriesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned from a previous paginated request. Pagination continues
   * from the end of the items returned by the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeMetricCategoriesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
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
  inline DescribeMetricCategoriesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_metricCategoryIds;

  Aws::Vector<Filter> m_filters;

  int m_maxResults{0};

  Aws::String m_nextToken;

  bool m_dryRun{false};
  bool m_metricCategoryIdsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
