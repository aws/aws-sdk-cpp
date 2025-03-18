/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/InstancePlatform.h>
#include <aws/lightsail/model/AppCategory.h>
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
   * <p>Describes a bundle, which is a set of specs describing your virtual private
   * server (or <i>instance</i>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Bundle">AWS
   * API Reference</a></p>
   */
  class Bundle
  {
  public:
    AWS_LIGHTSAIL_API Bundle() = default;
    AWS_LIGHTSAIL_API Bundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Bundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The price in US dollars (<code>5.0</code>) of the bundle.</p>
     */
    inline double GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline Bundle& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs included in the bundle (<code>2</code>).</p>
     */
    inline int GetCpuCount() const { return m_cpuCount; }
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }
    inline Bundle& WithCpuCount(int value) { SetCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the SSD (<code>30</code>).</p>
     */
    inline int GetDiskSizeInGb() const { return m_diskSizeInGb; }
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }
    inline Bundle& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    Bundle& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type (<code>micro</code>).</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    Bundle& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the bundle is active.</p>
     */
    inline bool GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline Bundle& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the bundle (<code>Micro</code>).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Bundle& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that represents the power of the bundle (<code>500</code>).
     * You can use the bundle's power value in conjunction with a blueprint's minimum
     * power value to determine whether the blueprint will run on the bundle. For
     * example, you need a bundle with a power value of 500 or more to create an
     * instance that uses a blueprint with a minimum power value of 500.</p>
     */
    inline int GetPower() const { return m_power; }
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }
    inline void SetPower(int value) { m_powerHasBeenSet = true; m_power = value; }
    inline Bundle& WithPower(int value) { SetPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of RAM in GB (<code>2.0</code>).</p>
     */
    inline double GetRamSizeInGb() const { return m_ramSizeInGb; }
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }
    inline Bundle& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer rate per month in GB (<code>2000</code>).</p>
     */
    inline int GetTransferPerMonthInGb() const { return m_transferPerMonthInGb; }
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }
    inline Bundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline const Aws::Vector<InstancePlatform>& GetSupportedPlatforms() const { return m_supportedPlatforms; }
    inline bool SupportedPlatformsHasBeenSet() const { return m_supportedPlatformsHasBeenSet; }
    template<typename SupportedPlatformsT = Aws::Vector<InstancePlatform>>
    void SetSupportedPlatforms(SupportedPlatformsT&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = std::forward<SupportedPlatformsT>(value); }
    template<typename SupportedPlatformsT = Aws::Vector<InstancePlatform>>
    Bundle& WithSupportedPlatforms(SupportedPlatformsT&& value) { SetSupportedPlatforms(std::forward<SupportedPlatformsT>(value)); return *this;}
    inline Bundle& AddSupportedPlatforms(InstancePlatform value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Virtual computer blueprints that are supported by a Lightsail for Research
     * bundle.</p>  <p>This parameter only applies to Lightsail for Research
     * resources.</p> 
     */
    inline const Aws::Vector<AppCategory>& GetSupportedAppCategories() const { return m_supportedAppCategories; }
    inline bool SupportedAppCategoriesHasBeenSet() const { return m_supportedAppCategoriesHasBeenSet; }
    template<typename SupportedAppCategoriesT = Aws::Vector<AppCategory>>
    void SetSupportedAppCategories(SupportedAppCategoriesT&& value) { m_supportedAppCategoriesHasBeenSet = true; m_supportedAppCategories = std::forward<SupportedAppCategoriesT>(value); }
    template<typename SupportedAppCategoriesT = Aws::Vector<AppCategory>>
    Bundle& WithSupportedAppCategories(SupportedAppCategoriesT&& value) { SetSupportedAppCategories(std::forward<SupportedAppCategoriesT>(value)); return *this;}
    inline Bundle& AddSupportedAppCategories(AppCategory value) { m_supportedAppCategoriesHasBeenSet = true; m_supportedAppCategories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An integer that indicates the public ipv4 address count included in the
     * bundle, the value is either 0 or 1.</p>
     */
    inline int GetPublicIpv4AddressCount() const { return m_publicIpv4AddressCount; }
    inline bool PublicIpv4AddressCountHasBeenSet() const { return m_publicIpv4AddressCountHasBeenSet; }
    inline void SetPublicIpv4AddressCount(int value) { m_publicIpv4AddressCountHasBeenSet = true; m_publicIpv4AddressCount = value; }
    inline Bundle& WithPublicIpv4AddressCount(int value) { SetPublicIpv4AddressCount(value); return *this;}
    ///@}
  private:

    double m_price{0.0};
    bool m_priceHasBeenSet = false;

    int m_cpuCount{0};
    bool m_cpuCountHasBeenSet = false;

    int m_diskSizeInGb{0};
    bool m_diskSizeInGbHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_power{0};
    bool m_powerHasBeenSet = false;

    double m_ramSizeInGb{0.0};
    bool m_ramSizeInGbHasBeenSet = false;

    int m_transferPerMonthInGb{0};
    bool m_transferPerMonthInGbHasBeenSet = false;

    Aws::Vector<InstancePlatform> m_supportedPlatforms;
    bool m_supportedPlatformsHasBeenSet = false;

    Aws::Vector<AppCategory> m_supportedAppCategories;
    bool m_supportedAppCategoriesHasBeenSet = false;

    int m_publicIpv4AddressCount{0};
    bool m_publicIpv4AddressCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
