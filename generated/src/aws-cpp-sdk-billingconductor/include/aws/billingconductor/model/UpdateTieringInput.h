/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/UpdateFreeTierConfig.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/UpdateTieringInput">AWS
   * API Reference</a></p>
   */
  class UpdateTieringInput
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdateTieringInput();
    AWS_BILLINGCONDUCTOR_API UpdateTieringInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API UpdateTieringInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline const UpdateFreeTierConfig& GetFreeTier() const{ return m_freeTier; }

    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline bool FreeTierHasBeenSet() const { return m_freeTierHasBeenSet; }

    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline void SetFreeTier(const UpdateFreeTierConfig& value) { m_freeTierHasBeenSet = true; m_freeTier = value; }

    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline void SetFreeTier(UpdateFreeTierConfig&& value) { m_freeTierHasBeenSet = true; m_freeTier = std::move(value); }

    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline UpdateTieringInput& WithFreeTier(const UpdateFreeTierConfig& value) { SetFreeTier(value); return *this;}

    /**
     * <p> The possible Amazon Web Services Free Tier configurations. </p>
     */
    inline UpdateTieringInput& WithFreeTier(UpdateFreeTierConfig&& value) { SetFreeTier(std::move(value)); return *this;}

  private:

    UpdateFreeTierConfig m_freeTier;
    bool m_freeTierHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
