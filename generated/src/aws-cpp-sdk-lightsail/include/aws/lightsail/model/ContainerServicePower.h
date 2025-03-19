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
    AWS_LIGHTSAIL_API ContainerServicePower() = default;
    AWS_LIGHTSAIL_API ContainerServicePower(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServicePower& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the power (<code>nano-1</code>).</p>
     */
    inline const Aws::String& GetPowerId() const { return m_powerId; }
    inline bool PowerIdHasBeenSet() const { return m_powerIdHasBeenSet; }
    template<typename PowerIdT = Aws::String>
    void SetPowerId(PowerIdT&& value) { m_powerIdHasBeenSet = true; m_powerId = std::forward<PowerIdT>(value); }
    template<typename PowerIdT = Aws::String>
    ContainerServicePower& WithPowerId(PowerIdT&& value) { SetPowerId(std::forward<PowerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly price of the power in USD.</p>
     */
    inline double GetPrice() const { return m_price; }
    inline bool PriceHasBeenSet() const { return m_priceHasBeenSet; }
    inline void SetPrice(double value) { m_priceHasBeenSet = true; m_price = value; }
    inline ContainerServicePower& WithPrice(double value) { SetPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs included in the power.</p>
     */
    inline double GetCpuCount() const { return m_cpuCount; }
    inline bool CpuCountHasBeenSet() const { return m_cpuCountHasBeenSet; }
    inline void SetCpuCount(double value) { m_cpuCountHasBeenSet = true; m_cpuCount = value; }
    inline ContainerServicePower& WithCpuCount(double value) { SetCpuCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of RAM (in GB) of the power.</p>
     */
    inline double GetRamSizeInGb() const { return m_ramSizeInGb; }
    inline bool RamSizeInGbHasBeenSet() const { return m_ramSizeInGbHasBeenSet; }
    inline void SetRamSizeInGb(double value) { m_ramSizeInGbHasBeenSet = true; m_ramSizeInGb = value; }
    inline ContainerServicePower& WithRamSizeInGb(double value) { SetRamSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the power (<code>nano</code>).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerServicePower& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the power is active and can be specified
     * for container services.</p>
     */
    inline bool GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline ContainerServicePower& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}
  private:

    Aws::String m_powerId;
    bool m_powerIdHasBeenSet = false;

    double m_price{0.0};
    bool m_priceHasBeenSet = false;

    double m_cpuCount{0.0};
    bool m_cpuCountHasBeenSet = false;

    double m_ramSizeInGb{0.0};
    bool m_ramSizeInGbHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
