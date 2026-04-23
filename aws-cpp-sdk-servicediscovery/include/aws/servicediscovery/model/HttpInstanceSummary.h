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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/HealthStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>In a response to a <a>DiscoverInstance</a> request,
   * <code>HttpInstanceSummary</code> contains information about one instance that
   * matches the values that you specified in the request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HttpInstanceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API HttpInstanceSummary
  {
  public:
    HttpInstanceSummary();
    HttpInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    HttpInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline HttpInstanceSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline HttpInstanceSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of an instance that matches the values that you specified in the
     * request.</p>
     */
    inline HttpInstanceSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline HttpInstanceSummary& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline HttpInstanceSummary& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the namespace that you specified when you registered the
     * instance.</p>
     */
    inline HttpInstanceSummary& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


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
    inline HttpInstanceSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline HttpInstanceSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that you specified when you registered the
     * instance.</p>
     */
    inline HttpInstanceSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>If you configured health checking in the service, the current health status
     * of the service instance.</p>
     */
    inline const HealthStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>If you configured health checking in the service, the current health status
     * of the service instance.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>If you configured health checking in the service, the current health status
     * of the service instance.</p>
     */
    inline void SetHealthStatus(const HealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>If you configured health checking in the service, the current health status
     * of the service instance.</p>
     */
    inline void SetHealthStatus(HealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>If you configured health checking in the service, the current health status
     * of the service instance.</p>
     */
    inline HttpInstanceSummary& WithHealthStatus(const HealthStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>If you configured health checking in the service, the current health status
     * of the service instance.</p>
     */
    inline HttpInstanceSummary& WithHealthStatus(HealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}


    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>If you included any attributes when you registered the instance, the values
     * of those attributes.</p>
     */
    inline HttpInstanceSummary& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    HealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
