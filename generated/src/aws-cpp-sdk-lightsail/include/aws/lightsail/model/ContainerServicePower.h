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
   * <p>Describes the powers that can be specified for an Amazon Lightsail container
   * service.</p> <p>The power specifies the amount of RAM, the number of vCPUs, and
   * the base price of the container service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServicePower">AWS
   * API Reference</a></p>
   */
  class ContainerServicePower
  {
  public:
    AWS_LIGHTSAIL_API ContainerServicePower();
    AWS_LIGHTSAIL_API ContainerServicePower(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServicePower& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline const Aws::String& GetPowerId() const{ return m_powerId; }

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline bool PowerIdHasBeenSet() const { return m_powerIdHasBeenSet; }

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline void SetPowerId(const Aws::String& value) { m_powerIdHasBeenSet = true; m_powerId = value; }

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline void SetPowerId(Aws::String&& value) { m_powerIdHasBeenSet = true; m_powerId = std::move(value); }

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline void SetPowerId(const char* value) { m_powerIdHasBeenSet = true; m_powerId.assign(value); }

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline ContainerServicePower& WithPowerId(const Aws::String& value) { SetPowerId(value); return *this;}

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline ContainerServicePower& WithPowerId(Aws::String&& value) { SetPowerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the power (e.g., <code>nano-1</code>).</p>
     */
    inline ContainerServicePower& WithPowerId(const char* value) { SetPowerId(value); return *this;}


    /**
     * <p>The monthly price of the power in USD.</p>
     */
    inline double GetPrice() const{ return m_price; }

    /**
     * <p>The monthly price of the power in USD.</p>
     */
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }

    /**
     * <p>The monthly price of the power in USD.</p>
     */
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }

    /**
     * <p>The monthly price of the power in USD.</p>
     */
    inline ContainerServicePower& WithPrice(double value) { SetPrice(value); return *this;}


    /**
     * <p>The number of vCPUs included in the power.</p>
     */
    inline double GetCpuCount() const{ return m_cpuCount; }

    /**
     * <p>The number of vCPUs included in the power.</p>
     */
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }

    /**
     * <p>The number of vCPUs included in the power.</p>
     */
    inline void SetCpuCount(double value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }

    /**
     * <p>The number of vCPUs included in the power.</p>
     */
    inline ContainerServicePower& WithCpuCount(double value) { SetCpuCount(value); return *this;}


    /**
     * <p>The amount of RAM (in GB) of the power.</p>
     */
    inline double GetRamSizeInGb() const{ return m_ramSizeInGb; }

    /**
     * <p>The amount of RAM (in GB) of the power.</p>
     */
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }

    /**
     * <p>The amount of RAM (in GB) of the power.</p>
     */
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }

    /**
     * <p>The amount of RAM (in GB) of the power.</p>
     */
    inline ContainerServicePower& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}


    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline ContainerServicePower& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline ContainerServicePower& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the power (e.g., <code>nano</code>).</p>
     */
    inline ContainerServicePower& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the power is active and can be specified
     * for container services.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }

    /**
     * <p>A Boolean value indicating whether the power is active and can be specified
     * for container services.</p>
     */
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the power is active and can be specified
     * for container services.</p>
     */
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }

    /**
     * <p>A Boolean value indicating whether the power is active and can be specified
     * for container services.</p>
     */
    inline ContainerServicePower& WithIsActive(bool value) { SetIsActive(value); return *this;}

  private:

    Aws::String m_powerId;
    bool m_powerIdHasBeenSet = false;

    double m_price;
    bool m_priceHasBeenSet = false;

    double m_cpuCount;
    bool m_cpuCountHasBeenSet = false;

    double m_ramSizeInGb;
    bool m_ramSizeInGbHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
