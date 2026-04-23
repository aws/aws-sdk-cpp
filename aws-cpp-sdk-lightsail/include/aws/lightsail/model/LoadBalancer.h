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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/LoadBalancerState.h>
#include <aws/lightsail/model/LoadBalancerProtocol.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/InstanceHealthSummary.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateSummary.h>
#include <aws/lightsail/model/LoadBalancerAttributeName.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the Lightsail load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancer">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API LoadBalancer
  {
  public:
    LoadBalancer();
    LoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    LoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline LoadBalancer& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline LoadBalancer& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer (e.g., <code>my-load-balancer</code>).</p>
     */
    inline LoadBalancer& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline LoadBalancer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline LoadBalancer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline LoadBalancer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline LoadBalancer& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline LoadBalancer& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline LoadBalancer& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline LoadBalancer& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline LoadBalancer& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The AWS Region where your load balancer was created (e.g.,
     * <code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The AWS Region where your load balancer was created (e.g.,
     * <code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The AWS Region where your load balancer was created (e.g.,
     * <code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The AWS Region where your load balancer was created (e.g.,
     * <code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The AWS Region where your load balancer was created (e.g.,
     * <code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline LoadBalancer& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The AWS Region where your load balancer was created (e.g.,
     * <code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline LoadBalancer& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The resource type (e.g., <code>LoadBalancer</code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type (e.g., <code>LoadBalancer</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type (e.g., <code>LoadBalancer</code>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type (e.g., <code>LoadBalancer</code>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type (e.g., <code>LoadBalancer</code>.</p>
     */
    inline LoadBalancer& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type (e.g., <code>LoadBalancer</code>.</p>
     */
    inline LoadBalancer& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline LoadBalancer& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline LoadBalancer& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline LoadBalancer& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline LoadBalancer& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline LoadBalancer& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline LoadBalancer& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline LoadBalancer& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline const LoadBalancerState& GetState() const{ return m_state; }

    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline void SetState(const LoadBalancerState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline void SetState(LoadBalancerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline LoadBalancer& WithState(const LoadBalancerState& value) { SetState(value); return *this;}

    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline LoadBalancer& WithState(LoadBalancerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline const LoadBalancerProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline void SetProtocol(const LoadBalancerProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline void SetProtocol(LoadBalancerProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline LoadBalancer& WithProtocol(const LoadBalancerProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline LoadBalancer& WithProtocol(LoadBalancerProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline const Aws::Vector<int>& GetPublicPorts() const{ return m_publicPorts; }

    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline bool PublicPortsHasBeenSet() const { return m_publicPortsHasBeenSet; }

    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline void SetPublicPorts(const Aws::Vector<int>& value) { m_publicPortsHasBeenSet = true; m_publicPorts = value; }

    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline void SetPublicPorts(Aws::Vector<int>&& value) { m_publicPortsHasBeenSet = true; m_publicPorts = std::move(value); }

    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline LoadBalancer& WithPublicPorts(const Aws::Vector<int>& value) { SetPublicPorts(value); return *this;}

    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline LoadBalancer& WithPublicPorts(Aws::Vector<int>&& value) { SetPublicPorts(std::move(value)); return *this;}

    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline LoadBalancer& AddPublicPorts(int value) { m_publicPortsHasBeenSet = true; m_publicPorts.push_back(value); return *this; }


    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline LoadBalancer& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline LoadBalancer& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline LoadBalancer& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The port where the load balancer will direct traffic to your Lightsail
     * instances. For HTTP traffic, it's port 80. For HTTPS traffic, it's port 443.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>The port where the load balancer will direct traffic to your Lightsail
     * instances. For HTTP traffic, it's port 80. For HTTPS traffic, it's port 443.</p>
     */
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

    /**
     * <p>The port where the load balancer will direct traffic to your Lightsail
     * instances. For HTTP traffic, it's port 80. For HTTPS traffic, it's port 443.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>The port where the load balancer will direct traffic to your Lightsail
     * instances. For HTTP traffic, it's port 80. For HTTPS traffic, it's port 443.</p>
     */
    inline LoadBalancer& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline const Aws::Vector<InstanceHealthSummary>& GetInstanceHealthSummary() const{ return m_instanceHealthSummary; }

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline bool InstanceHealthSummaryHasBeenSet() const { return m_instanceHealthSummaryHasBeenSet; }

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline void SetInstanceHealthSummary(const Aws::Vector<InstanceHealthSummary>& value) { m_instanceHealthSummaryHasBeenSet = true; m_instanceHealthSummary = value; }

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline void SetInstanceHealthSummary(Aws::Vector<InstanceHealthSummary>&& value) { m_instanceHealthSummaryHasBeenSet = true; m_instanceHealthSummary = std::move(value); }

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline LoadBalancer& WithInstanceHealthSummary(const Aws::Vector<InstanceHealthSummary>& value) { SetInstanceHealthSummary(value); return *this;}

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline LoadBalancer& WithInstanceHealthSummary(Aws::Vector<InstanceHealthSummary>&& value) { SetInstanceHealthSummary(std::move(value)); return *this;}

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline LoadBalancer& AddInstanceHealthSummary(const InstanceHealthSummary& value) { m_instanceHealthSummaryHasBeenSet = true; m_instanceHealthSummary.push_back(value); return *this; }

    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline LoadBalancer& AddInstanceHealthSummary(InstanceHealthSummary&& value) { m_instanceHealthSummaryHasBeenSet = true; m_instanceHealthSummary.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificateSummary>& GetTlsCertificateSummaries() const{ return m_tlsCertificateSummaries; }

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline bool TlsCertificateSummariesHasBeenSet() const { return m_tlsCertificateSummariesHasBeenSet; }

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline void SetTlsCertificateSummaries(const Aws::Vector<LoadBalancerTlsCertificateSummary>& value) { m_tlsCertificateSummariesHasBeenSet = true; m_tlsCertificateSummaries = value; }

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline void SetTlsCertificateSummaries(Aws::Vector<LoadBalancerTlsCertificateSummary>&& value) { m_tlsCertificateSummariesHasBeenSet = true; m_tlsCertificateSummaries = std::move(value); }

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline LoadBalancer& WithTlsCertificateSummaries(const Aws::Vector<LoadBalancerTlsCertificateSummary>& value) { SetTlsCertificateSummaries(value); return *this;}

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline LoadBalancer& WithTlsCertificateSummaries(Aws::Vector<LoadBalancerTlsCertificateSummary>&& value) { SetTlsCertificateSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline LoadBalancer& AddTlsCertificateSummaries(const LoadBalancerTlsCertificateSummary& value) { m_tlsCertificateSummariesHasBeenSet = true; m_tlsCertificateSummaries.push_back(value); return *this; }

    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline LoadBalancer& AddTlsCertificateSummaries(LoadBalancerTlsCertificateSummary&& value) { m_tlsCertificateSummariesHasBeenSet = true; m_tlsCertificateSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline const Aws::Map<LoadBalancerAttributeName, Aws::String>& GetConfigurationOptions() const{ return m_configurationOptions; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline bool ConfigurationOptionsHasBeenSet() const { return m_configurationOptionsHasBeenSet; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline void SetConfigurationOptions(const Aws::Map<LoadBalancerAttributeName, Aws::String>& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions = value; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline void SetConfigurationOptions(Aws::Map<LoadBalancerAttributeName, Aws::String>&& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions = std::move(value); }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& WithConfigurationOptions(const Aws::Map<LoadBalancerAttributeName, Aws::String>& value) { SetConfigurationOptions(value); return *this;}

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& WithConfigurationOptions(Aws::Map<LoadBalancerAttributeName, Aws::String>&& value) { SetConfigurationOptions(std::move(value)); return *this;}

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& AddConfigurationOptions(const LoadBalancerAttributeName& key, const Aws::String& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(key, value); return *this; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& AddConfigurationOptions(LoadBalancerAttributeName&& key, const Aws::String& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& AddConfigurationOptions(const LoadBalancerAttributeName& key, Aws::String&& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& AddConfigurationOptions(LoadBalancerAttributeName&& key, Aws::String&& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& AddConfigurationOptions(LoadBalancerAttributeName&& key, const char* value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline LoadBalancer& AddConfigurationOptions(const LoadBalancerAttributeName& key, const char* value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    ResourceLocation m_location;
    bool m_locationHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet;

    LoadBalancerState m_state;
    bool m_stateHasBeenSet;

    LoadBalancerProtocol m_protocol;
    bool m_protocolHasBeenSet;

    Aws::Vector<int> m_publicPorts;
    bool m_publicPortsHasBeenSet;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;

    int m_instancePort;
    bool m_instancePortHasBeenSet;

    Aws::Vector<InstanceHealthSummary> m_instanceHealthSummary;
    bool m_instanceHealthSummaryHasBeenSet;

    Aws::Vector<LoadBalancerTlsCertificateSummary> m_tlsCertificateSummaries;
    bool m_tlsCertificateSummariesHasBeenSet;

    Aws::Map<LoadBalancerAttributeName, Aws::String> m_configurationOptions;
    bool m_configurationOptionsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
