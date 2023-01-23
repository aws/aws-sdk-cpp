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


    /**
     * <p>The name for the distribution.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name for the distribution.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name for the distribution.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name for the distribution.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name for the distribution.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name for the distribution.</p>
     */
    inline CreateDistributionRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name for the distribution.</p>
     */
    inline CreateDistributionRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name for the distribution.</p>
     */
    inline CreateDistributionRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}


    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline const InputOrigin& GetOrigin() const{ return m_origin; }

    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline void SetOrigin(const InputOrigin& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline void SetOrigin(InputOrigin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline CreateDistributionRequest& WithOrigin(const InputOrigin& value) { SetOrigin(value); return *this;}

    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline CreateDistributionRequest& WithOrigin(InputOrigin&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline const CacheBehavior& GetDefaultCacheBehavior() const{ return m_defaultCacheBehavior; }

    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline bool DefaultCacheBehaviorHasBeenSet() const { return m_defaultCacheBehaviorHasBeenSet; }

    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline void SetDefaultCacheBehavior(const CacheBehavior& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = value; }

    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline void SetDefaultCacheBehavior(CacheBehavior&& value) { m_defaultCacheBehaviorHasBeenSet = true; m_defaultCacheBehavior = std::move(value); }

    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline CreateDistributionRequest& WithDefaultCacheBehavior(const CacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline CreateDistributionRequest& WithDefaultCacheBehavior(CacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}


    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const{ return m_cacheBehaviorSettings; }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline void SetCacheBehaviorSettings(const CacheSettings& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = value; }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline void SetCacheBehaviorSettings(CacheSettings&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::move(value); }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline CreateDistributionRequest& WithCacheBehaviorSettings(const CacheSettings& value) { SetCacheBehaviorSettings(value); return *this;}

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>
     */
    inline CreateDistributionRequest& WithCacheBehaviorSettings(CacheSettings&& value) { SetCacheBehaviorSettings(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline const Aws::Vector<CacheBehaviorPerPath>& GetCacheBehaviors() const{ return m_cacheBehaviors; }

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline bool CacheBehaviorsHasBeenSet() const { return m_cacheBehaviorsHasBeenSet; }

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline void SetCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = value; }

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline void SetCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors = std::move(value); }

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline CreateDistributionRequest& WithCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { SetCacheBehaviors(value); return *this;}

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline CreateDistributionRequest& WithCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { SetCacheBehaviors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline CreateDistributionRequest& AddCacheBehaviors(const CacheBehaviorPerPath& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline CreateDistributionRequest& AddCacheBehaviors(CacheBehaviorPerPath&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(std::move(value)); return *this; }


    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline CreateDistributionRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline CreateDistributionRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID to use for the distribution.</p> <p>A distribution bundle
     * describes the specifications of your distribution, such as the monthly cost and
     * monthly network transfer quota.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline CreateDistributionRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline CreateDistributionRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type for the distribution.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4 and
     * IPv6.</p> <p>The default value is <code>dualstack</code>.</p>
     */
    inline CreateDistributionRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline CreateDistributionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline CreateDistributionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline CreateDistributionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the distribution during
     * create.</p> <p>Use the <code>TagResource</code> action to tag a resource after
     * it's created.</p>
     */
    inline CreateDistributionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
