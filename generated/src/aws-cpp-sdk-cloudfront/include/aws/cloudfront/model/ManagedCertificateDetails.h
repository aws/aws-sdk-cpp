/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/ManagedCertificateStatus.h>
#include <aws/cloudfront/model/ValidationTokenHost.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ValidationTokenDetail.h>
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
   * <p>Contains details about the CloudFront managed ACM certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ManagedCertificateDetails">AWS
   * API Reference</a></p>
   */
  class ManagedCertificateDetails
  {
  public:
    AWS_CLOUDFRONT_API ManagedCertificateDetails() = default;
    AWS_CLOUDFRONT_API ManagedCertificateDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ManagedCertificateDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ARN of the CloudFront managed ACM certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    ManagedCertificateDetails& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the CloudFront managed ACM certificate.</p>  <p>Your
     * distribution tenant will be updated with the latest certificate status. When
     * calling the <a
     * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistributionTenant.html">UpdateDistributionTenant</a>
     * operation, use the latest value for the <code>ETag</code>.</p> 
     */
    inline ManagedCertificateStatus GetCertificateStatus() const { return m_certificateStatus; }
    inline bool CertificateStatusHasBeenSet() const { return m_certificateStatusHasBeenSet; }
    inline void SetCertificateStatus(ManagedCertificateStatus value) { m_certificateStatusHasBeenSet = true; m_certificateStatus = value; }
    inline ManagedCertificateDetails& WithCertificateStatus(ManagedCertificateStatus value) { SetCertificateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the validation token host of the specified CloudFront
     * managed ACM certificate.</p> <ul> <li> <p>For <code>cloudfront</code>,
     * CloudFront will automatically serve the validation token. Choose this mode if
     * you can point the domain's DNS to CloudFront immediately.</p> </li> <li> <p>For
     * <code>self-hosted</code>, you serve the validation token from your existing
     * infrastructure. Choose this mode when you need to maintain current traffic flow
     * while your certificate is being issued. You can place the validation token at
     * the well-known path on your existing web server, wait for ACM to validate and
     * issue the certificate, and then update your DNS to point to CloudFront.</p>
     * </li> </ul>  <p>This setting only affects the initial certificate request.
     * Once the DNS points to CloudFront, all future certificate renewals are
     * automatically handled through CloudFront.</p> 
     */
    inline ValidationTokenHost GetValidationTokenHost() const { return m_validationTokenHost; }
    inline bool ValidationTokenHostHasBeenSet() const { return m_validationTokenHostHasBeenSet; }
    inline void SetValidationTokenHost(ValidationTokenHost value) { m_validationTokenHostHasBeenSet = true; m_validationTokenHost = value; }
    inline ManagedCertificateDetails& WithValidationTokenHost(ValidationTokenHost value) { SetValidationTokenHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the validation token of the specified CloudFront
     * managed ACM certificate.</p>
     */
    inline const Aws::Vector<ValidationTokenDetail>& GetValidationTokenDetails() const { return m_validationTokenDetails; }
    inline bool ValidationTokenDetailsHasBeenSet() const { return m_validationTokenDetailsHasBeenSet; }
    template<typename ValidationTokenDetailsT = Aws::Vector<ValidationTokenDetail>>
    void SetValidationTokenDetails(ValidationTokenDetailsT&& value) { m_validationTokenDetailsHasBeenSet = true; m_validationTokenDetails = std::forward<ValidationTokenDetailsT>(value); }
    template<typename ValidationTokenDetailsT = Aws::Vector<ValidationTokenDetail>>
    ManagedCertificateDetails& WithValidationTokenDetails(ValidationTokenDetailsT&& value) { SetValidationTokenDetails(std::forward<ValidationTokenDetailsT>(value)); return *this;}
    template<typename ValidationTokenDetailsT = ValidationTokenDetail>
    ManagedCertificateDetails& AddValidationTokenDetails(ValidationTokenDetailsT&& value) { m_validationTokenDetailsHasBeenSet = true; m_validationTokenDetails.emplace_back(std::forward<ValidationTokenDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    ManagedCertificateStatus m_certificateStatus{ManagedCertificateStatus::NOT_SET};
    bool m_certificateStatusHasBeenSet = false;

    ValidationTokenHost m_validationTokenHost{ValidationTokenHost::NOT_SET};
    bool m_validationTokenHostHasBeenSet = false;

    Aws::Vector<ValidationTokenDetail> m_validationTokenDetails;
    bool m_validationTokenDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
