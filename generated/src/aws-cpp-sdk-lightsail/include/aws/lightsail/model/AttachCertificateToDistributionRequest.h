/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AttachCertificateToDistributionRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API AttachCertificateToDistributionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachCertificateToDistribution"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const { return m_distributionName; }
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }
    template<typename DistributionNameT = Aws::String>
    void SetDistributionName(DistributionNameT&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::forward<DistributionNameT>(value); }
    template<typename DistributionNameT = Aws::String>
    AttachCertificateToDistributionRequest& WithDistributionName(DistributionNameT&& value) { SetDistributionName(std::forward<DistributionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate to attach to a distribution.</p> <p>Only
     * certificates with a status of <code>ISSUED</code> can be attached to a
     * distribution.</p> <p>Use the <code>GetCertificates</code> action to get a list
     * of certificate names that you can specify.</p>  <p>This is the name of the
     * certificate resource type and is used only to reference the certificate in other
     * API actions. It can be different than the domain name of the certificate. For
     * example, your certificate name might be <code>WordPress-Blog-Certificate</code>
     * and the domain name of the certificate might be <code>example.com</code>.</p>
     * 
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    AttachCertificateToDistributionRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
