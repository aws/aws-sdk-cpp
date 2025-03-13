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
  class DescribeFlowLogsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeFlowLogsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlowLogs"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeFlowLogsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>log-destination-type</code> - The type of destination for
     * the flow log data (<code>cloud-watch-logs</code> | <code>s3</code> |
     * <code>kinesis-data-firehose</code>).</p> </li> <li> <p> <code>flow-log-id</code>
     * - The ID of the flow log.</p> </li> <li> <p> <code>log-group-name</code> - The
     * name of the log group.</p> </li> <li> <p> <code>resource-id</code> - The ID of
     * the VPC, subnet, or network interface.</p> </li> <li> <p>
     * <code>traffic-type</code> - The type of traffic (<code>ACCEPT</code> |
     * <code>REJECT</code> | <code>ALL</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Vector<Filter>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Vector<Filter>>
    DescribeFlowLogsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterT = Filter>
    DescribeFlowLogsRequest& AddFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter.emplace_back(std::forward<FilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more flow log IDs.</p> <p>Constraint: Maximum of 1000 flow log
     * IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlowLogIds() const { return m_flowLogIds; }
    inline bool FlowLogIdsHasBeenSet() const { return m_flowLogIdsHasBeenSet; }
    template<typename FlowLogIdsT = Aws::Vector<Aws::String>>
    void SetFlowLogIds(FlowLogIdsT&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds = std::forward<FlowLogIdsT>(value); }
    template<typename FlowLogIdsT = Aws::Vector<Aws::String>>
    DescribeFlowLogsRequest& WithFlowLogIds(FlowLogIdsT&& value) { SetFlowLogIds(std::forward<FlowLogIdsT>(value)); return *this;}
    template<typename FlowLogIdsT = Aws::String>
    DescribeFlowLogsRequest& AddFlowLogIds(FlowLogIdsT&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.emplace_back(std::forward<FlowLogIdsT>(value)); return *this; }
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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeFlowLogsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of items. Pagination continues from the
     * end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFlowLogsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<Aws::String> m_flowLogIds;
    bool m_flowLogIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
