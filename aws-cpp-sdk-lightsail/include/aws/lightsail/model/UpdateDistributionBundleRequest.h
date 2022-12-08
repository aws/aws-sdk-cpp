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
  class UpdateDistributionBundleRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateDistributionBundleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDistributionBundle"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline const Aws::String& GetDistributionName() const{ return m_distributionName; }

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline bool DistributionNameHasBeenSet() const { return m_distributionNameHasBeenSet; }

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(const Aws::String& value) { m_distributionNameHasBeenSet = true; m_distributionName = value; }

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(Aws::String&& value) { m_distributionNameHasBeenSet = true; m_distributionName = std::move(value); }

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline void SetDistributionName(const char* value) { m_distributionNameHasBeenSet = true; m_distributionName.assign(value); }

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline UpdateDistributionBundleRequest& WithDistributionName(const Aws::String& value) { SetDistributionName(value); return *this;}

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline UpdateDistributionBundleRequest& WithDistributionName(Aws::String&& value) { SetDistributionName(std::move(value)); return *this;}

    /**
     * <p>The name of the distribution for which to update the bundle.</p> <p>Use the
     * <code>GetDistributions</code> action to get a list of distribution names that
     * you can specify.</p>
     */
    inline UpdateDistributionBundleRequest& WithDistributionName(const char* value) { SetDistributionName(value); return *this;}


    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline UpdateDistributionBundleRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline UpdateDistributionBundleRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID of the new bundle to apply to your distribution.</p> <p>Use the
     * <code>GetDistributionBundles</code> action to get a list of distribution bundle
     * IDs that you can specify.</p>
     */
    inline UpdateDistributionBundleRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

  private:

    Aws::String m_distributionName;
    bool m_distributionNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
