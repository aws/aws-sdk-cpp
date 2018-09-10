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
#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
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
  class AWS_SERVICEDISCOVERY_API CreateServiceRequest : public ServiceDiscoveryRequest
  {
  public:
    CreateServiceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline CreateServiceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline CreateServiceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to the service.</p>
     */
    inline CreateServiceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline CreateServiceRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline CreateServiceRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed
     * <code>CreateService</code> requests to be retried without the risk of executing
     * the operation twice. <code>CreatorRequestId</code> can be any unique string, for
     * example, a date/time stamp.</p>
     */
    inline CreateServiceRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A description for the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the service.</p>
     */
    inline CreateServiceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the service.</p>
     */
    inline CreateServiceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the service.</p>
     */
    inline CreateServiceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A complex type that contains information about the records that you want
     * Route 53 to create when you register an instance. </p>
     */
    inline const DnsConfig& GetDnsConfig() const{ return m_dnsConfig; }

    /**
     * <p>A complex type that contains information about the records that you want
     * Route 53 to create when you register an instance. </p>
     */
    inline void SetDnsConfig(const DnsConfig& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = value; }

    /**
     * <p>A complex type that contains information about the records that you want
     * Route 53 to create when you register an instance. </p>
     */
    inline void SetDnsConfig(DnsConfig&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about the records that you want
     * Route 53 to create when you register an instance. </p>
     */
    inline CreateServiceRequest& WithDnsConfig(const DnsConfig& value) { SetDnsConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about the records that you want
     * Route 53 to create when you register an instance. </p>
     */
    inline CreateServiceRequest& WithDnsConfig(DnsConfig&& value) { SetDnsConfig(std::move(value)); return *this;}


    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, Route 53
     * associates the health check with all the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing">Route 53
     * Pricing</a>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, Route 53
     * associates the health check with all the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing">Route 53
     * Pricing</a>.</p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, Route 53
     * associates the health check with all the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing">Route 53
     * Pricing</a>.</p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, Route 53
     * associates the health check with all the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing">Route 53
     * Pricing</a>.</p>
     */
    inline CreateServiceRequest& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p> <i>Public DNS namespaces only.</i> A complex type that contains settings for
     * an optional health check. If you specify settings for a health check, Route 53
     * associates the health check with all the records that you specify in
     * <code>DnsConfig</code>.</p> <p>For information about the charges for health
     * checks, see <a href="http://aws.amazon.com/route53/pricing">Route 53
     * Pricing</a>.</p>
     */
    inline CreateServiceRequest& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}


    
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const{ return m_healthCheckCustomConfig; }

    
    inline void SetHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = value; }

    
    inline void SetHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::move(value); }

    
    inline CreateServiceRequest& WithHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { SetHealthCheckCustomConfig(value); return *this;}

    
    inline CreateServiceRequest& WithHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { SetHealthCheckCustomConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    DnsConfig m_dnsConfig;
    bool m_dnsConfigHasBeenSet;

    HealthCheckConfig m_healthCheckConfig;
    bool m_healthCheckConfigHasBeenSet;

    HealthCheckCustomConfig m_healthCheckCustomConfig;
    bool m_healthCheckCustomConfigHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
