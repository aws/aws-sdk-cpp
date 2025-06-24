/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/CertificateOptions.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class UpdateCertificateOptionsRequest : public ACMRequest
  {
  public:
    AWS_ACM_API UpdateCertificateOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateOptions"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ARN of the requested certificate to update. This must be of the form:</p> <p>
     * <code>arn:aws:acm:us-east-1:<i>account</i>:certificate/<i>12345678-1234-1234-1234-123456789012</i>
     * </code> </p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    UpdateCertificateOptionsRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to update the options for your certificate. Currently, you can specify
     * whether to add your certificate to a transparency log or export your
     * certificate. Certificate transparency makes it possible to detect SSL/TLS
     * certificates that have been mistakenly or maliciously issued. Certificates that
     * have not been logged typically produce an error message in a browser. </p>
     */
    inline const CertificateOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = CertificateOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = CertificateOptions>
    UpdateCertificateOptionsRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    CertificateOptions m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
