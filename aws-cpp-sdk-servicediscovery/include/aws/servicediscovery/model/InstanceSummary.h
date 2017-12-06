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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the instances that you created
   * by using a specified service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/InstanceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API InstanceSummary
  {
  public:
    InstanceSummary();
    InstanceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline InstanceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline InstanceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for an instance that you created by using a specified service.</p>
     */
    inline InstanceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contain attribute keys and values for an instance.
     * Supported attribute keys include the following:</p> <ul> <li> <p>
     * <code>AWS_INSTANCE_PORT</code>: The port on the endpoint that you want Amazon
     * Route 53 to perform health checks on. This value is also used for the port value
     * in an SRV record if the service that you specify includes an SRV record. For
     * more information, see <a>CreateService</a>.</p> </li> <li> <p>
     * <code>AWS_INSTANCE_IP</code>: If the service that you specify contains a
     * resource record set template for an A or AAAA record, the IP address that you
     * want Amazon Route 53 to use for the value of the A record.</p> </li> </ul>
     */
    inline InstanceSummary& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
