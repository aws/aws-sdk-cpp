/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/RevocationReason.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class RevokeCertificateRequest : public ACMRequest
  {
  public:
    AWS_ACM_API RevokeCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeCertificate"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the public or private certificate that will
     * be revoked. The ARN must have the following form: </p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    RevokeCertificateRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies why you revoked the certificate.</p>
     */
    inline RevocationReason GetRevocationReason() const { return m_revocationReason; }
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }
    inline void SetRevocationReason(RevocationReason value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }
    inline RevokeCertificateRequest& WithRevocationReason(RevocationReason value) { SetRevocationReason(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    RevocationReason m_revocationReason{RevocationReason::NOT_SET};
    bool m_revocationReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
