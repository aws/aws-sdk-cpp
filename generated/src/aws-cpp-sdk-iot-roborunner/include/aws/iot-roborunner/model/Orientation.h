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
   * <p>Worker orientation measured in units clockwise from north.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-roborunner-2018-05-10/Orientation">AWS
   * API Reference</a></p>
   */
  class Orientation
  {
  public:
    AWS_IOTROBORUNNER_API Orientation();
    AWS_IOTROBORUNNER_API Orientation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Orientation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTROBORUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Degrees, limited on [0, 360)</p>
     */
    inline double GetDegrees() const{ return m_degrees; }

    /**
     * <p>Degrees, limited on [0, 360)</p>
     */
    inline bool DegreesHasBeenSet() const { return m_degreesHasBeenSet; }

    /**
     * <p>Degrees, limited on [0, 360)</p>
     */
    inline void SetDegrees(double value) { m_degreesHasBeenSet = true; m_degrees = value; }

    /**
     * <p>Degrees, limited on [0, 360)</p>
     */
    inline Orientation& WithDegrees(double value) { SetDegrees(value); return *this;}

  private:

    double m_degrees;
    bool m_degreesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
