/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/TruckDimensions.h>
#include <aws/location/model/TruckWeight.h>
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
   * <p>Contains details about additional route preferences for requests that specify
   * <code>TravelMode</code> as <code>Truck</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteTruckModeOptions">AWS
   * API Reference</a></p>
   */
  class CalculateRouteTruckModeOptions
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteTruckModeOptions() = default;
    AWS_LOCATIONSERVICE_API CalculateRouteTruckModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CalculateRouteTruckModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Avoids ferries when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetAvoidFerries() const { return m_avoidFerries; }
    inline bool AvoidFerriesHasBeenSet() const { return m_avoidFerriesHasBeenSet; }
    inline void SetAvoidFerries(bool value) { m_avoidFerriesHasBeenSet = true; m_avoidFerries = value; }
    inline CalculateRouteTruckModeOptions& WithAvoidFerries(bool value) { SetAvoidFerries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoids tolls when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetAvoidTolls() const { return m_avoidTolls; }
    inline bool AvoidTollsHasBeenSet() const { return m_avoidTollsHasBeenSet; }
    inline void SetAvoidTolls(bool value) { m_avoidTollsHasBeenSet = true; m_avoidTolls = value; }
    inline CalculateRouteTruckModeOptions& WithAvoidTolls(bool value) { SetAvoidTolls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline const TruckDimensions& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = TruckDimensions>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = TruckDimensions>
    CalculateRouteTruckModeOptions& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline const TruckWeight& GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    template<typename WeightT = TruckWeight>
    void SetWeight(WeightT&& value) { m_weightHasBeenSet = true; m_weight = std::forward<WeightT>(value); }
    template<typename WeightT = TruckWeight>
    CalculateRouteTruckModeOptions& WithWeight(WeightT&& value) { SetWeight(std::forward<WeightT>(value)); return *this;}
    ///@}
  private:

    bool m_avoidFerries{false};
    bool m_avoidFerriesHasBeenSet = false;

    bool m_avoidTolls{false};
    bool m_avoidTollsHasBeenSet = false;

    TruckDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    TruckWeight m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
