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
  class DescribeReplaceRootVolumeTasksRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeReplaceRootVolumeTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplaceRootVolumeTasks"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the root volume replacement task to view.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplaceRootVolumeTaskIds() const{ return m_replaceRootVolumeTaskIds; }
    inline bool ReplaceRootVolumeTaskIdsHasBeenSet() const { return m_replaceRootVolumeTaskIdsHasBeenSet; }
    inline void SetReplaceRootVolumeTaskIds(const Aws::Vector<Aws::String>& value) { m_replaceRootVolumeTaskIdsHasBeenSet = true; m_replaceRootVolumeTaskIds = value; }
    inline void SetReplaceRootVolumeTaskIds(Aws::Vector<Aws::String>&& value) { m_replaceRootVolumeTaskIdsHasBeenSet = true; m_replaceRootVolumeTaskIds = std::move(value); }
    inline DescribeReplaceRootVolumeTasksRequest& WithReplaceRootVolumeTaskIds(const Aws::Vector<Aws::String>& value) { SetReplaceRootVolumeTaskIds(value); return *this;}
    inline DescribeReplaceRootVolumeTasksRequest& WithReplaceRootVolumeTaskIds(Aws::Vector<Aws::String>&& value) { SetReplaceRootVolumeTaskIds(std::move(value)); return *this;}
    inline DescribeReplaceRootVolumeTasksRequest& AddReplaceRootVolumeTaskIds(const Aws::String& value) { m_replaceRootVolumeTaskIdsHasBeenSet = true; m_replaceRootVolumeTaskIds.push_back(value); return *this; }
    inline DescribeReplaceRootVolumeTasksRequest& AddReplaceRootVolumeTaskIds(Aws::String&& value) { m_replaceRootVolumeTaskIdsHasBeenSet = true; m_replaceRootVolumeTaskIds.push_back(std::move(value)); return *this; }
    inline DescribeReplaceRootVolumeTasksRequest& AddReplaceRootVolumeTaskIds(const char* value) { m_replaceRootVolumeTaskIdsHasBeenSet = true; m_replaceRootVolumeTaskIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter to use:</p> <ul> <li> <p> <code>instance-id</code> - The ID of the
     * instance for which the root volume replacement task was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeReplaceRootVolumeTasksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeReplaceRootVolumeTasksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeReplaceRootVolumeTasksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeReplaceRootVolumeTasksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeReplaceRootVolumeTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeReplaceRootVolumeTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeReplaceRootVolumeTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeReplaceRootVolumeTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeReplaceRootVolumeTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_replaceRootVolumeTaskIds;
    bool m_replaceRootVolumeTaskIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
