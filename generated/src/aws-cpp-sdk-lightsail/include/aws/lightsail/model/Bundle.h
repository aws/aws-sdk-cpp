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
    AWS_LIGHTSAIL_API Bundle();
    AWS_LIGHTSAIL_API Bundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Bundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The price in US dollars (<code>5.0</code>) of the bundle.</p>
     */
    inline double GetPrice() const{ return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline Bundle& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs included in the bundle (<code>2</code>).</p>
     */
    inline int GetCpuCount() const{ return m_cpuCount; }
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }
    inline Bundle& WithCpuCount(int value) { SetCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the SSD (<code>30</code>).</p>
     */
    inline int GetDiskSizeInGb() const{ return m_diskSizeInGb; }
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }
    inline Bundle& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID (<code>micro_x_x</code>).</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline Bundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline Bundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline Bundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type (<code>micro</code>).</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline Bundle& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline Bundle& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline Bundle& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the bundle is active.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline Bundle& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the bundle (<code>Micro</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Bundle& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Bundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Bundle& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value that represents the power of the bundle (<code>500</code>).
     * You can use the bundle's power value in conjunction with a blueprint's minimum
     * power value to determine whether the blueprint will run on the bundle. For
     * example, you need a bundle with a power value of 500 or more to create an
     * instance that uses a blueprint with a minimum power value of 500.</p>
     */
    inline int GetPower() const{ return m_power; }
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }
    inline void SetPower(int value) { m_powerHasBeenSet = true; m_power = value; }
    inline Bundle& WithPower(int value) { SetPower(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of RAM in GB (<code>2.0</code>).</p>
     */
    inline double GetRamSizeInGb() const{ return m_ramSizeInGb; }
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }
    inline Bundle& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer rate per month in GB (<code>2000</code>).</p>
     */
    inline int GetTransferPerMonthInGb() const{ return m_transferPerMonthInGb; }
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
    inline const Aws::Vector<InstancePlatform>& GetSupportedPlatforms() const{ return m_supportedPlatforms; }
    inline bool SupportedPlatformsHasBeenSet() const { return m_supportedPlatformsHasBeenSet; }
    inline void SetSupportedPlatforms(const Aws::Vector<InstancePlatform>& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = value; }
    inline void SetSupportedPlatforms(Aws::Vector<InstancePlatform>&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = std::move(value); }
    inline Bundle& WithSupportedPlatforms(const Aws::Vector<InstancePlatform>& value) { SetSupportedPlatforms(value); return *this;}
    inline Bundle& WithSupportedPlatforms(Aws::Vector<InstancePlatform>&& value) { SetSupportedPlatforms(std::move(value)); return *this;}
    inline Bundle& AddSupportedPlatforms(const InstancePlatform& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(value); return *this; }
    inline Bundle& AddSupportedPlatforms(InstancePlatform&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Virtual computer blueprints that are supported by a Lightsail for Research
     * bundle.</p>  <p>This parameter only applies to Lightsail for Research
     * resources.</p> 
     */
    inline const Aws::Vector<AppCategory>& GetSupportedAppCategories() const{ return m_supportedAppCategories; }
    inline bool SupportedAppCategoriesHasBeenSet() const { return m_supportedAppCategoriesHasBeenSet; }
    inline void SetSupportedAppCategories(const Aws::Vector<AppCategory>& value) { m_supportedAppCategoriesHasBeenSet = true; m_supportedAppCategories = value; }
    inline void SetSupportedAppCategories(Aws::Vector<AppCategory>&& value) { m_supportedAppCategoriesHasBeenSet = true; m_supportedAppCategories = std::move(value); }
    inline Bundle& WithSupportedAppCategories(const Aws::Vector<AppCategory>& value) { SetSupportedAppCategories(value); return *this;}
    inline Bundle& WithSupportedAppCategories(Aws::Vector<AppCategory>&& value) { SetSupportedAppCategories(std::move(value)); return *this;}
    inline Bundle& AddSupportedAppCategories(const AppCategory& value) { m_supportedAppCategoriesHasBeenSet = true; m_supportedAppCategories.push_back(value); return *this; }
    inline Bundle& AddSupportedAppCategories(AppCategory&& value) { m_supportedAppCategoriesHasBeenSet = true; m_supportedAppCategories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An integer that indicates the public ipv4 address count included in the
     * bundle, the value is either 0 or 1.</p>
     */
    inline int GetPublicIpv4AddressCount() const{ return m_publicIpv4AddressCount; }
    inline bool PublicIpv4AddressCountHasBeenSet() const { return m_publicIpv4AddressCountHasBeenSet; }
    inline void SetPublicIpv4AddressCount(int value) { m_publicIpv4AddressCountHasBeenSet = true; m_publicIpv4AddressCount = value; }
    inline Bundle& WithPublicIpv4AddressCount(int value) { SetPublicIpv4AddressCount(value); return *this;}
    ///@}
  private:

    double m_price;
    bool m_priceHasBeenSet = false;

    int m_cpuCount;
    bool m_cpuCountHasBeenSet = false;

    int m_diskSizeInGb;
    bool m_diskSizeInGbHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_power;
    bool m_powerHasBeenSet = false;

    double m_ramSizeInGb;
    bool m_ramSizeInGbHasBeenSet = false;

    int m_transferPerMonthInGb;
    bool m_transferPerMonthInGbHasBeenSet = false;

    Aws::Vector<InstancePlatform> m_supportedPlatforms;
    bool m_supportedPlatformsHasBeenSet = false;

    Aws::Vector<AppCategory> m_supportedAppCategories;
    bool m_supportedAppCategoriesHasBeenSet = false;

    int m_publicIpv4AddressCount;
    bool m_publicIpv4AddressCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
