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
    AWS_LIGHTSAIL_API CreateLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline int GetInstancePort() const{ return m_instancePort; }

    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline bool InstancePortHasBeenSet() const { return m_instancePortHasBeenSet; }

    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline void SetInstancePort(int value) { m_instancePortHasBeenSet = true; m_instancePort = value; }

    /**
     * <p>The instance port where you're creating your load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithInstancePort(int value) { SetInstancePort(value); return *this;}


    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>The path you provided to perform the load balancer health check. If you
     * didn't specify a health check path, Lightsail uses the root path of your website
     * (e.g., <code>"/"</code>).</p> <p>You may want to specify a custom health check
     * path other than the root of your application if your home page loads slowly or
     * has a lot of media or scripting on it.</p>
     */
    inline CreateLoadBalancerRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate.</p> <p>If you specify
     * <code>certificateName</code>, then <code>certificateDomainName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline const Aws::String& GetCertificateDomainName() const{ return m_certificateDomainName; }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline bool CertificateDomainNameHasBeenSet() const { return m_certificateDomainNameHasBeenSet; }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateDomainName(const Aws::String& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = value; }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateDomainName(Aws::String&& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = std::move(value); }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline void SetCertificateDomainName(const char* value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName.assign(value); }

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateDomainName(const Aws::String& value) { SetCertificateDomainName(value); return *this;}

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateDomainName(Aws::String&& value) { SetCertificateDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name with which your certificate is associated (e.g.,
     * <code>example.com</code>).</p> <p>If you specify
     * <code>certificateDomainName</code>, then <code>certificateName</code> is
     * required (and vice-versa).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateDomainName(const char* value) { SetCertificateDomainName(value); return *this;}


    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAlternativeNames() const{ return m_certificateAlternativeNames; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline bool CertificateAlternativeNamesHasBeenSet() const { return m_certificateAlternativeNamesHasBeenSet; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = value; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = std::move(value); }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { SetCertificateAlternativeNames(value); return *this;}

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& WithCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { SetCertificateAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(const Aws::String& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(Aws::String&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The optional alternative domains and subdomains to use with your SSL/TLS
     * certificate (e.g., <code>www.example.com</code>, <code>example.com</code>,
     * <code>m.example.com</code>, <code>blog.example.com</code>).</p>
     */
    inline CreateLoadBalancerRequest& AddCertificateAlternativeNames(const char* value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type for the load balancer.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTlsPolicyName() const{ return m_tlsPolicyName; }

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline bool TlsPolicyNameHasBeenSet() const { return m_tlsPolicyNameHasBeenSet; }

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetTlsPolicyName(const Aws::String& value) { m_tlsPolicyNameHasBeenSet = true; m_tlsPolicyName = value; }

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetTlsPolicyName(Aws::String&& value) { m_tlsPolicyNameHasBeenSet = true; m_tlsPolicyName = std::move(value); }

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline void SetTlsPolicyName(const char* value) { m_tlsPolicyNameHasBeenSet = true; m_tlsPolicyName.assign(value); }

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithTlsPolicyName(const Aws::String& value) { SetTlsPolicyName(value); return *this;}

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithTlsPolicyName(Aws::String&& value) { SetTlsPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the TLS policy to apply to the load balancer.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetLoadBalancerTlsPolicies.html">GetLoadBalancerTlsPolicies</a>
     * action to get a list of TLS policy names that you can specify.</p> <p>For more
     * information about load balancer TLS policies, see <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
     * TLS security policies on your Amazon Lightsail load balancers</a> in the
     * <i>Amazon Lightsail Developer Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithTlsPolicyName(const char* value) { SetTlsPolicyName(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    int m_instancePort;
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

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_tlsPolicyName;
    bool m_tlsPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
