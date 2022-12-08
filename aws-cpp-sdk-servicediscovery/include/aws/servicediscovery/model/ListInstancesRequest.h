/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class ListInstancesRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API ListInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInstances"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline ListInstancesRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline ListInstancesRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that you want to list instances for.</p>
     */
    inline ListInstancesRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline ListInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline ListInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>ListInstances</code> request, omit this value.</p> <p>If
     * more than <code>MaxResults</code> instances match the specified criteria, you
     * can submit another <code>ListInstances</code> request to get the next group of
     * results. Specify the value of <code>NextToken</code> from the previous response
     * in the next request.</p>
     */
    inline ListInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>ListInstances</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>ListInstances</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>ListInstances</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>ListInstances</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline ListInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
