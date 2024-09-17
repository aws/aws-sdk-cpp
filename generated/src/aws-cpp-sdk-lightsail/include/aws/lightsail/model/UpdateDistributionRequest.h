/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InputOrigin.h>
#include <aws/lightsail/model/CacheBehavior.h>
#include <aws/lightsail/model/CacheSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/ViewerMinimumTlsProtocolVersionEnum.h>
#include <aws/lightsail/model/CacheBehaviorPerPath.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateDistributionRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateDistributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDistribution"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }
    inline UpdateDistributionRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}
    inline UpdateDistributionRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}
    inline UpdateDistributionRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline const InputOrigin& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const InputOrigin& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(InputOrigin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline UpdateDistributionRequest& WithOrigin(const InputOrigin& value) { SetOrigin(value); return *this;}
    inline UpdateDistributionRequest& WithOrigin(InputOrigin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline const CacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    inline void SetDefaultCacheBehavior(const CacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }
    inline void SetDefaultCacheBehavior(CacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }
    inline UpdateDistributionRequest& WithDefaultCacheBehavior(const CacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}
    inline UpdateDistributionRequest& WithDefaultCacheBehavior(CacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const{ return m_cacheBehaviorSettings; }
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }
    inline void SetCacheBehaviorSettings(const CacheSettings& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = value; }
    inline void SetCacheBehaviorSettings(CacheSettings&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::move(value); }
    inline UpdateDistributionRequest& WithCacheBehaviorSettings(const CacheSettings& value) { SetCacheBehaviorSettings(value); return *this;}
    inline UpdateDistributionRequest& WithCacheBehaviorSettings(CacheSettings&& value) { SetCacheBehaviorSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline const Aws::Vector<CacheBehaviorPerPath>& GetCacheBehaviors() const{ return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    inline void SetCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }
    inline void SetCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::move(value); }
    inline UpdateDistributionRequest& WithCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { SetCacheBehaviors(value); return *this;}
    inline UpdateDistributionRequest& WithCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { SetCacheBehaviors(std::move(value)); return *this;}
    inline UpdateDistributionRequest& AddCacheBehaviors(const CacheBehaviorPerPath& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(value); return *this; }
    inline UpdateDistributionRequest& AddCacheBehaviors(CacheBehaviorPerPath&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable the distribution.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline UpdateDistributionRequest& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to update the minimum TLS protocol version for the SSL/TLS
     * certificate that's attached to the distribution.</p>
     */
    inline const ViewerMinimumTlsProtocolVersionEnum& GetViewerMinimumTlsProtocolVersion() const{ return m_viewerMinimumTlsProtocolVersion; }
    inline bool ViewerMinimumTlsProtocolVersionHasBeenSet() const { return m_viewerMinimumTlsProtocolVersionHasBeenSet; }
    inline void SetViewerMinimumTlsProtocolVersion(const ViewerMinimumTlsProtocolVersionEnum& value) { m_viewerMinimumTlsProtocolVersionHasBeenSet = true; m_viewerMinimumTlsProtocolVersion = value; }
    inline void SetViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionEnum&& value) { m_viewerMinimumTlsProtocolVersionHasBeenSet = true; m_viewerMinimumTlsProtocolVersion = std::move(value); }
    inline UpdateDistributionRequest& WithViewerMinimumTlsProtocolVersion(const ViewerMinimumTlsProtocolVersionEnum& value) { SetViewerMinimumTlsProtocolVersion(value); return *this;}
    inline UpdateDistributionRequest& WithViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionEnum&& value) { SetViewerMinimumTlsProtocolVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSL/TLS certificate that you want to attach to the
     * distribution.</p> <p>Only certificates with a status of <code>ISSUED</code> can
     * be attached to a distribution.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetCertificates.html">GetCertificates</a>
     * action to get a list of certificate names that you can specify.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }
    inline UpdateDistributionRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline UpdateDistributionRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline UpdateDistributionRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the default SSL/TLS certificate is attached to the
     * distribution. The default value is <code>true</code>. When <code>true</code>,
     * the distribution uses the default domain name such as
     * <code>d111111abcdef8.cloudfront.net</code>.</p> <p> Set this value to
     * <code>false</code> to attach a new certificate to the distribution.</p>
     */
    inline bool GetUseDefaultCertificate() const{ return m_useDefaultCertificate; }
    inline bool UseDefaultCertificateHasBeenSet() const { return m_useDefaultCertificateHasBeenSet; }
    inline void SetUseDefaultCertificate(bool value) { m_useDefaultCertificateHasBeenSet = true; m_useDefaultCertificate = value; }
    inline UpdateDistributionRequest& WithUseDefaultCertificate(bool value) { SetUseDefaultCertificate(value); return *this;}
    ///@}
  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;

    InputOrigin m_origin;
    bool m_originHasBeenSet = false;

    CacheBehavior m_defaultCacheBehavior;
    bool m_defaultCacheBehaviorHasBeenSet = false;

    CacheSettings m_cacheBehaviorSettings;
    bool m_cacheBehaviorSettingsHasBeenSet = false;

    Aws::Vector<CacheBehaviorPerPath> m_cacheBehaviors;
    bool m_cacheBehaviorsHasBeenSet = false;

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;

    ViewerMinimumTlsProtocolVersionEnum m_viewerMinimumTlsProtocolVersion;
    bool m_viewerMinimumTlsProtocolVersionHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    bool m_useDefaultCertificate;
    bool m_useDefaultCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
