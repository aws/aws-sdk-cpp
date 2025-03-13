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
   * <p>Information about the pricing bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/BundleInformation">AWS
   * API Reference</a></p>
   */
  class BundleInformation
  {
  public:
    AWS_IOTTWINMAKER_API BundleInformation() = default;
    AWS_IOTTWINMAKER_API BundleInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API BundleInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bundle names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleNames() const { return m_bundleNames; }
    inline bool BundleNamesHasBeenSet() const { return m_bundleNamesHasBeenSet; }
    template<typename BundleNamesT = Aws::Vector<Aws::String>>
    void SetBundleNames(BundleNamesT&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames = std::forward<BundleNamesT>(value); }
    template<typename BundleNamesT = Aws::Vector<Aws::String>>
    BundleInformation& WithBundleNames(BundleNamesT&& value) { SetBundleNames(std::forward<BundleNamesT>(value)); return *this;}
    template<typename BundleNamesT = Aws::String>
    BundleInformation& AddBundleNames(BundleNamesT&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames.emplace_back(std::forward<BundleNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing tier.</p>
     */
    inline PricingTier GetPricingTier() const { return m_pricingTier; }
    inline bool PricingTierHasBeenSet() const { return m_pricingTierHasBeenSet; }
    inline void SetPricingTier(PricingTier value) { m_pricingTierHasBeenSet = true; m_pricingTier = value; }
    inline BundleInformation& WithPricingTier(PricingTier value) { SetPricingTier(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_bundleNames;
    bool m_bundleNamesHasBeenSet = false;

    PricingTier m_pricingTier{PricingTier::NOT_SET};
    bool m_pricingTierHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
