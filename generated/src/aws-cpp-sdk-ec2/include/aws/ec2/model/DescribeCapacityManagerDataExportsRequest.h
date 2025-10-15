/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeCapacityManagerDataExportsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeCapacityManagerDataExportsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityManagerDataExports"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> The IDs of the data export configurations to describe. If not specified, all
     * export configurations are returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityManagerDataExportIds() const { return m_capacityManagerDataExportIds; }
    inline bool CapacityManagerDataExportIdsHasBeenSet() const { return m_capacityManagerDataExportIdsHasBeenSet; }
    template<typename CapacityManagerDataExportIdsT = Aws::Vector<Aws::String>>
    void SetCapacityManagerDataExportIds(CapacityManagerDataExportIdsT&& value) { m_capacityManagerDataExportIdsHasBeenSet = true; m_capacityManagerDataExportIds = std::forward<CapacityManagerDataExportIdsT>(value); }
    template<typename CapacityManagerDataExportIdsT = Aws::Vector<Aws::String>>
    DescribeCapacityManagerDataExportsRequest& WithCapacityManagerDataExportIds(CapacityManagerDataExportIdsT&& value) { SetCapacityManagerDataExportIds(std::forward<CapacityManagerDataExportIdsT>(value)); return *this;}
    template<typename CapacityManagerDataExportIdsT = Aws::String>
    DescribeCapacityManagerDataExportsRequest& AddCapacityManagerDataExportIds(CapacityManagerDataExportIdsT&& value) { m_capacityManagerDataExportIdsHasBeenSet = true; m_capacityManagerDataExportIds.emplace_back(std::forward<CapacityManagerDataExportIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return in a single call. If not specified,
     * up to 1000 results are returned. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCapacityManagerDataExportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next page of results. Use this value in a subsequent call
     * to retrieve additional results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityManagerDataExportsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>. </p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeCapacityManagerDataExportsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more filters to narrow the results. Supported filters include export
     * status, creation date, and S3 bucket name. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeCapacityManagerDataExportsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeCapacityManagerDataExportsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_capacityManagerDataExportIds;
    bool m_capacityManagerDataExportIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
