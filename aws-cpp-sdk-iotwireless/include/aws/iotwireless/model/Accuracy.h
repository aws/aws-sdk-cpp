/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The accuracy of the estimated position in meters. An empty value indicates
   * that no position data is available. A value of ‘0.0’ value indicates that
   * position data is available. This data corresponds to the position information
   * that you specified instead of the position computed by solver.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/Accuracy">AWS
   * API Reference</a></p>
   */
  class Accuracy
  {
  public:
    AWS_IOTWIRELESS_API Accuracy();
    AWS_IOTWIRELESS_API Accuracy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Accuracy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The horizontal accuracy of the estimated position, which is the difference
     * between the estimated location and the actual device location.</p>
     */
    inline double GetHorizontalAccuracy() const{ return m_horizontalAccuracy; }

    /**
     * <p>The horizontal accuracy of the estimated position, which is the difference
     * between the estimated location and the actual device location.</p>
     */
    inline bool HorizontalAccuracyHasBeenSet() const { return m_horizontalAccuracyHasBeenSet; }

    /**
     * <p>The horizontal accuracy of the estimated position, which is the difference
     * between the estimated location and the actual device location.</p>
     */
    inline void SetHorizontalAccuracy(double value) { m_horizontalAccuracyHasBeenSet = true; m_horizontalAccuracy = value; }

    /**
     * <p>The horizontal accuracy of the estimated position, which is the difference
     * between the estimated location and the actual device location.</p>
     */
    inline Accuracy& WithHorizontalAccuracy(double value) { SetHorizontalAccuracy(value); return *this;}


    /**
     * <p>The vertical accuracy of the estimated position, which is the difference
     * between the estimated altitude and actual device latitude in meters.</p>
     */
    inline double GetVerticalAccuracy() const{ return m_verticalAccuracy; }

    /**
     * <p>The vertical accuracy of the estimated position, which is the difference
     * between the estimated altitude and actual device latitude in meters.</p>
     */
    inline bool VerticalAccuracyHasBeenSet() const { return m_verticalAccuracyHasBeenSet; }

    /**
     * <p>The vertical accuracy of the estimated position, which is the difference
     * between the estimated altitude and actual device latitude in meters.</p>
     */
    inline void SetVerticalAccuracy(double value) { m_verticalAccuracyHasBeenSet = true; m_verticalAccuracy = value; }

    /**
     * <p>The vertical accuracy of the estimated position, which is the difference
     * between the estimated altitude and actual device latitude in meters.</p>
     */
    inline Accuracy& WithVerticalAccuracy(double value) { SetVerticalAccuracy(value); return *this;}

  private:

    double m_horizontalAccuracy;
    bool m_horizontalAccuracyHasBeenSet = false;

    double m_verticalAccuracy;
    bool m_verticalAccuracyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
