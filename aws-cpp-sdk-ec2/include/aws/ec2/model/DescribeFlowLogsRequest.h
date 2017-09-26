/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Contains the parameters for DescribeFlowLogs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeFlowLogsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeFlowLogsRequest : public EC2Request
  {
  public:
    DescribeFlowLogsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlowLogs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilter() const{ return m_filter; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline void SetFilter(const Aws::Vector<Filter>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline void SetFilter(Aws::Vector<Filter>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline DescribeFlowLogsRequest& WithFilter(const Aws::Vector<Filter>& value) { SetFilter(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline DescribeFlowLogsRequest& WithFilter(Aws::Vector<Filter>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline DescribeFlowLogsRequest& AddFilter(const Filter& value) { m_filterHasBeenSet = true; m_filter.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>deliver-log-status</code> - The
     * status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
     * </li> <li> <p> <code>flow-log-id</code> - The ID of the flow log.</p> </li> <li>
     * <p> <code>log-group-name</code> - The name of the log group.</p> </li> <li> <p>
     * <code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p>
     * </li> <li> <p> <code>traffic-type</code> - The type of traffic
     * (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p> </li> </ul>
     */
    inline DescribeFlowLogsRequest& AddFilter(Filter&& value) { m_filterHasBeenSet = true; m_filter.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more flow log IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlowLogIds() const{ return m_flowLogIds; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline void SetFlowLogIds(const Aws::Vector<Aws::String>& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds = value; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline void SetFlowLogIds(Aws::Vector<Aws::String>&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds = std::move(value); }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DescribeFlowLogsRequest& WithFlowLogIds(const Aws::Vector<Aws::String>& value) { SetFlowLogIds(value); return *this;}

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DescribeFlowLogsRequest& WithFlowLogIds(Aws::Vector<Aws::String>&& value) { SetFlowLogIds(std::move(value)); return *this;}

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DescribeFlowLogsRequest& AddFlowLogIds(const Aws::String& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.push_back(value); return *this; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DescribeFlowLogsRequest& AddFlowLogIds(Aws::String&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more flow log IDs.</p>
     */
    inline DescribeFlowLogsRequest& AddFlowLogIds(const char* value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. You cannot specify this parameter and the flow log IDs parameter in
     * the same request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. You cannot specify this parameter and the flow log IDs parameter in
     * the same request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. You cannot specify this parameter and the flow log IDs parameter in
     * the same request.</p>
     */
    inline DescribeFlowLogsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeFlowLogsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeFlowLogsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline DescribeFlowLogsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filter;
    bool m_filterHasBeenSet;

    Aws::Vector<Aws::String> m_flowLogIds;
    bool m_flowLogIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
