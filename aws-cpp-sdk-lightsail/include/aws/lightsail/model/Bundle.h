/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/InstancePlatform.h>
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
  class AWS_LIGHTSAIL_API Bundle
  {
  public:
    Bundle();
    Bundle(Aws::Utils::Json::JsonView jsonValue);
    Bundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The price in US dollars (e.g., <code>5.0</code>).</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The price in US dollars (e.g., <code>5.0</code>).</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>The price in US dollars (e.g., <code>5.0</code>).</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The price in US dollars (e.g., <code>5.0</code>).</p>
     */
    inline Bundle& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The number of vCPUs included in the bundle (e.g., <code>2</code>).</p>
     */
    inline int GetCpuCount() const{ return m_cpuCount; }

    /**
     * <p>The number of vCPUs included in the bundle (e.g., <code>2</code>).</p>
     */
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }

    /**
     * <p>The number of vCPUs included in the bundle (e.g., <code>2</code>).</p>
     */
    inline void SetCpuCount(int value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }

    /**
     * <p>The number of vCPUs included in the bundle (e.g., <code>2</code>).</p>
     */
    inline Bundle& WithCpuCount(int value) { SetCpuCount(value); return *this;}


    /**
     * <p>The size of the SSD (e.g., <code>30</code>).</p>
     */
    inline int GetDiskSizeInGb() const{ return m_diskSizeInGb; }

    /**
     * <p>The size of the SSD (e.g., <code>30</code>).</p>
     */
    inline bool DiskSizeInGbHasBeenSet() const { return m_diskSizeInGbHasBeenSet; }

    /**
     * <p>The size of the SSD (e.g., <code>30</code>).</p>
     */
    inline void SetDiskSizeInGb(int value) { m_diskSizeInGbHasBeenSet = true; m_diskSizeInGb = value; }

    /**
     * <p>The size of the SSD (e.g., <code>30</code>).</p>
     */
    inline Bundle& WithDiskSizeInGb(int value) { SetDiskSizeInGb(value); return *this;}


    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline Bundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline Bundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID (e.g., <code>micro_1_0</code>).</p>
     */
    inline Bundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}


    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline Bundle& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline Bundle& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance type (e.g., <code>t2.micro</code>).</p>
     */
    inline Bundle& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the bundle is active.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value indicating whether the bundle is active.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the bundle is active.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value indicating whether the bundle is active.</p>
     */
    inline Bundle& WithIsActive(bool value) { SetIsActive(value); return *this;}


    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline Bundle& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline Bundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the bundle (e.g., <code>Micro</code>).</p>
     */
    inline Bundle& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A numeric value that represents the power of the bundle (e.g.,
     * <code>500</code>). You can use the bundle's power value in conjunction with a
     * blueprint's minimum power value to determine whether the blueprint will run on
     * the bundle. For example, you need a bundle with a power value of 500 or more to
     * create an instance that uses a blueprint with a minimum power value of 500.</p>
     */
    inline int GetPower() const{ return m_power; }

    /**
     * <p>A numeric value that represents the power of the bundle (e.g.,
     * <code>500</code>). You can use the bundle's power value in conjunction with a
     * blueprint's minimum power value to determine whether the blueprint will run on
     * the bundle. For example, you need a bundle with a power value of 500 or more to
     * create an instance that uses a blueprint with a minimum power value of 500.</p>
     */
    inline bool PowerHasBeenSet() const { return m_powerHasBeenSet; }

    /**
     * <p>A numeric value that represents the power of the bundle (e.g.,
     * <code>500</code>). You can use the bundle's power value in conjunction with a
     * blueprint's minimum power value to determine whether the blueprint will run on
     * the bundle. For example, you need a bundle with a power value of 500 or more to
     * create an instance that uses a blueprint with a minimum power value of 500.</p>
     */
    inline void SetPower(int value) { m_powerHasBeenSet = true; m_power = value; }

    /**
     * <p>A numeric value that represents the power of the bundle (e.g.,
     * <code>500</code>). You can use the bundle's power value in conjunction with a
     * blueprint's minimum power value to determine whether the blueprint will run on
     * the bundle. For example, you need a bundle with a power value of 500 or more to
     * create an instance that uses a blueprint with a minimum power value of 500.</p>
     */
    inline Bundle& WithPower(int value) { SetPower(value); return *this;}


    /**
     * <p>The amount of RAM in GB (e.g., <code>2.0</code>).</p>
     */
    inline double GetRamSizeInGb() const{ return m_ramSizeInGb; }

    /**
     * <p>The amount of RAM in GB (e.g., <code>2.0</code>).</p>
     */
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }

    /**
     * <p>The amount of RAM in GB (e.g., <code>2.0</code>).</p>
     */
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }

    /**
     * <p>The amount of RAM in GB (e.g., <code>2.0</code>).</p>
     */
    inline Bundle& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}


    /**
     * <p>The data transfer rate per month in GB (e.g., <code>2000</code>).</p>
     */
    inline int GetTransferPerMonthInGb() const{ return m_transferPerMonthInGb; }

    /**
     * <p>The data transfer rate per month in GB (e.g., <code>2000</code>).</p>
     */
    inline bool TransferPerMonthInGbHasBeenSet() const { return m_transferPerMonthInGbHasBeenSet; }

    /**
     * <p>The data transfer rate per month in GB (e.g., <code>2000</code>).</p>
     */
    inline void SetTransferPerMonthInGb(int value) { m_transferPerMonthInGbHasBeenSet = true; m_transferPerMonthInGb = value; }

    /**
     * <p>The data transfer rate per month in GB (e.g., <code>2000</code>).</p>
     */
    inline Bundle& WithTransferPerMonthInGb(int value) { SetTransferPerMonthInGb(value); return *this;}


    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline const Aws::Vector<InstancePlatform>& GetSupportedPlatforms() const{ return m_supportedPlatforms; }

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline bool SupportedPlatformsHasBeenSet() const { return m_supportedPlatformsHasBeenSet; }

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline void SetSupportedPlatforms(const Aws::Vector<InstancePlatform>& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = value; }

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline void SetSupportedPlatforms(Aws::Vector<InstancePlatform>&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = std::move(value); }

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline Bundle& WithSupportedPlatforms(const Aws::Vector<InstancePlatform>& value) { SetSupportedPlatforms(value); return *this;}

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline Bundle& WithSupportedPlatforms(Aws::Vector<InstancePlatform>&& value) { SetSupportedPlatforms(std::move(value)); return *this;}

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline Bundle& AddSupportedPlatforms(const InstancePlatform& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(value); return *this; }

    /**
     * <p>The operating system platform (Linux/Unix-based or Windows Server-based) that
     * the bundle supports. You can only launch a <code>WINDOWS</code> bundle on a
     * blueprint that supports the <code>WINDOWS</code> platform.
     * <code>LINUX_UNIX</code> blueprints require a <code>LINUX_UNIX</code> bundle.</p>
     */
    inline Bundle& AddSupportedPlatforms(InstancePlatform&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(std::move(value)); return *this; }

  private:

    double m_price;
    bool m_priceHasBeenSet;

    int m_cpuCount;
    bool m_cpuCountHasBeenSet;

    int m_diskSizeInGb;
    bool m_diskSizeInGbHasBeenSet;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    bool m_isActive;
    bool m_isActiveHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_power;
    bool m_powerHasBeenSet;

    double m_ramSizeInGb;
    bool m_ramSizeInGbHasBeenSet;

    int m_transferPerMonthInGb;
    bool m_transferPerMonthInGbHasBeenSet;

    Aws::Vector<InstancePlatform> m_supportedPlatforms;
    bool m_supportedPlatformsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
