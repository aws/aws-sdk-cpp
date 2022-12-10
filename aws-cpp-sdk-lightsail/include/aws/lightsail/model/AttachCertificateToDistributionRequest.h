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
    AWS_LIGHTSAIL_API AttachCertificateToDistributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachCertificateToDistribution"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline AttachCertificateToDistributionRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline AttachCertificateToDistributionRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution that the certificate will be attached to.</p>
     * <p>Use the <code>GetDistributions</code> action to get a list of distribution
     * names that you can specify.</p>
     */
    inline AttachCertificateToDistributionRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}


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
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

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
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

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
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

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
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

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
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

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
    inline AttachCertificateToDistributionRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

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
    inline AttachCertificateToDistributionRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

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
    inline AttachCertificateToDistributionRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}

  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
