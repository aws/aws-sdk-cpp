/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/iottwinmaker/model/PricingMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class UpdatePricingPlanRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API UpdatePricingPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePricingPlan"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The pricing mode.</p>
     */
    inline PricingMode GetPricingMode() const { return m_pricingMode; }
    inline bool PricingModeHasBeenSet() const { return m_pricingModeHasBeenSet; }
    inline void SetPricingMode(PricingMode value) { m_pricingModeHasBeenSet = true; m_pricingMode = value; }
    inline UpdatePricingPlanRequest& WithPricingMode(PricingMode value) { SetPricingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleNames() const { return m_bundleNames; }
    inline bool BundleNamesHasBeenSet() const { return m_bundleNamesHasBeenSet; }
    template<typename BundleNamesT = Aws::Vector<Aws::String>>
    void SetBundleNames(BundleNamesT&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames = std::forward<BundleNamesT>(value); }
    template<typename BundleNamesT = Aws::Vector<Aws::String>>
    UpdatePricingPlanRequest& WithBundleNames(BundleNamesT&& value) { SetBundleNames(std::forward<BundleNamesT>(value)); return *this;}
    template<typename BundleNamesT = Aws::String>
    UpdatePricingPlanRequest& AddBundleNames(BundleNamesT&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames.emplace_back(std::forward<BundleNamesT>(value)); return *this; }
    ///@}
  private:

    PricingMode m_pricingMode{PricingMode::NOT_SET};
    bool m_pricingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_bundleNames;
    bool m_bundleNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
