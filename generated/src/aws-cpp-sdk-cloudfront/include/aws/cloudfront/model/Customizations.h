/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/WebAclCustomization.h>
#include <aws/cloudfront/model/Certificate.h>
#include <aws/cloudfront/model/GeoRestrictionCustomization.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Customizations for the distribution tenant. For each distribution tenant, you
   * can specify the geographic restrictions, and the Amazon Resource Names (ARNs)
   * for the ACM certificate and WAF web ACL. These are specific values that you can
   * override or disable from the multi-tenant distribution that was used to create
   * the distribution tenant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Customizations">AWS
   * API Reference</a></p>
   */
  class Customizations
  {
  public:
    AWS_CLOUDFRONT_API Customizations() = default;
    AWS_CLOUDFRONT_API Customizations(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Customizations& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The WAF web ACL.</p>
     */
    inline const WebAclCustomization& GetWebAcl() const { return m_webAcl; }
    inline bool WebAclHasBeenSet() const { return m_webAclHasBeenSet; }
    template<typename WebAclT = WebAclCustomization>
    void SetWebAcl(WebAclT&& value) { m_webAclHasBeenSet = true; m_webAcl = std::forward<WebAclT>(value); }
    template<typename WebAclT = WebAclCustomization>
    Customizations& WithWebAcl(WebAclT&& value) { SetWebAcl(std::forward<WebAclT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Certificate Manager (ACM) certificate.</p>
     */
    inline const Certificate& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Certificate>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Certificate>
    Customizations& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic restrictions.</p>
     */
    inline const GeoRestrictionCustomization& GetGeoRestrictions() const { return m_geoRestrictions; }
    inline bool GeoRestrictionsHasBeenSet() const { return m_geoRestrictionsHasBeenSet; }
    template<typename GeoRestrictionsT = GeoRestrictionCustomization>
    void SetGeoRestrictions(GeoRestrictionsT&& value) { m_geoRestrictionsHasBeenSet = true; m_geoRestrictions = std::forward<GeoRestrictionsT>(value); }
    template<typename GeoRestrictionsT = GeoRestrictionCustomization>
    Customizations& WithGeoRestrictions(GeoRestrictionsT&& value) { SetGeoRestrictions(std::forward<GeoRestrictionsT>(value)); return *this;}
    ///@}
  private:

    WebAclCustomization m_webAcl;
    bool m_webAclHasBeenSet = false;

    Certificate m_certificate;
    bool m_certificateHasBeenSet = false;

    GeoRestrictionCustomization m_geoRestrictions;
    bool m_geoRestrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
