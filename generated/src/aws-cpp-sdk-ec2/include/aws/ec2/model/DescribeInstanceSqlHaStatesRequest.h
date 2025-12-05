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
class DescribeInstanceSqlHaStatesRequest : public EC2Request {
 public:
  AWS_EC2_API DescribeInstanceSqlHaStatesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceSqlHaStates"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the SQL Server High Availability instances to describe. If
   * omitted, the API returns SQL Server High Availability states for all SQL Server
   * High Availability instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  DescribeInstanceSqlHaStatesRequest& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  DescribeInstanceSqlHaStatesRequest& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
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
  DescribeInstanceSqlHaStatesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return for the request in a single page. The
   * remaining results can be seen by sending another request with the returned
   * <code>nextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeInstanceSqlHaStatesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more filters to apply to the results. Supported filters include:</p>
   * <ul> <li> <p> <code>tag:&lt;key&gt;</code> - The tag key and value pair assigned
   * to the instance. For example, to find all instances tagged with
   * <code>Owner:TeamA</code>, specify <code>tag:Owner</code> for the filter name and
   * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
   * - The tag key assigned to the instance.</p> </li> <li> <p> <code>haStatus</code>
   * - The SQL Server High Availability status of the SQL Server High Availability
   * instance (<code>processing</code> | <code>active</code> | <code>standby</code> |
   * <code>invalid</code>).</p> </li> <li> <p> <code>sqlServerLicenseUsage</code> -
   * The license type for the SQL Server license (<code>full</code> |
   * <code>waived</code>).</p> </li> </ul>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeInstanceSqlHaStatesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeInstanceSqlHaStatesRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
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
  inline DescribeInstanceSqlHaStatesRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_instanceIds;

  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::Vector<Filter> m_filters;

  bool m_dryRun{false};
  bool m_instanceIdsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
