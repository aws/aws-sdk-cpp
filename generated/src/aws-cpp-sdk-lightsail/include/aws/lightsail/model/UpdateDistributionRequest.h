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


    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline UpdateDistributionRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline UpdateDistributionRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution to update.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline UpdateDistributionRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}


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
    inline UpdateDistributionRequest& WithOrigin(const InputOrigin& value) { SetOrigin(value); return *this;}

    /**
     * <p>An object that describes the origin resource for the distribution, such as a
     * Lightsail instance, bucket, or load balancer.</p> <p>The distribution pulls,
     * caches, and serves content from the origin.</p>
     */
    inline UpdateDistributionRequest& WithOrigin(InputOrigin&& value) { SetOrigin(std::move(value)); return *this;}


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
    inline UpdateDistributionRequest& WithDefaultCacheBehavior(const CacheBehavior& value) { SetDefaultCacheBehavior(value); return *this;}

    /**
     * <p>An object that describes the default cache behavior for the distribution.</p>
     */
    inline UpdateDistributionRequest& WithDefaultCacheBehavior(CacheBehavior&& value) { SetDefaultCacheBehavior(std::move(value)); return *this;}


    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline const CacheSettings& GetCacheBehaviorSettings() const{ return m_cacheBehaviorSettings; }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline bool CacheBehaviorSettingsHasBeenSet() const { return m_cacheBehaviorSettingsHasBeenSet; }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline void SetCacheBehaviorSettings(const CacheSettings& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = value; }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline void SetCacheBehaviorSettings(CacheSettings&& value) { m_cacheBehaviorSettingsHasBeenSet = true; m_cacheBehaviorSettings = std::move(value); }

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline UpdateDistributionRequest& WithCacheBehaviorSettings(const CacheSettings& value) { SetCacheBehaviorSettings(value); return *this;}

    /**
     * <p>An object that describes the cache behavior settings for the
     * distribution.</p>  <p>The <code>cacheBehaviorSettings</code> specified in
     * your <code>UpdateDistributionRequest</code> will replace your distribution's
     * existing settings.</p> 
     */
    inline UpdateDistributionRequest& WithCacheBehaviorSettings(CacheSettings&& value) { SetCacheBehaviorSettings(std::move(value)); return *this;}


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
    inline UpdateDistributionRequest& WithCacheBehaviors(const Aws::Vector<CacheBehaviorPerPath>& value) { SetCacheBehaviors(value); return *this;}

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline UpdateDistributionRequest& WithCacheBehaviors(Aws::Vector<CacheBehaviorPerPath>&& value) { SetCacheBehaviors(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline UpdateDistributionRequest& AddCacheBehaviors(const CacheBehaviorPerPath& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the per-path cache behavior for the
     * distribution.</p>
     */
    inline UpdateDistributionRequest& AddCacheBehaviors(CacheBehaviorPerPath&& value) { m_cacheBehaviorsHasBeenSet = true; m_cacheBehaviors.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether to enable the distribution.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>Indicates whether to enable the distribution.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>Indicates whether to enable the distribution.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>Indicates whether to enable the distribution.</p>
     */
    inline UpdateDistributionRequest& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}

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
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
