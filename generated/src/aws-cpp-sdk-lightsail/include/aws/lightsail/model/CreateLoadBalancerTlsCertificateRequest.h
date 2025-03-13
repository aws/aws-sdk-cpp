/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateLoadBalancerTlsCertificateRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateLoadBalancerTlsCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancerTlsCertificate"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The load balancer name where you want to create the SSL/TLS certificate.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    CreateLoadBalancerTlsCertificateRequest& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL/TLS certificate name.</p> <p>You can have up to 10 certificates in
     * your account at one time. Each Lightsail load balancer can have up to 2
     * certificates associated with it at one time. There is also an overall limit to
     * the number of certificates that can be issue in a 365-day period. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    CreateLoadBalancerTlsCertificateRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name (<code>example.com</code>) for your SSL/TLS certificate.</p>
     */
    inline const Aws::String& GetCertificateDomainName() const { return m_certificateDomainName; }
    inline bool CertificateDomainNameHasBeenSet() const { return m_certificateDomainNameHasBeenSet; }
    template<typename CertificateDomainNameT = Aws::String>
    void SetCertificateDomainName(CertificateDomainNameT&& value) { m_certificateDomainNameHasBeenSet = true; m_certificateDomainName = std::forward<CertificateDomainNameT>(value); }
    template<typename CertificateDomainNameT = Aws::String>
    CreateLoadBalancerTlsCertificateRequest& WithCertificateDomainName(CertificateDomainNameT&& value) { SetCertificateDomainName(std::forward<CertificateDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings listing alternative domains and subdomains for your
     * SSL/TLS certificate. Lightsail will de-dupe the names for you. You can have a
     * maximum of 9 alternative names (in addition to the 1 primary domain). We do not
     * support wildcards (<code>*.example.com</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateAlternativeNames() const { return m_certificateAlternativeNames; }
    inline bool CertificateAlternativeNamesHasBeenSet() const { return m_certificateAlternativeNamesHasBeenSet; }
    template<typename CertificateAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetCertificateAlternativeNames(CertificateAlternativeNamesT&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames = std::forward<CertificateAlternativeNamesT>(value); }
    template<typename CertificateAlternativeNamesT = Aws::Vector<Aws::String>>
    CreateLoadBalancerTlsCertificateRequest& WithCertificateAlternativeNames(CertificateAlternativeNamesT&& value) { SetCertificateAlternativeNames(std::forward<CertificateAlternativeNamesT>(value)); return *this;}
    template<typename CertificateAlternativeNamesT = Aws::String>
    CreateLoadBalancerTlsCertificateRequest& AddCertificateAlternativeNames(CertificateAlternativeNamesT&& value) { m_certificateAlternativeNamesHasBeenSet = true; m_certificateAlternativeNames.emplace_back(std::forward<CertificateAlternativeNamesT>(value)); return *this; }
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
    CreateLoadBalancerTlsCertificateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLoadBalancerTlsCertificateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_certificateDomainName;
    bool m_certificateDomainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateAlternativeNames;
    bool m_certificateAlternativeNamesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
