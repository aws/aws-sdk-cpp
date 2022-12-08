/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>

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
   * <code>TravelMode</code> as <code>Car</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/CalculateRouteCarModeOptions">AWS
   * API Reference</a></p>
   */
  class CalculateRouteCarModeOptions
  {
  public:
    AWS_LOCATIONSERVICE_API CalculateRouteCarModeOptions();
    AWS_LOCATIONSERVICE_API CalculateRouteCarModeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API CalculateRouteCarModeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CalculateRouteCarModeOptions& WithAvoidFerries(bool value) { SetAvoidFerries(value); return *this;}


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
    inline CalculateRouteCarModeOptions& WithAvoidTolls(bool value) { SetAvoidTolls(value); return *this;}

  private:

    bool m_avoidFerries;
    bool m_avoidFerriesHasBeenSet = false;

    bool m_avoidTolls;
    bool m_avoidTollsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
