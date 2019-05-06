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
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_LIGHTSAIL_API CreateLoadBalancerTlsCertificateRequest : public LightsailRequest
  {
  public:
    CreateLoadBalancerTlsCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancerTlsCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline const Aws::String& GetCertificateDomainName() const{ return m_certificateDomainName; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline bool CertificateDomainNameHasBeenSet() const { return m_certificateDomainNameHasBeenSet; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline void SetCertificateDomainName(const Aws::String& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = value; }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline void SetCertificateDomainName(Aws::String&& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = std::move(value); }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline void SetCertificateDomainName(const char* value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName.assign(value); }

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateDomainName(const Aws::String& value) { SetCertificateDomainName(value); return *this;}

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateDomainName(Aws::String&& value) { SetCertificateDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name (e.g., <code>example.com</code>) for your SSL/TLS
     * certificate.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateDomainName(const char* value) { SetCertificateDomainName(value); return *this;}


    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAlternativeNames() const{ return m_certificateAlternativeNames; }

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline bool CertificateAlternativeNamesHasBeenSet() const { return m_certificateAlternativeNamesHasBeenSet; }

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = value; }

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline void SetCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = std::move(value); }

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateAlternativeNames(const Aws::Vector<Aws::String>& value) { SetCertificateAlternativeNames(value); return *this;}

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithCertificateAlternativeNames(Aws::Vector<Aws::String>&& value) { SetCertificateAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& AddCertificateAlternativeNames(const Aws::String& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& AddCertificateAlternativeNames(Aws::String&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (e.g., <code>*.example.com</code>).</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& AddCertificateAlternativeNames(const char* value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.push_back(value); return *this; }


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>To tag a resource after it has been created, see the <code>tag
     * resource</code> operation.</p>
     */
    inline CreateLoadBalancerTlsCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;

    Aws::String m_certificateDomainName;
    bool m_certificateDomainNameHasBeenSet;

    Aws::Vector<Aws::String> m_certificateAlternativeNames;
    bool m_certificateAlternativeNamesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
