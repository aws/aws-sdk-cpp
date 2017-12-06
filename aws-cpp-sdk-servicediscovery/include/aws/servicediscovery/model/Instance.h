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
   * <p>A complex type that contains information about an instance that Amazon Route
   * 53 creates when you submit a <code>RegisterInstance</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Instance">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API Instance
  {
  public:
    Instance();
    Instance(const Aws::Utils::Json::JsonValue& jsonValue);
    Instance& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline Instance& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline Instance& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An identifier that you want to associate with the instance. Note the
     * following:</p> <ul> <li> <p>You can use this value to update an existing
     * instance.</p> </li> <li> <p>To associate a new instance, you must specify a
     * value that is unique among instances that you associate by using the same
     * service.</p> </li> </ul>
     */
    inline Instance& WithId(const char* value) { SetId(value); return *this;}


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
    inline Instance& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline Instance& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that you can use to resolve concurrent creation
     * requests. <code>CreatorRequestId</code> helps to determine if a specific client
     * owns the namespace.</p>
     */
    inline Instance& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string map that contains attribute keys and values. Supported attribute
     * keys include the following:</p> <ul> <li> <p> <code>AWS_INSTANCE_PORT</code>:
     * The port on the endpoint that you want Amazon Route 53 to perform health checks
     * on. This value is also used for the port value in an SRV record if the service
     * that you specify includes an SRV record. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_IP</code>: If the
     * service that you specify contains a resource record set template for an A or
     * AAAA record, the IP address that you want Amazon Route 53 to use for the value
     * of the A record.</p> </li> <li> <p> <code>AWS_INSTANCE_WEIGHT</code>: The weight
     * value in an SRV record if the service that you specify includes an SRV record.
     * You can also specify a default weight that is applied to all instances in the
     * <code>Service</code> configuration. For more information, see
     * <a>CreateService</a>.</p> </li> <li> <p> <code>AWS_INSTANCE_PRIORITY</code>: The
     * priority value in an SRV record if the service that you specify includes an SRV
     * record.</p> </li> </ul>
     */
    inline Instance& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
