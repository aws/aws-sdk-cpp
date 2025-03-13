/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateLoadBalancerRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateLoadBalancerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    CreateLoadBalancerRequest& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline int GetInstancePort() const { return m_instancePort; }
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }
    inline CreateLoadBalancerRequest& WithInstancePort(int value) { SetInstancePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (<code>"/"</code>).</p> <p>You may want to specify a custom health check path
     * other than the root of your application if your home page loads slowly or has a
     * lot of media or scripting on it.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
    template<typename HealthCheckPathT = Aws::String>
    void SetHealthCheckPath(HealthCheckPathT&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::forward<HealthCheckPathT>(value); }
    template<typename HealthCheckPathT = Aws::String>
    CreateLoadBalancerRequest& WithHealthCheckPath(HealthCheckPathT&& value) { SetHealthCheckPath(std::forward<HealthCheckPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    CreateLoadBalancerRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name with which your certificate is associated
     * (<code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateDomainName() const { return m_certificateDomainName; }
    inline bool CertificateDomainNameHasBeenSet() const { return m_certificateDomainNameHasBeenSet; }
    template<typename CertificateDomainNameT = Aws::String>
    void SetCertificateDomainName(CertificateDomainNameT&& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = std::forward<CertificateDomainNameT>(value); }
    template<typename CertificateDomainNameT = Aws::String>
    CreateLoadBalancerRequest& WithCertificateDomainName(CertificateDomainNameT&& value) { SetCertificateDomainName(std::forward<CertificateDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (<code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAlternativeNames() const { return m_certificateAlternativeNames; }
    inline bool CertificateAlternativeNamesHasBeenSet() const { return m_certificateAlternativeNamesHasBeenSet; }
    template<typename CertificateAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetCertificateAlternativeNames(CertificateAlternativeNamesT&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = std::forward<CertificateAlternativeNamesT>(value); }
    template<typename CertificateAlternativeNamesT = Aws::Vector<Aws::String>>
    CreateLoadBalancerRequest& WithCertificateAlternativeNames(CertificateAlternativeNamesT&& value) { SetCertificateAlternativeNames(std::forward<CertificateAlternativeNamesT>(value)); return *this;}
    template<typename CertificateAlternativeNamesT = Aws::String>
    CreateLoadBalancerRequest& AddCertificateAlternativeNames(CertificateAlternativeNamesT&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.emplace_back(std::forward<CertificateAlternativeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLoadBalancerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLoadBalancerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p> <p>The default value is
     * <code>dualstack</code>.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateLoadBalancerRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTlsPolicyName() const { return m_tlsPolicyName; }
    inline bool TlsPolicyNameHasBeenSet() const { return m_tlsPolicyNameHasBeenSet; }
    template<typename TlsPolicyNameT = Aws::String>
    void SetTlsPolicyName(TlsPolicyNameT&& value) { m_tlsPolicyNameHasBeenSet = true; m_tlsPolicyName = std::forward<TlsPolicyNameT>(value); }
    template<typename TlsPolicyNameT = Aws::String>
    CreateLoadBalancerRequest& WithTlsPolicyName(TlsPolicyNameT&& value) { SetTlsPolicyName(std::forward<TlsPolicyNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    int m_instancePort{0};
    bool m_instancePortHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_certificateDomainName;
    bool m_certificateDomainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateAlternativeNames;
    bool m_certificateAlternativeNamesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_tlsPolicyName;
    bool m_tlsPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
