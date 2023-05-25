/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/iot-roborunner/model/CartesianCoordinates.h>
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
namespace IoTRoboRunner
{
namespace Model
{

  /**
   * <p>Supported coordinates for worker position.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/PositionCoordinates">AWS
   * API Reference</a></p>
   */
  class PositionCoordinates
  {
  public:
    AWS_IOTROBORUNNER_API PositionCoordinates();
    AWS_IOTROBORUNNER_API PositionCoordinates(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API PositionCoordinates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Cartesian coordinates.</p>
     */
    inline const CartesianCoordinates& GetCartesianCoordinates() const{ return m_cartesianCoordinates; }

    /**
     * <p>Cartesian coordinates.</p>
     */
    inline bool CartesianCoordinatesHasBeenSet() const { return m_cartesianCoordinatesHasBeenSet; }

    /**
     * <p>Cartesian coordinates.</p>
     */
    inline void SetCartesianCoordinates(const CartesianCoordinates& value) { m_cartesianCoordinatesHasBeenSet = true; m_cartesianCoordinates = value; }

    /**
     * <p>Cartesian coordinates.</p>
     */
    inline void SetCartesianCoordinates(CartesianCoordinates&& value) { m_cartesianCoordinatesHasBeenSet = true; m_cartesianCoordinates = std::move(value); }

    /**
     * <p>Cartesian coordinates.</p>
     */
    inline PositionCoordinates& WithCartesianCoordinates(const CartesianCoordinates& value) { SetCartesianCoordinates(value); return *this;}

    /**
     * <p>Cartesian coordinates.</p>
     */
    inline PositionCoordinates& WithCartesianCoordinates(CartesianCoordinates&& value) { SetCartesianCoordinates(std::move(value)); return *this;}

  private:

    CartesianCoordinates m_cartesianCoordinates;
    bool m_cartesianCoordinatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
