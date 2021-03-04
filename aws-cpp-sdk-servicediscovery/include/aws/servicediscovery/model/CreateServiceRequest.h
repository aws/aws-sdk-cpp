/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/ServiceTypeOption.h>
#include <aws/servicediscovery/model/Tag.h>
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
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline CreateServiceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline CreateServiceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to the service.</p> <p>If you want AWS Cloud
     * Map to create an <code>SRV</code> record when you register an instance, and if
     * you're using a system that requires a specific <code>SRV</code> format, such as
     * <a href="http://www.haproxy.org/">HAProxy</a>, specify the following for
     * <code>Name</code>:</p> <ul> <li> <p>Start the name with an underscore (_), such
     * as <code>_exampleservice</code> </p> </li> <li> <p>End the name with
     * <i>._protocol</i>, such as <code>._tcp</code> </p> </li> </ul> <p>When you
     * register an instance, AWS Cloud Map creates an <code>SRV</code> record and
     * assigns a name to the record by concatenating the service name and the namespace
     * name, for example:</p> <p> <code>_exampleservice._tcp.example.com</code> </p>
     *  <p>For a single DNS namespace, you cannot create two services with names
     * that differ only by case (such as EXAMPLE and example). Otherwise, these
     * services will have the same DNS name. However, you can create multiple HTTP
     * services with names that differ only by case because HTTP services are case
     * sensitive.</p> 
     */
    inline CreateServiceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline CreateServiceRequest& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline CreateServiceRequest& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the namespace that you want to use to create the service.</p>
     */
    inline CreateServiceRequest& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}


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
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

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
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want AWS Cloud Map to create when you register an instance. </p>
     */
    inline const DnsConfig& GetDnsConfig() const{ return m_dnsConfig; }

    /**
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want AWS Cloud Map to create when you register an instance. </p>
     */
    inline bool DnsConfigHasBeenSet() const { return m_dnsConfigHasBeenSet; }

    /**
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want AWS Cloud Map to create when you register an instance. </p>
     */
    inline void SetDnsConfig(const DnsConfig& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = value; }

    /**
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want AWS Cloud Map to create when you register an instance. </p>
     */
    inline void SetDnsConfig(DnsConfig&& value) { m_dnsConfigHasBeenSet = true; m_dnsConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want AWS Cloud Map to create when you register an instance. </p>
     */
    inline CreateServiceRequest& WithDnsConfig(const DnsConfig& value) { SetDnsConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about the Amazon Route 53 records
     * that you want AWS Cloud Map to create when you register an instance. </p>
     */
    inline CreateServiceRequest& WithDnsConfig(DnsConfig&& value) { SetDnsConfig(std::move(value)); return *this;}


    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, AWS Cloud Map associates the health check with all the Route 53
     * DNS records that you specify in <code>DnsConfig</code>.</p>  <p>If
     * you specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">AWS Cloud Map
     * Pricing</a>.</p>
     */
    inline const HealthCheckConfig& GetHealthCheckConfig() const{ return m_healthCheckConfig; }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, AWS Cloud Map associates the health check with all the Route 53
     * DNS records that you specify in <code>DnsConfig</code>.</p>  <p>If
     * you specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">AWS Cloud Map
     * Pricing</a>.</p>
     */
    inline bool HealthCheckConfigHasBeenSet() const { return m_healthCheckConfigHasBeenSet; }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, AWS Cloud Map associates the health check with all the Route 53
     * DNS records that you specify in <code>DnsConfig</code>.</p>  <p>If
     * you specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">AWS Cloud Map
     * Pricing</a>.</p>
     */
    inline void SetHealthCheckConfig(const HealthCheckConfig& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = value; }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, AWS Cloud Map associates the health check with all the Route 53
     * DNS records that you specify in <code>DnsConfig</code>.</p>  <p>If
     * you specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">AWS Cloud Map
     * Pricing</a>.</p>
     */
    inline void SetHealthCheckConfig(HealthCheckConfig&& value) { m_healthCheckConfigHasBeenSet = true; m_healthCheckConfig = std::move(value); }

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, AWS Cloud Map associates the health check with all the Route 53
     * DNS records that you specify in <code>DnsConfig</code>.</p>  <p>If
     * you specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">AWS Cloud Map
     * Pricing</a>.</p>
     */
    inline CreateServiceRequest& WithHealthCheckConfig(const HealthCheckConfig& value) { SetHealthCheckConfig(value); return *this;}

    /**
     * <p> <i>Public DNS and HTTP namespaces only.</i> A complex type that contains
     * settings for an optional Route 53 health check. If you specify settings for a
     * health check, AWS Cloud Map associates the health check with all the Route 53
     * DNS records that you specify in <code>DnsConfig</code>.</p>  <p>If
     * you specify a health check configuration, you can specify either
     * <code>HealthCheckCustomConfig</code> or <code>HealthCheckConfig</code> but not
     * both.</p>  <p>For information about the charges for health checks,
     * see <a href="http://aws.amazon.com/cloud-map/pricing/">AWS Cloud Map
     * Pricing</a>.</p>
     */
    inline CreateServiceRequest& WithHealthCheckConfig(HealthCheckConfig&& value) { SetHealthCheckConfig(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline const HealthCheckCustomConfig& GetHealthCheckCustomConfig() const{ return m_healthCheckCustomConfig; }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline bool HealthCheckCustomConfigHasBeenSet() const { return m_healthCheckCustomConfigHasBeenSet; }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline void SetHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = value; }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline void SetHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { m_healthCheckCustomConfigHasBeenSet = true; m_healthCheckCustomConfig = std::move(value); }

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline CreateServiceRequest& WithHealthCheckCustomConfig(const HealthCheckCustomConfig& value) { SetHealthCheckCustomConfig(value); return *this;}

    /**
     * <p>A complex type that contains information about an optional custom health
     * check.</p>  <p>If you specify a health check configuration, you can
     * specify either <code>HealthCheckCustomConfig</code> or
     * <code>HealthCheckConfig</code> but not both.</p>  <p>You can't add,
     * update, or delete a <code>HealthCheckCustomConfig</code> configuration from an
     * existing service.</p>
     */
    inline CreateServiceRequest& WithHealthCheckCustomConfig(HealthCheckCustomConfig&& value) { SetHealthCheckCustomConfig(std::move(value)); return *this;}


    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateServiceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateServiceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateServiceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the service. Each tag consists of a key and an optional
     * value, both of which you define. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateServiceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records will be
     * registered for the service instances. The only valid value is
     * <code>HTTP</code>.</p>
     */
    inline const ServiceTypeOption& GetType() const{ return m_type; }

    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records will be
     * registered for the service instances. The only valid value is
     * <code>HTTP</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records will be
     * registered for the service instances. The only valid value is
     * <code>HTTP</code>.</p>
     */
    inline void SetType(const ServiceTypeOption& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records will be
     * registered for the service instances. The only valid value is
     * <code>HTTP</code>.</p>
     */
    inline void SetType(ServiceTypeOption&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records will be
     * registered for the service instances. The only valid value is
     * <code>HTTP</code>.</p>
     */
    inline CreateServiceRequest& WithType(const ServiceTypeOption& value) { SetType(value); return *this;}

    /**
     * <p>If present, specifies that the service instances are only discoverable using
     * the <code>DiscoverInstances</code> API operation. No DNS records will be
     * registered for the service instances. The only valid value is
     * <code>HTTP</code>.</p>
     */
    inline CreateServiceRequest& WithType(ServiceTypeOption&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    ServiceTypeOption m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
