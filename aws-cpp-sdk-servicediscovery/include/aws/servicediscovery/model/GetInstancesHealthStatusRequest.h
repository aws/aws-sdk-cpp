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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API GetInstancesHealthStatusRequest : public ServiceDiscoveryRequest
  {
  public:
    GetInstancesHealthStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstancesHealthStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline GetInstancesHealthStatusRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline GetInstancesHealthStatusRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that the instance is associated with.</p>
     */
    inline GetInstancesHealthStatusRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const{ return m_instances; }

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline void SetInstances(const Aws::Vector<Aws::String>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline void SetInstances(Aws::Vector<Aws::String>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline GetInstancesHealthStatusRequest& WithInstances(const Aws::Vector<Aws::String>& value) { SetInstances(value); return *this;}

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline GetInstancesHealthStatusRequest& WithInstances(Aws::Vector<Aws::String>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline GetInstancesHealthStatusRequest& AddInstances(const Aws::String& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline GetInstancesHealthStatusRequest& AddInstances(Aws::String&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the IDs of all the instances that you want to get the
     * health status for.</p> <p>If you omit <code>Instances</code>, AWS Cloud Map
     * returns the health status for all the instances that are associated with the
     * specified service.</p> <note> <p>To get the IDs for the instances that you've
     * registered by using a specified service, submit a <a>ListInstances</a>
     * request.</p> </note>
     */
    inline GetInstancesHealthStatusRequest& AddInstances(const char* value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }


    /**
     * <p>The maximum number of instances that you want AWS Cloud Map to return in the
     * response to a <code>GetInstancesHealthStatus</code> request. If you don't
     * specify a value for <code>MaxResults</code>, AWS Cloud Map returns up to 100
     * instances.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of instances that you want AWS Cloud Map to return in the
     * response to a <code>GetInstancesHealthStatus</code> request. If you don't
     * specify a value for <code>MaxResults</code>, AWS Cloud Map returns up to 100
     * instances.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of instances that you want AWS Cloud Map to return in the
     * response to a <code>GetInstancesHealthStatus</code> request. If you don't
     * specify a value for <code>MaxResults</code>, AWS Cloud Map returns up to 100
     * instances.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of instances that you want AWS Cloud Map to return in the
     * response to a <code>GetInstancesHealthStatus</code> request. If you don't
     * specify a value for <code>MaxResults</code>, AWS Cloud Map returns up to 100
     * instances.</p>
     */
    inline GetInstancesHealthStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline GetInstancesHealthStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline GetInstancesHealthStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>GetInstancesHealthStatus</code> request, omit this
     * value.</p> <p>If more than <code>MaxResults</code> instances match the specified
     * criteria, you can submit another <code>GetInstancesHealthStatus</code> request
     * to get the next group of results. Specify the value of <code>NextToken</code>
     * from the previous response in the next request.</p>
     */
    inline GetInstancesHealthStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::Vector<Aws::String> m_instances;
    bool m_instancesHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
