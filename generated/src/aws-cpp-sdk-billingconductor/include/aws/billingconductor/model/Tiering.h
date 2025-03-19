/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/FreeTierConfig.h>
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
   * <p> The set of tiering configurations for the pricing rule. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/Tiering">AWS
   * API Reference</a></p>
   */
  class Tiering
  {
  public:
    AWS_BILLINGCONDUCTOR_API Tiering() = default;
    AWS_BILLINGCONDUCTOR_API Tiering(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Tiering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline const FreeTierConfig& GetFreeTier() const { return m_freeTier; }
    inline bool FreeTierHasBeenSet() const { return m_freeTierHasBeenSet; }
    template<typename FreeTierT = FreeTierConfig>
    void SetFreeTier(FreeTierT&& value) { m_freeTierHasBeenSet = true; m_freeTier = std::forward<FreeTierT>(value); }
    template<typename FreeTierT = FreeTierConfig>
    Tiering& WithFreeTier(FreeTierT&& value) { SetFreeTier(std::forward<FreeTierT>(value)); return *this;}
    ///@}
  private:

    FreeTierConfig m_freeTier;
    bool m_freeTierHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
