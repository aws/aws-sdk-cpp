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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicediscovery/model/HealthStatusFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API DiscoverInstancesRequest : public ServiceDiscoveryRequest
  {
  public:
    DiscoverInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverInstances"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline DiscoverInstancesRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of instances that you want Cloud Map to return in the
     * response to a <code>DiscoverInstances</code> request. If you don't specify a
     * value for <code>MaxResults</code>, Cloud Map returns up to 100 instances.</p>
     */
    inline DiscoverInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParameters() const{ return m_queryParameters; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline void SetQueryParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline void SetQueryParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& WithQueryParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParameters(value); return *this;}

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& WithQueryParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParameters(std::move(value)); return *this;}

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const Aws::String& key, const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, value); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(Aws::String&& key, const Aws::String& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const Aws::String& key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(Aws::String&& key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const char* key, Aws::String&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(Aws::String&& key, const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contains attributes with values that you can use to filter
     * instances by any custom attribute that you specified when you registered the
     * instance. Only instances that match all the specified key/value pairs will be
     * returned.</p>
     */
    inline DiscoverInstancesRequest& AddQueryParameters(const char* key, const char* value) { m_queryParametersHasBeenSet = true; m_queryParameters.emplace(key, value); return *this; }


    /**
     * <p>The health status of the instances that you want to discover.</p>
     */
    inline const HealthStatusFilter& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The health status of the instances that you want to discover.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>The health status of the instances that you want to discover.</p>
     */
    inline void SetHealthStatus(const HealthStatusFilter& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The health status of the instances that you want to discover.</p>
     */
    inline void SetHealthStatus(HealthStatusFilter&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The health status of the instances that you want to discover.</p>
     */
    inline DiscoverInstancesRequest& WithHealthStatus(const HealthStatusFilter& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The health status of the instances that you want to discover.</p>
     */
    inline DiscoverInstancesRequest& WithHealthStatus(HealthStatusFilter&& value) { SetHealthStatus(std::move(value)); return *this;}

  private:

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_queryParameters;
    bool m_queryParametersHasBeenSet;

    HealthStatusFilter m_healthStatus;
    bool m_healthStatusHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
