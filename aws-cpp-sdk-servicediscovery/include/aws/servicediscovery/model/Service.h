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
#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A complex type that contains information about the specified
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Service">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API Service
  {
  public:
    Service();
    Service(Aws::Utils::Json::JsonView jsonValue);
    Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline Service& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline Service& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that AWS Cloud Map assigned to the service when you created it.</p>
     */
    inline Service& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline Service& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline Service& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that AWS Cloud Map assigns to the service when
     * you create it.</p>
     */
    inline Service& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline Service& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline Service& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline Service& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline Service& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline Service& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the namespace that was used to create the service.</p>
     */
    inline Service& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}


    /**
     * <p>The description of the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the service.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the service.</p>
     */
    inline Service& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the service.</p>
     */
    inline Service& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the service.</p>
     */
    inline Service& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline Service& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want AWS Cloud Map to create when you register an instance.</p>
     */
    inline const DnsConfig& GetDnsConfig() const{ return m_dnsConfig; }

    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want AWS Cloud Map to create when you register an instance.</p>
     */
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }

    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want AWS Cloud Map to create when you register an instance.</p>
     */
    inline void SetDnsConfig(const DnsConfig& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = value; }

    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want AWS Cloud Map to create when you register an instance.</p>
     */
    inline void SetDnsConfig(DnsConfig&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want AWS Cloud Map to create when you register an instance.</p>
     */
    inline Service& WithDnsConfig(const DnsConfig& value) { SetDnsConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about the Route 53 DNS records that
     * you want AWS Cloud Map to create when you register an instance.</p>
     */
    inline Service& WithDnsConfig(DnsConfig&& value) { SetDnsConfig(std::move(value)); return *this;}


    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, AWS Cloud
     * Map associates the health check with the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, AWS Cloud
     * Map associates the health check with the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, AWS Cloud
     * Map associates the health check with the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, AWS Cloud
     * Map associates the health check with the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, AWS Cloud
     * Map associates the health check with the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline Service& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, AWS Cloud
     * Map associates the health check with the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
     * Pricing</a>.</p>
     */
    inline Service& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p> <important> <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> </important>
     */
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const{ return m_healthCheckCustomConfig; }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p> <important> <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> </important>
     */
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p> <important> <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> </important>
     */
    inline void SetHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = value; }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p> <important> <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> </important>
     */
    inline void SetHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p> <important> <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> </important>
     */
    inline Service& WithHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { SetHealthCheckCustomConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p> <important> <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p> </important>
     */
    inline Service& WithHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { SetHealthCheckCustomConfig(std::move(value)); return *this;}


    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline Service& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the service was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline Service& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline Service& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline Service& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of executing the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp.</p>
     */
    inline Service& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
