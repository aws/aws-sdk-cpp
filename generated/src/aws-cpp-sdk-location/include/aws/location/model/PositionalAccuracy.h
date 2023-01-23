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
   * <p>Defines the level of certainty of the position.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/PositionalAccuracy">AWS
   * API Reference</a></p>
   */
  class PositionalAccuracy
  {
  public:
    AWS_LOCATIONSERVICE_API PositionalAccuracy();
    AWS_LOCATIONSERVICE_API PositionalAccuracy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API PositionalAccuracy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Estimated maximum distance, in meters, between the measured position and the
     * true position of a device, along the Earth's surface.</p>
     */
    inline double GetHorizontal() const{ return m_horizontal; }

    /**
     * <p>Estimated maximum distance, in meters, between the measured position and the
     * true position of a device, along the Earth's surface.</p>
     */
    inline bool HorizontalHasBeenSet() const { return m_horizontalHasBeenSet; }

    /**
     * <p>Estimated maximum distance, in meters, between the measured position and the
     * true position of a device, along the Earth's surface.</p>
     */
    inline void SetHorizontal(double value) { m_horizontalHasBeenSet = true; m_horizontal = value; }

    /**
     * <p>Estimated maximum distance, in meters, between the measured position and the
     * true position of a device, along the Earth's surface.</p>
     */
    inline PositionalAccuracy& WithHorizontal(double value) { SetHorizontal(value); return *this;}

  private:

    double m_horizontal;
    bool m_horizontalHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
