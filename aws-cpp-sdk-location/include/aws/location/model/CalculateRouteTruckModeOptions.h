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
    AWS_LOCATIONSERVICE_API CalculateRouteTruckModeOptions();
    AWS_LOCATIONSERVICE_API CalculateRouteTruckModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CalculateRouteTruckModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Avoids ferries when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetAvoidFerries() const{ return m_avoidFerries; }

    /**
     * <p>Avoids ferries when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool AvoidFerriesHasBeenSet() const { return m_avoidFerriesHasBeenSet; }

    /**
     * <p>Avoids ferries when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline void SetAvoidFerries(bool value) { m_avoidFerriesHasBeenSet = true; m_avoidFerries = value; }

    /**
     * <p>Avoids ferries when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline CalculateRouteTruckModeOptions& WithAvoidFerries(bool value) { SetAvoidFerries(value); return *this;}


    /**
     * <p>Avoids tolls when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool GetAvoidTolls() const{ return m_avoidTolls; }

    /**
     * <p>Avoids tolls when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline bool AvoidTollsHasBeenSet() const { return m_avoidTollsHasBeenSet; }

    /**
     * <p>Avoids tolls when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline void SetAvoidTolls(bool value) { m_avoidTollsHasBeenSet = true; m_avoidTolls = value; }

    /**
     * <p>Avoids tolls when calculating routes.</p> <p>Default Value:
     * <code>false</code> </p> <p>Valid Values: <code>false</code> | <code>true</code>
     * </p>
     */
    inline CalculateRouteTruckModeOptions& WithAvoidTolls(bool value) { SetAvoidTolls(value); return *this;}


    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline const TruckDimensions& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline void SetDimensions(const TruckDimensions& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline void SetDimensions(TruckDimensions&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline CalculateRouteTruckModeOptions& WithDimensions(const TruckDimensions& value) { SetDimensions(value); return *this;}

    /**
     * <p>Specifies the truck's dimension specifications including length, height,
     * width, and unit of measurement. Used to avoid roads that can't support the
     * truck's dimensions.</p>
     */
    inline CalculateRouteTruckModeOptions& WithDimensions(TruckDimensions&& value) { SetDimensions(std::move(value)); return *this;}


    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline const TruckWeight& GetWeight() const{ return m_weight; }

    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline void SetWeight(const TruckWeight& value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline void SetWeight(TruckWeight&& value) { m_weightHasBeenSet = true; m_weight = std::move(value); }

    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline CalculateRouteTruckModeOptions& WithWeight(const TruckWeight& value) { SetWeight(value); return *this;}

    /**
     * <p>Specifies the truck's weight specifications including total weight and unit
     * of measurement. Used to avoid roads that can't support the truck's weight.</p>
     */
    inline CalculateRouteTruckModeOptions& WithWeight(TruckWeight&& value) { SetWeight(std::move(value)); return *this;}

  private:

    bool m_avoidFerries;
    bool m_avoidFerriesHasBeenSet = false;

    bool m_avoidTolls;
    bool m_avoidTollsHasBeenSet = false;

    TruckDimensions m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    TruckWeight m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
