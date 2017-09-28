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
   * <p>Contains the parameters for DescribeMovingAddresses.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeMovingAddressesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeMovingAddressesRequest : public EC2Request
  {
  public:
    DescribeMovingAddressesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMovingAddresses"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline DescribeMovingAddressesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline DescribeMovingAddressesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline DescribeMovingAddressesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>moving-status</code> - The
     * status of the Elastic IP address (<code>MovingToVpc</code> |
     * <code>RestoringToClassic</code>).</p> </li> </ul>
     */
    inline DescribeMovingAddressesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeMovingAddressesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1000; if <code>MaxResults</code> is given a value outside of this range, an
     * error is returned.</p> <p>Default: If no value is provided, the default is
     * 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1000; if <code>MaxResults</code> is given a value outside of this range, an
     * error is returned.</p> <p>Default: If no value is provided, the default is
     * 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results of the initial request can be seen by sending another request
     * with the returned <code>NextToken</code> value. This value can be between 5 and
     * 1000; if <code>MaxResults</code> is given a value outside of this range, an
     * error is returned.</p> <p>Default: If no value is provided, the default is
     * 1000.</p>
     */
    inline DescribeMovingAddressesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMovingAddressesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMovingAddressesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeMovingAddressesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIps() const{ return m_publicIps; }

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline void SetPublicIps(const Aws::Vector<Aws::String>& value) { m_publicIpsHasBeenSet = true; m_publicIps = value; }

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline void SetPublicIps(Aws::Vector<Aws::String>&& value) { m_publicIpsHasBeenSet = true; m_publicIps = std::move(value); }

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline DescribeMovingAddressesRequest& WithPublicIps(const Aws::Vector<Aws::String>& value) { SetPublicIps(value); return *this;}

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline DescribeMovingAddressesRequest& WithPublicIps(Aws::Vector<Aws::String>&& value) { SetPublicIps(std::move(value)); return *this;}

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline DescribeMovingAddressesRequest& AddPublicIps(const Aws::String& value) { m_publicIpsHasBeenSet = true; m_publicIps.push_back(value); return *this; }

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline DescribeMovingAddressesRequest& AddPublicIps(Aws::String&& value) { m_publicIpsHasBeenSet = true; m_publicIps.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Elastic IP addresses.</p>
     */
    inline DescribeMovingAddressesRequest& AddPublicIps(const char* value) { m_publicIpsHasBeenSet = true; m_publicIps.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_publicIps;
    bool m_publicIpsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
