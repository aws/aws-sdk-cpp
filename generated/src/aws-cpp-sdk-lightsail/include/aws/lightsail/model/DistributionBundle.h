/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the specifications of a distribution bundle.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DistributionBundle">AWS
   * API Reference</a></p>
   */
  class DistributionBundle
  {
  public:
    AWS_LIGHTSAIL_API DistributionBundle() = default;
    AWS_LIGHTSAIL_API DistributionBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DistributionBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    DistributionBundle& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the distribution bundle.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DistributionBundle& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly price, in US dollars, of the bundle.</p>
     */
    inline double GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline DistributionBundle& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly network transfer quota of the bundle.</p>
     */
    inline int GetTransferPerMonthInGb() const { return m_transferPerMonthInGb; }
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }
    inline DistributionBundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the bundle is active, and can be specified for a new or
     * existing distribution.</p>
     */
    inline bool GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline DistributionBundle& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_price{0.0};
    bool m_priceHasBeenSet = false;

    int m_transferPerMonthInGb{0};
    bool m_transferPerMonthInGbHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
