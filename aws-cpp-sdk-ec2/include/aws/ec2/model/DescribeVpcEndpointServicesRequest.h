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
   * <p>Contains the parameters for DescribeVpcEndpointServices.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpcEndpointServicesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeVpcEndpointServicesRequest : public EC2Request
  {
  public:
    DescribeVpcEndpointServicesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpointServices"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeVpcEndpointServicesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more service names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceNames() const{ return m_serviceNames; }

    /**
     * <p>One or more service names.</p>
     */
    inline void SetServiceNames(const Aws::Vector<Aws::String>& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = value; }

    /**
     * <p>One or more service names.</p>
     */
    inline void SetServiceNames(Aws::Vector<Aws::String>&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = std::move(value); }

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithServiceNames(const Aws::Vector<Aws::String>& value) { SetServiceNames(value); return *this;}

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithServiceNames(Aws::Vector<Aws::String>&& value) { SetServiceNames(std::move(value)); return *this;}

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& AddServiceNames(const Aws::String& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& AddServiceNames(Aws::String&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more service names.</p>
     */
    inline DescribeVpcEndpointServicesRequest& AddServiceNames(const char* value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>service-name</code>: The name of
     * the service.</p> </li> </ul>
     */
    inline DescribeVpcEndpointServicesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1000, we return only
     * 1000 items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1000, we return only
     * 1000 items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1000, we return only
     * 1000 items.</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline DescribeVpcEndpointServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_serviceNames;
    bool m_serviceNamesHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
