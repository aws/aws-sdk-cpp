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
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/ViewerMinimumTlsProtocolVersionEnum.h>
#include <aws/lightsail/model/CacheBehaviorPerPath.h>
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
  class CreateDistributionRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateDistributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDistribution"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the distribution.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }
    inline CreateDistributionRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}
    inline CreateDistributionRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}
    inline CreateDistributionRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}
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
    inline CreateDistributionRequest& WithOrigin(const InputOrigin& value) { SetOrigin(value); return *this;}
    inline CreateDistributionRequest& WithOrigin(InputOrigin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline const CacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    inline void SetDefaultCacheBehavior(const CacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }
    inline void SetDefaultCacheBehavior(CacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }
    inline CreateDistributionRequest& WithDefaultCacheBehavior(const CacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}
    inline CreateDistributionRequest& WithDefaultCacheBehavior(CacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const{ return m_cacheBehaviorSettings; }
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }
    inline void SetCacheBehaviorSettings(const CacheSettings& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = value; }
    inline void SetCacheBehaviorSettings(CacheSettings&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::move(value); }
    inline CreateDistributionRequest& WithCacheBehaviorSettings(const CacheSettings& value) { SetCacheBehaviorSettings(value); return *this;}
    inline CreateDistributionRequest& WithCacheBehaviorSettings(CacheSettings&& value) { SetCacheBehaviorSettings(std::move(value)); return *this;}
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
    inline CreateDistributionRequest& WithCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { SetCacheBehaviors(value); return *this;}
    inline CreateDistributionRequest& WithCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { SetCacheBehaviors(std::move(value)); return *this;}
    inline CreateDistributionRequest& AddCacheBehaviors(const CacheBehaviorPerPath& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(value); return *this; }
    inline CreateDistributionRequest& AddCacheBehaviors(CacheBehaviorPerPath&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline CreateDistributionRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline CreateDistributionRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline CreateDistributionRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CreateDistributionRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CreateDistributionRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDistributionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDistributionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDistributionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDistributionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the SSL/TLS certificate that you want to attach to the
     * distribution.</p> <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetCertificates.html">GetCertificates</a>
     * action to get a list of certificate names that you can specify.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }
    inline CreateDistributionRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline CreateDistributionRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline CreateDistributionRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum TLS protocol version for the SSL/TLS certificate.</p>
     */
    inline const ViewerMinimumTlsProtocolVersionEnum& GetViewerMinimumTlsProtocolVersion() const{ return m_viewerMinimumTlsProtocolVersion; }
    inline bool ViewerMinimumTlsProtocolVersionHasBeenSet() const { return m_viewerMinimumTlsProtocolVersionHasBeenSet; }
    inline void SetViewerMinimumTlsProtocolVersion(const ViewerMinimumTlsProtocolVersionEnum& value) { m_viewerMinimumTlsProtocolVersionHasBeenSet = true; m_viewerMinimumTlsProtocolVersion = value; }
    inline void SetViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionEnum&& value) { m_viewerMinimumTlsProtocolVersionHasBeenSet = true; m_viewerMinimumTlsProtocolVersion = std::move(value); }
    inline CreateDistributionRequest& WithViewerMinimumTlsProtocolVersion(const ViewerMinimumTlsProtocolVersionEnum& value) { SetViewerMinimumTlsProtocolVersion(value); return *this;}
    inline CreateDistributionRequest& WithViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionEnum&& value) { SetViewerMinimumTlsProtocolVersion(std::move(value)); return *this;}
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

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    ViewerMinimumTlsProtocolVersionEnum m_viewerMinimumTlsProtocolVersion;
    bool m_viewerMinimumTlsProtocolVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
