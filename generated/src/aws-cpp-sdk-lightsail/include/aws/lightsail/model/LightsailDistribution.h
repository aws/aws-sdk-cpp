/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Origin.h>
#include <aws/lightsail/model/CacheBehavior.h>
#include <aws/lightsail/model/CacheSettings.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/CacheBehaviorPerPath.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an Amazon Lightsail content delivery network (CDN)
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LightsailDistribution">AWS
   * API Reference</a></p>
   */
  class LightsailDistribution
  {
  public:
    AWS_LIGHTSAIL_API LightsailDistribution() = default;
    AWS_LIGHTSAIL_API LightsailDistribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LightsailDistribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the distribution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LightsailDistribution& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LightsailDistribution& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    LightsailDistribution& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LightsailDistribution& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    LightsailDistribution& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type (<code>Distribution</code>).</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LightsailDistribution& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlternativeDomainNames() const { return m_alternativeDomainNames; }
    inline bool AlternativeDomainNamesHasBeenSet() const { return m_alternativeDomainNamesHasBeenSet; }
    template<typename AlternativeDomainNamesT = Aws::Vector<Aws::String>>
    void SetAlternativeDomainNames(AlternativeDomainNamesT&& value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames = std::forward<AlternativeDomainNamesT>(value); }
    template<typename AlternativeDomainNamesT = Aws::Vector<Aws::String>>
    LightsailDistribution& WithAlternativeDomainNames(AlternativeDomainNamesT&& value) { SetAlternativeDomainNames(std::forward<AlternativeDomainNamesT>(value)); return *this;}
    template<typename AlternativeDomainNamesT = Aws::String>
    LightsailDistribution& AddAlternativeDomainNames(AlternativeDomainNamesT&& value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames.emplace_back(std::forward<AlternativeDomainNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the distribution.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    LightsailDistribution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the distribution is enabled.</p>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline LightsailDistribution& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the distribution.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    LightsailDistribution& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    LightsailDistribution& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    LightsailDistribution& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline const Origin& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = Origin>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = Origin>
    LightsailDistribution& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS of the origin.</p>
     */
    inline const Aws::String& GetOriginPublicDNS() const { return m_originPublicDNS; }
    inline bool OriginPublicDNSHasBeenSet() const { return m_originPublicDNSHasBeenSet; }
    template<typename OriginPublicDNST = Aws::String>
    void SetOriginPublicDNS(OriginPublicDNST&& value) { m_originPublicDNSHasBeenSet = true; m_originPublicDNS = std::forward<OriginPublicDNST>(value); }
    template<typename OriginPublicDNST = Aws::String>
    LightsailDistribution& WithOriginPublicDNS(OriginPublicDNST&& value) { SetOriginPublicDNS(std::forward<OriginPublicDNST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline const CacheBehavior& GetDefaultCacheBehavior() const { return m_defaultCacheBehavior; }
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }
    template<typename DefaultCacheBehaviorT = CacheBehavior>
    void SetDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::forward<DefaultCacheBehaviorT>(value); }
    template<typename DefaultCacheBehaviorT = CacheBehavior>
    LightsailDistribution& WithDefaultCacheBehavior(DefaultCacheBehaviorT&& value) { SetDefaultCacheBehavior(std::forward<DefaultCacheBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const { return m_cacheBehaviorSettings; }
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }
    template<typename CacheBehaviorSettingsT = CacheSettings>
    void SetCacheBehaviorSettings(CacheBehaviorSettingsT&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::forward<CacheBehaviorSettingsT>(value); }
    template<typename CacheBehaviorSettingsT = CacheSettings>
    LightsailDistribution& WithCacheBehaviorSettings(CacheBehaviorSettingsT&& value) { SetCacheBehaviorSettings(std::forward<CacheBehaviorSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline const Aws::Vector<CacheBehaviorPerPath>& GetCacheBehaviors() const { return m_cacheBehaviors; }
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }
    template<typename CacheBehaviorsT = Aws::Vector<CacheBehaviorPerPath>>
    void SetCacheBehaviors(CacheBehaviorsT&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::forward<CacheBehaviorsT>(value); }
    template<typename CacheBehaviorsT = Aws::Vector<CacheBehaviorPerPath>>
    LightsailDistribution& WithCacheBehaviors(CacheBehaviorsT&& value) { SetCacheBehaviors(std::forward<CacheBehaviorsT>(value)); return *this;}
    template<typename CacheBehaviorsT = CacheBehaviorPerPath>
    LightsailDistribution& AddCacheBehaviors(CacheBehaviorsT&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.emplace_back(std::forward<CacheBehaviorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bundle that is currently applied to your distribution,
     * specified using the <code>distributionName</code> parameter, can be changed to
     * another bundle.</p> <p>Use the <code>UpdateDistributionBundle</code> action to
     * change your distribution's bundle.</p>
     */
    inline bool GetAbleToUpdateBundle() const { return m_ableToUpdateBundle; }
    inline bool AbleToUpdateBundleHasBeenSet() const { return m_ableToUpdateBundleHasBeenSet; }
    inline void SetAbleToUpdateBundle(bool value) { m_ableToUpdateBundleHasBeenSet = true; m_ableToUpdateBundle = value; }
    inline LightsailDistribution& WithAbleToUpdateBundle(bool value) { SetAbleToUpdateBundle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline LightsailDistribution& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LightsailDistribution& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LightsailDistribution& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum TLS protocol version that the distribution can use to communicate
     * with viewers.</p>
     */
    inline const Aws::String& GetViewerMinimumTlsProtocolVersion() const { return m_viewerMinimumTlsProtocolVersion; }
    inline bool ViewerMinimumTlsProtocolVersionHasBeenSet() const { return m_viewerMinimumTlsProtocolVersionHasBeenSet; }
    template<typename ViewerMinimumTlsProtocolVersionT = Aws::String>
    void SetViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionT&& value) { m_viewerMinimumTlsProtocolVersionHasBeenSet = true; m_viewerMinimumTlsProtocolVersion = std::forward<ViewerMinimumTlsProtocolVersionT>(value); }
    template<typename ViewerMinimumTlsProtocolVersionT = Aws::String>
    LightsailDistribution& WithViewerMinimumTlsProtocolVersion(ViewerMinimumTlsProtocolVersionT&& value) { SetViewerMinimumTlsProtocolVersion(std::forward<ViewerMinimumTlsProtocolVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_alternativeDomainNames;
    bool m_alternativeDomainNamesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Origin m_origin;
    bool m_originHasBeenSet = false;

    Aws::String m_originPublicDNS;
    bool m_originPublicDNSHasBeenSet = false;

    CacheBehavior m_defaultCacheBehavior;
    bool m_defaultCacheBehaviorHasBeenSet = false;

    CacheSettings m_cacheBehaviorSettings;
    bool m_cacheBehaviorSettingsHasBeenSet = false;

    Aws::Vector<CacheBehaviorPerPath> m_cacheBehaviors;
    bool m_cacheBehaviorsHasBeenSet = false;

    bool m_ableToUpdateBundle{false};
    bool m_ableToUpdateBundleHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_viewerMinimumTlsProtocolVersion;
    bool m_viewerMinimumTlsProtocolVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
