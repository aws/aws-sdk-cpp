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
    AWS_LIGHTSAIL_API UpdateDistributionRequest() = default;

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
    inline const Aws::String& GetDistributionName() const { return m_distributionName; }
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }
    template<typename DistributionNameT = Aws::String>
    void SetDistributionName(DistributionNameT&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::forward<DistributionNameT>(value); }
    template<typename DistributionNameT = Aws::String>
    UpdateDistributionRequest& WithDistributionName(DistributionNameT&& value) { SetDistributionName(std::forward<DistributionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline const InputOrigin& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = InputOrigin>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = InputOrigin>
    UpdateDistributionRequest& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline const CacheBehavior& GetDefaultCacheBehavior() const { return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    template<typename DefaultCacheBehaviorT = CacheBehavior>
    void SetDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::forward<DefaultCacheBehaviorT>(value); }
    template<typename DefaultCacheBehaviorT = CacheBehavior>
    UpdateDistributionRequest& WithDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { SetDefaultCacheBehavior(std::forward<DefaultCacheBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const { return m_cacheBehaviorSettings; }
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }
    template<typename CacheBehaviorSettingsT = CacheSettings>
    void SetCacheBehaviorSettings(CacheBehaviorSettingsT&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::forward<CacheBehaviorSettingsT>(value); }
    template<typename CacheBehaviorSettingsT = CacheSettings>
    UpdateDistributionRequest& WithCacheBehaviorSettings(CacheBehaviorSettingsT&& value) { SetCacheBehaviorSettings(std::forward<CacheBehaviorSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline const Aws::Vector<CacheBehaviorPerPath>& GetCacheBehaviors() const { return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    template<typename CacheBehaviorsT = Aws::Vector<CacheBehaviorPerPath>>
    void SetCacheBehaviors(CacheBehaviorsT&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::forward<CacheBehaviorsT>(value); }
    template<typename CacheBehaviorsT = Aws::Vector<CacheBehaviorPerPath>>
    UpdateDistributionRequest& WithCacheBehaviors(CacheBehaviorsT&& value) { SetCacheBehaviors(std::forward<CacheBehaviorsT>(value)); return *this;}
    template<typename CacheBehaviorsT = CacheBehaviorPerPath>
    UpdateDistributionRequest& AddCacheBehaviors(CacheBehaviorsT&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.emplace_back(std::forward<CacheBehaviorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable the distribution.</p>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline UpdateDistributionRequest& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to update the minimum TLS protocol version for the SSL/TLS
     * certificate that's attached to the distribution.</p>
     */
    inline ViewerMinimumTlsProtocolVersionEnum GetViewerMinimumTlsProtocolVersion() const { return m_viewerMinimumTlsProtocolVersion; }
    inline bool ViewerMinimumTlsProtocolVersionHasBeenSet() const { return m_viewerMinimumTlsProtocolVersionHasBeenSet; }
    inline void SetViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionEnum value) { m_viewerMinimumTlsProtocolVersionHasBeenSet = true; m_viewerMinimumTlsProtocolVersion = value; }
    inline UpdateDistributionRequest& WithViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionEnum value) { SetViewerMinimumTlsProtocolVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSL/TLS certificate that you want to attach to the
     * distribution.</p> <p>Only certificates with a status of <code>ISSUED</code> can
     * be attached to a distribution.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetCertificates.html">GetCertificates</a>
     * action to get a list of certificate names that you can specify.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    UpdateDistributionRequest& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the default SSL/TLS certificate is attached to the
     * distribution. The default value is <code>true</code>. When <code>true</code>,
     * the distribution uses the default domain name such as
     * <code>d111111abcdef8.cloudfront.net</code>.</p> <p> Set this value to
     * <code>false</code> to attach a new certificate to the distribution.</p>
     */
    inline bool GetUseDefaultCertificate() const { return m_useDefaultCertificate; }
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

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;

    ViewerMinimumTlsProtocolVersionEnum m_viewerMinimumTlsProtocolVersion{ViewerMinimumTlsProtocolVersionEnum::NOT_SET};
    bool m_viewerMinimumTlsProtocolVersionHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    bool m_useDefaultCertificate{false};
    bool m_useDefaultCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
