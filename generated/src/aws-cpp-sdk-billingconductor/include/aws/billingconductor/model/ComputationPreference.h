﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>The preferences and settings that will be used to compute the Amazon Web
   * Services charges for a billing group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ComputationPreference">AWS
   * API Reference</a></p>
   */
  class ComputationPreference
  {
  public:
    AWS_BILLINGCONDUCTOR_API ComputationPreference() = default;
    AWS_BILLINGCONDUCTOR_API ComputationPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ComputationPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan that's used to compute
     * the Amazon Web Services charges for a billing group. </p>
     */
    inline const Aws::String& GetPricingPlanArn() const { return m_pricingPlanArn; }
    inline bool PricingPlanArnHasBeenSet() const { return m_pricingPlanArnHasBeenSet; }
    template<typename PricingPlanArnT = Aws::String>
    void SetPricingPlanArn(PricingPlanArnT&& value) { m_pricingPlanArnHasBeenSet = true; m_pricingPlanArn = std::forward<PricingPlanArnT>(value); }
    template<typename PricingPlanArnT = Aws::String>
    ComputationPreference& WithPricingPlanArn(PricingPlanArnT&& value) { SetPricingPlanArn(std::forward<PricingPlanArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pricingPlanArn;
    bool m_pricingPlanArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
