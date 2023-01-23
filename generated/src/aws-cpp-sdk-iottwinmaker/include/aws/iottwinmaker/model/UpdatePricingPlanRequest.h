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
    AWS_IOTTWINMAKER_API UpdatePricingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePricingPlan"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The pricing mode.</p>
     */
    inline const PricingMode& GetPricingMode() const{ return m_pricingMode; }

    /**
     * <p>The pricing mode.</p>
     */
    inline bool PricingModeHasBeenSet() const { return m_pricingModeHasBeenSet; }

    /**
     * <p>The pricing mode.</p>
     */
    inline void SetPricingMode(const PricingMode& value) { m_pricingModeHasBeenSet = true; m_pricingMode = value; }

    /**
     * <p>The pricing mode.</p>
     */
    inline void SetPricingMode(PricingMode&& value) { m_pricingModeHasBeenSet = true; m_pricingMode = std::move(value); }

    /**
     * <p>The pricing mode.</p>
     */
    inline UpdatePricingPlanRequest& WithPricingMode(const PricingMode& value) { SetPricingMode(value); return *this;}

    /**
     * <p>The pricing mode.</p>
     */
    inline UpdatePricingPlanRequest& WithPricingMode(PricingMode&& value) { SetPricingMode(std::move(value)); return *this;}


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
    inline UpdatePricingPlanRequest& WithBundleNames(const Aws::Vector<Aws::String>& value) { SetBundleNames(value); return *this;}

    /**
     * <p>The bundle names.</p>
     */
    inline UpdatePricingPlanRequest& WithBundleNames(Aws::Vector<Aws::String>&& value) { SetBundleNames(std::move(value)); return *this;}

    /**
     * <p>The bundle names.</p>
     */
    inline UpdatePricingPlanRequest& AddBundleNames(const Aws::String& value) { m_bundleNamesHasBeenSet = true; m_bundleNames.push_back(value); return *this; }

    /**
     * <p>The bundle names.</p>
     */
    inline UpdatePricingPlanRequest& AddBundleNames(Aws::String&& value) { m_bundleNamesHasBeenSet = true; m_bundleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The bundle names.</p>
     */
    inline UpdatePricingPlanRequest& AddBundleNames(const char* value) { m_bundleNamesHasBeenSet = true; m_bundleNames.push_back(value); return *this; }

  private:

    PricingMode m_pricingMode;
    bool m_pricingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_bundleNames;
    bool m_bundleNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
