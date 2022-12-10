/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PricingTier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>Information about pricing bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/BundleInformation">AWS
   * API Reference</a></p>
   */
  class BundleInformation
  {
  public:
    AWS_IOTTWINMAKER_API BundleInformation();
    AWS_IOTTWINMAKER_API BundleInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API BundleInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bundle names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleNames() const{ return m_bundleNames; }

    /**
     * <p>The bundle names.</p>
     */
    inline bool BundleNamesHasBeenSet() const { return m_bundleNamesHasBeenSet; }

    /**
     * <p>The bundle names.</p>
     */
    inline void SetBundleNames(const Aws::Vector<Aws::String>& value) { m_bundleNamesHasBeenSet = true; m_bundleNames = value; }

    /**
     * <p>The bundle names.</p>
     */
    inline void SetBundleNames(Aws::Vector<Aws::String>&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames = std::move(value); }

    /**
     * <p>The bundle names.</p>
     */
    inline BundleInformation& WithBundleNames(const Aws::Vector<Aws::String>& value) { SetBundleNames(value); return *this;}

    /**
     * <p>The bundle names.</p>
     */
    inline BundleInformation& WithBundleNames(Aws::Vector<Aws::String>&& value) { SetBundleNames(std::move(value)); return *this;}

    /**
     * <p>The bundle names.</p>
     */
    inline BundleInformation& AddBundleNames(const Aws::String& value) { m_bundleNamesHasBeenSet = true; m_bundleNames.push_back(value); return *this; }

    /**
     * <p>The bundle names.</p>
     */
    inline BundleInformation& AddBundleNames(Aws::String&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The bundle names.</p>
     */
    inline BundleInformation& AddBundleNames(const char* value) { m_bundleNamesHasBeenSet = true; m_bundleNames.push_back(value); return *this; }


    /**
     * <p>The pricing tier.</p>
     */
    inline const PricingTier& GetPricingTier() const{ return m_pricingTier; }

    /**
     * <p>The pricing tier.</p>
     */
    inline bool PricingTierHasBeenSet() const { return m_pricingTierHasBeenSet; }

    /**
     * <p>The pricing tier.</p>
     */
    inline void SetPricingTier(const PricingTier& value) { m_pricingTierHasBeenSet = true; m_pricingTier = value; }

    /**
     * <p>The pricing tier.</p>
     */
    inline void SetPricingTier(PricingTier&& value) { m_pricingTierHasBeenSet = true; m_pricingTier = std::move(value); }

    /**
     * <p>The pricing tier.</p>
     */
    inline BundleInformation& WithPricingTier(const PricingTier& value) { SetPricingTier(value); return *this;}

    /**
     * <p>The pricing tier.</p>
     */
    inline BundleInformation& WithPricingTier(PricingTier&& value) { SetPricingTier(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_bundleNames;
    bool m_bundleNamesHasBeenSet = false;

    PricingTier m_pricingTier;
    bool m_pricingTierHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
