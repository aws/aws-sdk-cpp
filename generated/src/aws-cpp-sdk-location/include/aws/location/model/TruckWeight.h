/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/VehicleWeightUnit.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains details about the truck's weight specifications. Used to avoid roads
   * that can't support or allow the total weight for requests that specify
   * <code>TravelMode</code> as <code>Truck</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/TruckWeight">AWS
   * API Reference</a></p>
   */
  class TruckWeight
  {
  public:
    AWS_LOCATIONSERVICE_API TruckWeight() = default;
    AWS_LOCATIONSERVICE_API TruckWeight(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API TruckWeight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total weight of the truck. </p> <ul> <li> <p>For example,
     * <code>3500</code>.</p> </li> </ul>
     */
    inline double GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }
    inline TruckWeight& WithTotal(double value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measurement to use for the truck weight.</p> <p>Default Value:
     * <code>Kilograms</code> </p>
     */
    inline VehicleWeightUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(VehicleWeightUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline TruckWeight& WithUnit(VehicleWeightUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    double m_total{0.0};
    bool m_totalHasBeenSet = false;

    VehicleWeightUnit m_unit{VehicleWeightUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
