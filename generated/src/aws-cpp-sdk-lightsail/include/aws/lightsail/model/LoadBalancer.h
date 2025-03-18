/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/lightsail/model/IpAddressType.h>
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
   * <p>Describes a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancer">AWS
   * API Reference</a></p>
   */
  class LoadBalancer
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancer() = default;
    AWS_LIGHTSAIL_API LoadBalancer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the load balancer (<code>my-load-balancer</code>).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LoadBalancer& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LoadBalancer& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    LoadBalancer& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when your load balancer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LoadBalancer& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region where your load balancer was created
     * (<code>us-east-2a</code>). Lightsail automatically creates your load balancer
     * across Availability Zones.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    LoadBalancer& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type (<code>LoadBalancer</code>.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LoadBalancer& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LoadBalancer& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LoadBalancer& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DNS name of your Lightsail load balancer.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    LoadBalancer& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your load balancer. Valid values are below.</p>
     */
    inline LoadBalancerState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(LoadBalancerState value) { m_stateHasBeenSet = true; m_state = value; }
    inline LoadBalancer& WithState(LoadBalancerState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol you have enabled for your load balancer. Valid values are
     * below.</p> <p>You can't just have <code>HTTP_HTTPS</code>, but you can have just
     * <code>HTTP</code>.</p>
     */
    inline LoadBalancerProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(LoadBalancerProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline LoadBalancer& WithProtocol(LoadBalancerProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of public port settings for your load balancer. For HTTP, use port
     * 80. For HTTPS, use port 443.</p>
     */
    inline const Aws::Vector<int>& GetPublicPorts() const { return m_publicPorts; }
    inline bool PublicPortsHasBeenSet() const { return m_publicPortsHasBeenSet; }
    template<typename PublicPortsT = Aws::Vector<int>>
    void SetPublicPorts(PublicPortsT&& value) { m_publicPortsHasBeenSet = true; m_publicPorts = std::forward<PublicPortsT>(value); }
    template<typename PublicPortsT = Aws::Vector<int>>
    LoadBalancer& WithPublicPorts(PublicPortsT&& value) { SetPublicPorts(std::forward<PublicPortsT>(value)); return *this;}
    inline LoadBalancer& AddPublicPorts(int value) { m_publicPortsHasBeenSet = true; m_publicPorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path you specified to perform your health checks. If no path is
     * specified, the load balancer tries to make a request to the default (root)
     * page.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
    template<typename HealthCheckPathT = Aws::String>
    void SetHealthCheckPath(HealthCheckPathT&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::forward<HealthCheckPathT>(value); }
    template<typename HealthCheckPathT = Aws::String>
    LoadBalancer& WithHealthCheckPath(HealthCheckPathT&& value) { SetHealthCheckPath(std::forward<HealthCheckPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port where the load balancer will direct traffic to your Lightsail
     * instances. For HTTP traffic, it's port 80. For HTTPS traffic, it's port 443.</p>
     */
    inline int GetInstancePort() const { return m_instancePort; }
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }
    inline LoadBalancer& WithInstancePort(int value) { SetInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of InstanceHealthSummary objects describing the health of the load
     * balancer.</p>
     */
    inline const Aws::Vector<InstanceHealthSummary>& GetInstanceHealthSummary() const { return m_instanceHealthSummary; }
    inline bool InstanceHealthSummaryHasBeenSet() const { return m_instanceHealthSummaryHasBeenSet; }
    template<typename InstanceHealthSummaryT = Aws::Vector<InstanceHealthSummary>>
    void SetInstanceHealthSummary(InstanceHealthSummaryT&& value) { m_instanceHealthSummaryHasBeenSet = true; m_instanceHealthSummary = std::forward<InstanceHealthSummaryT>(value); }
    template<typename InstanceHealthSummaryT = Aws::Vector<InstanceHealthSummary>>
    LoadBalancer& WithInstanceHealthSummary(InstanceHealthSummaryT&& value) { SetInstanceHealthSummary(std::forward<InstanceHealthSummaryT>(value)); return *this;}
    template<typename InstanceHealthSummaryT = InstanceHealthSummary>
    LoadBalancer& AddInstanceHealthSummary(InstanceHealthSummaryT&& value) { m_instanceHealthSummaryHasBeenSet = true; m_instanceHealthSummary.emplace_back(std::forward<InstanceHealthSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of LoadBalancerTlsCertificateSummary objects that provide additional
     * information about the SSL/TLS certificates. For example, if <code>true</code>,
     * the certificate is attached to the load balancer.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificateSummary>& GetTlsCertificateSummaries() const { return m_tlsCertificateSummaries; }
    inline bool TlsCertificateSummariesHasBeenSet() const { return m_tlsCertificateSummariesHasBeenSet; }
    template<typename TlsCertificateSummariesT = Aws::Vector<LoadBalancerTlsCertificateSummary>>
    void SetTlsCertificateSummaries(TlsCertificateSummariesT&& value) { m_tlsCertificateSummariesHasBeenSet = true; m_tlsCertificateSummaries = std::forward<TlsCertificateSummariesT>(value); }
    template<typename TlsCertificateSummariesT = Aws::Vector<LoadBalancerTlsCertificateSummary>>
    LoadBalancer& WithTlsCertificateSummaries(TlsCertificateSummariesT&& value) { SetTlsCertificateSummaries(std::forward<TlsCertificateSummariesT>(value)); return *this;}
    template<typename TlsCertificateSummariesT = LoadBalancerTlsCertificateSummary>
    LoadBalancer& AddTlsCertificateSummaries(TlsCertificateSummariesT&& value) { m_tlsCertificateSummariesHasBeenSet = true; m_tlsCertificateSummaries.emplace_back(std::forward<TlsCertificateSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string to string map of the configuration options for your load balancer.
     * Valid values are listed below.</p>
     */
    inline const Aws::Map<LoadBalancerAttributeName, Aws::String>& GetConfigurationOptions() const { return m_configurationOptions; }
    inline bool ConfigurationOptionsHasBeenSet() const { return m_configurationOptionsHasBeenSet; }
    template<typename ConfigurationOptionsT = Aws::Map<LoadBalancerAttributeName, Aws::String>>
    void SetConfigurationOptions(ConfigurationOptionsT&& value) { m_configurationOptionsHasBeenSet = true; m_configurationOptions = std::forward<ConfigurationOptionsT>(value); }
    template<typename ConfigurationOptionsT = Aws::Map<LoadBalancerAttributeName, Aws::String>>
    LoadBalancer& WithConfigurationOptions(ConfigurationOptionsT&& value) { SetConfigurationOptions(std::forward<ConfigurationOptionsT>(value)); return *this;}
    inline LoadBalancer& AddConfigurationOptions(LoadBalancerAttributeName key, Aws::String value) {
      m_configurationOptionsHasBeenSet = true; m_configurationOptions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The IP address type of the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline LoadBalancer& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether HTTPS redirection is enabled for the
     * load balancer.</p>
     */
    inline bool GetHttpsRedirectionEnabled() const { return m_httpsRedirectionEnabled; }
    inline bool HttpsRedirectionEnabledHasBeenSet() const { return m_httpsRedirectionEnabledHasBeenSet; }
    inline void SetHttpsRedirectionEnabled(bool value) { m_httpsRedirectionEnabledHasBeenSet = true; m_httpsRedirectionEnabled = value; }
    inline LoadBalancer& WithHttpsRedirectionEnabled(bool value) { SetHttpsRedirectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the TLS security policy for the load balancer.</p>
     */
    inline const Aws::String& GetTlsPolicyName() const { return m_tlsPolicyName; }
    inline bool TlsPolicyNameHasBeenSet() const { return m_tlsPolicyNameHasBeenSet; }
    template<typename TlsPolicyNameT = Aws::String>
    void SetTlsPolicyName(TlsPolicyNameT&& value) { m_tlsPolicyNameHasBeenSet = true; m_tlsPolicyName = std::forward<TlsPolicyNameT>(value); }
    template<typename TlsPolicyNameT = Aws::String>
    LoadBalancer& WithTlsPolicyName(TlsPolicyNameT&& value) { SetTlsPolicyName(std::forward<TlsPolicyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    LoadBalancerState m_state{LoadBalancerState::NOT_SET};
    bool m_stateHasBeenSet = false;

    LoadBalancerProtocol m_protocol{LoadBalancerProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<int> m_publicPorts;
    bool m_publicPortsHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    int m_instancePort{0};
    bool m_instancePortHasBeenSet = false;

    Aws::Vector<InstanceHealthSummary> m_instanceHealthSummary;
    bool m_instanceHealthSummaryHasBeenSet = false;

    Aws::Vector<LoadBalancerTlsCertificateSummary> m_tlsCertificateSummaries;
    bool m_tlsCertificateSummariesHasBeenSet = false;

    Aws::Map<LoadBalancerAttributeName, Aws::String> m_configurationOptions;
    bool m_configurationOptionsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_httpsRedirectionEnabled{false};
    bool m_httpsRedirectionEnabledHasBeenSet = false;

    Aws::String m_tlsPolicyName;
    bool m_tlsPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
