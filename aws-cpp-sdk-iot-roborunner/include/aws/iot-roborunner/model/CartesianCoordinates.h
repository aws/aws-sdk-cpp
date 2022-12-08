/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>

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
   * <p>Cartesian coordinates in 3D space relative to the RoboRunner
   * origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/CartesianCoordinates">AWS
   * API Reference</a></p>
   */
  class CartesianCoordinates
  {
  public:
    AWS_IOTROBORUNNER_API CartesianCoordinates();
    AWS_IOTROBORUNNER_API CartesianCoordinates(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API CartesianCoordinates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>X coordinate.</p>
     */
    inline double GetX() const{ return m_x; }

    /**
     * <p>X coordinate.</p>
     */
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }

    /**
     * <p>X coordinate.</p>
     */
    inline void SetX(double value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * <p>X coordinate.</p>
     */
    inline CartesianCoordinates& WithX(double value) { SetX(value); return *this;}


    /**
     * <p>Y coordinate.</p>
     */
    inline double GetY() const{ return m_y; }

    /**
     * <p>Y coordinate.</p>
     */
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }

    /**
     * <p>Y coordinate.</p>
     */
    inline void SetY(double value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * <p>Y coordinate.</p>
     */
    inline CartesianCoordinates& WithY(double value) { SetY(value); return *this;}


    /**
     * <p>Z coordinate.</p>
     */
    inline double GetZ() const{ return m_z; }

    /**
     * <p>Z coordinate.</p>
     */
    inline bool ZHasBeenSet() const { return m_zHasBeenSet; }

    /**
     * <p>Z coordinate.</p>
     */
    inline void SetZ(double value) { m_zHasBeenSet = true; m_z = value; }

    /**
     * <p>Z coordinate.</p>
     */
    inline CartesianCoordinates& WithZ(double value) { SetZ(value); return *this;}

  private:

    double m_x;
    bool m_xHasBeenSet = false;

    double m_y;
    bool m_yHasBeenSet = false;

    double m_z;
    bool m_zHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
