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
    AWS_LIGHTSAIL_API LightsailDistribution();
    AWS_LIGHTSAIL_API LightsailDistribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LightsailDistribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the distribution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the distribution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the distribution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the distribution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the distribution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the distribution.</p>
     */
    inline LightsailDistribution& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the distribution.</p>
     */
    inline LightsailDistribution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution.</p>
     */
    inline LightsailDistribution& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline LightsailDistribution& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline LightsailDistribution& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the distribution.</p>
     */
    inline LightsailDistribution& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline LightsailDistribution& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline LightsailDistribution& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail distribution. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline LightsailDistribution& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline LightsailDistribution& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the distribution was created.</p>
     */
    inline LightsailDistribution& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline LightsailDistribution& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>An object that describes the location of the distribution, such as the Amazon
     * Web Services Region and Availability Zone.</p>  <p>Lightsail distributions
     * are global resources that can reference an origin in any Amazon Web Services
     * Region, and distribute its content globally. However, all distributions are
     * located in the <code>us-east-1</code> Region.</p> 
     */
    inline LightsailDistribution& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g., <code>Distribution</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Distribution</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Distribution</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>Distribution</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>Distribution</code>).</p>
     */
    inline LightsailDistribution& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>Distribution</code>).</p>
     */
    inline LightsailDistribution& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlternativeDomainNames() const{ return m_alternativeDomainNames; }

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline bool AlternativeDomainNamesHasBeenSet() const { return m_alternativeDomainNamesHasBeenSet; }

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline void SetAlternativeDomainNames(const Aws::Vector<Aws::String>& value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames = value; }

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline void SetAlternativeDomainNames(Aws::Vector<Aws::String>&& value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames = std::move(value); }

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline LightsailDistribution& WithAlternativeDomainNames(const Aws::Vector<Aws::String>& value) { SetAlternativeDomainNames(value); return *this;}

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline LightsailDistribution& WithAlternativeDomainNames(Aws::Vector<Aws::String>&& value) { SetAlternativeDomainNames(std::move(value)); return *this;}

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline LightsailDistribution& AddAlternativeDomainNames(const Aws::String& value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames.push_back(value); return *this; }

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline LightsailDistribution& AddAlternativeDomainNames(Aws::String&& value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The alternate domain names of the distribution.</p>
     */
    inline LightsailDistribution& AddAlternativeDomainNames(const char* value) { m_alternativeDomainNamesHasBeenSet = true; m_alternativeDomainNames.push_back(value); return *this; }


    /**
     * <p>The status of the distribution.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the distribution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the distribution.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the distribution.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the distribution.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the distribution.</p>
     */
    inline LightsailDistribution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the distribution.</p>
     */
    inline LightsailDistribution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the distribution.</p>
     */
    inline LightsailDistribution& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Indicates whether the distribution is enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>Indicates whether the distribution is enabled.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>Indicates whether the distribution is enabled.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>Indicates whether the distribution is enabled.</p>
     */
    inline LightsailDistribution& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}


    /**
     * <p>The domain name of the distribution.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline LightsailDistribution& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline LightsailDistribution& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the distribution.</p>
     */
    inline LightsailDistribution& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline LightsailDistribution& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline LightsailDistribution& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the bundle currently applied to the distribution.</p>
     */
    inline LightsailDistribution& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline LightsailDistribution& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline LightsailDistribution& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate attached to the distribution, if any.</p>
     */
    inline LightsailDistribution& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline const Origin& GetOrigin() const{ return m_origin; }

    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline void SetOrigin(const Origin& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline void SetOrigin(Origin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline LightsailDistribution& WithOrigin(const Origin& value) { SetOrigin(value); return *this;}

    /**
     * <p>An object that describes the origin resource of the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline LightsailDistribution& WithOrigin(Origin&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>The public DNS of the origin.</p>
     */
    inline const Aws::String& GetOriginPublicDNS() const{ return m_originPublicDNS; }

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline bool OriginPublicDNSHasBeenSet() const { return m_originPublicDNSHasBeenSet; }

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline void SetOriginPublicDNS(const Aws::String& value) { m_originPublicDNSHasBeenSet = true; m_originPublicDNS = value; }

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline void SetOriginPublicDNS(Aws::String&& value) { m_originPublicDNSHasBeenSet = true; m_originPublicDNS = std::move(value); }

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline void SetOriginPublicDNS(const char* value) { m_originPublicDNSHasBeenSet = true; m_originPublicDNS.assign(value); }

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline LightsailDistribution& WithOriginPublicDNS(const Aws::String& value) { SetOriginPublicDNS(value); return *this;}

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline LightsailDistribution& WithOriginPublicDNS(Aws::String&& value) { SetOriginPublicDNS(std::move(value)); return *this;}

    /**
     * <p>The public DNS of the origin.</p>
     */
    inline LightsailDistribution& WithOriginPublicDNS(const char* value) { SetOriginPublicDNS(value); return *this;}


    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline const CacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }

    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }

    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline void SetDefaultCacheBehavior(const CacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }

    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline void SetDefaultCacheBehavior(CacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }

    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline LightsailDistribution& WithDefaultCacheBehavior(const CacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * <p>An object that describes the default cache behavior of the distribution.</p>
     */
    inline LightsailDistribution& WithDefaultCacheBehavior(CacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}


    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const{ return m_cacheBehaviorSettings; }

    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }

    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline void SetCacheBehaviorSettings(const CacheSettings& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = value; }

    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline void SetCacheBehaviorSettings(CacheSettings&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::move(value); }

    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline LightsailDistribution& WithCacheBehaviorSettings(const CacheSettings& value) { SetCacheBehaviorSettings(value); return *this;}

    /**
     * <p>An object that describes the cache behavior settings of the distribution.</p>
     */
    inline LightsailDistribution& WithCacheBehaviorSettings(CacheSettings&& value) { SetCacheBehaviorSettings(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline const Aws::Vector<CacheBehaviorPerPath>& GetCacheBehaviors() const{ return m_cacheBehaviors; }

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline void SetCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline void SetCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::move(value); }

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline LightsailDistribution& WithCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { SetCacheBehaviors(value); return *this;}

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline LightsailDistribution& WithCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { SetCacheBehaviors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline LightsailDistribution& AddCacheBehaviors(const CacheBehaviorPerPath& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the per-path cache behavior of the
     * distribution.</p>
     */
    inline LightsailDistribution& AddCacheBehaviors(CacheBehaviorPerPath&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the bundle that is currently applied to your distribution,
     * specified using the <code>distributionName</code> parameter, can be changed to
     * another bundle.</p> <p>Use the <code>UpdateDistributionBundle</code> action to
     * change your distribution's bundle.</p>
     */
    inline bool GetAbleToUpdateBundle() const{ return m_ableToUpdateBundle; }

    /**
     * <p>Indicates whether the bundle that is currently applied to your distribution,
     * specified using the <code>distributionName</code> parameter, can be changed to
     * another bundle.</p> <p>Use the <code>UpdateDistributionBundle</code> action to
     * change your distribution's bundle.</p>
     */
    inline bool AbleToUpdateBundleHasBeenSet() const { return m_ableToUpdateBundleHasBeenSet; }

    /**
     * <p>Indicates whether the bundle that is currently applied to your distribution,
     * specified using the <code>distributionName</code> parameter, can be changed to
     * another bundle.</p> <p>Use the <code>UpdateDistributionBundle</code> action to
     * change your distribution's bundle.</p>
     */
    inline void SetAbleToUpdateBundle(bool value) { m_ableToUpdateBundleHasBeenSet = true; m_ableToUpdateBundle = value; }

    /**
     * <p>Indicates whether the bundle that is currently applied to your distribution,
     * specified using the <code>distributionName</code> parameter, can be changed to
     * another bundle.</p> <p>Use the <code>UpdateDistributionBundle</code> action to
     * change your distribution's bundle.</p>
     */
    inline LightsailDistribution& WithAbleToUpdateBundle(bool value) { SetAbleToUpdateBundle(value); return *this;}


    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline LightsailDistribution& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type of the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p>
     */
    inline LightsailDistribution& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline LightsailDistribution& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline LightsailDistribution& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline LightsailDistribution& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline LightsailDistribution& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_alternativeDomainNames;
    bool m_alternativeDomainNamesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_isEnabled;
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

    bool m_ableToUpdateBundle;
    bool m_ableToUpdateBundleHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
