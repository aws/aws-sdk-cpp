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
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class AWS_SERVICEDISCOVERY_API RegisterInstanceRequest : public ServiceDiscoveryRequest
  {
  public:
    RegisterInstanceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline RegisterInstanceRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline RegisterInstanceRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service that you want to use for settings for the resource
     * record sets and health check that Amazon Route 53 will create.</p>
     */
    inline RegisterInstanceRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline RegisterInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline RegisterInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To register a new instance, you must specify a value
     * that is unique among instances that you register by using the same service.</p>
     * </li> </ul>
     */
    inline RegisterInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline RegisterInstanceRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline RegisterInstanceRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline RegisterInstanceRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contain attribute keys and values. Supported attribute keys
     * include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>: The
     * port on the endpoint that you want Amazon Route 53 to perform health checks on.
     * This value is also used for the port value in an SRV record if the service that
     * you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV4</code>: If the
     * service that you specify contains a resource record set template for an A
     * record, the IPv4 address that you want Amazon Route 53 to use for the value of
     * the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_IPV6</code>: If the service
     * that you specify contains a resource record set template for an AAAA record, the
     * IPv6 address that you want Amazon Route 53 to use for the value of the AAAA
     * record.</p> </li> </ul>
     */
    inline RegisterInstanceRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
