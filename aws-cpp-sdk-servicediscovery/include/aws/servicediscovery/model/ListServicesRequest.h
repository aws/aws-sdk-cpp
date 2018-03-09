﻿/*
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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/ServiceFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API ListServicesRequest : public ServiceDiscoveryRequest
  {
  public:
    ListServicesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServices"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline ListServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline ListServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>Route 53 gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> </note>
     */
    inline ListServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of services that you want Amazon Route 53 to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Route 53 returns up to 100 services.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of services that you want Amazon Route 53 to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Route 53 returns up to 100 services.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of services that you want Amazon Route 53 to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Route 53 returns up to 100 services.</p>
     */
    inline ListServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline const Aws::Vector<ServiceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<ServiceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline void SetFilters(Aws::Vector<ServiceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& WithFilters(const Aws::Vector<ServiceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& WithFilters(Aws::Vector<ServiceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& AddFilters(const ServiceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& AddFilters(ServiceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<ServiceFilter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
