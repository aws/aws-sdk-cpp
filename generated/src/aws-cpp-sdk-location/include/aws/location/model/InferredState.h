/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/PositionalAccuracy.h>
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
   * <p>The inferred state of the device, given the provided position, IP address,
   * cellular signals, and Wi-Fi- access points.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/InferredState">AWS
   * API Reference</a></p>
   */
  class InferredState
  {
  public:
    AWS_LOCATIONSERVICE_API InferredState();
    AWS_LOCATIONSERVICE_API InferredState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API InferredState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device position inferred by the provided position, IP address, cellular
     * signals, and Wi-Fi- access points.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline InferredState& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline InferredState& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline InferredState& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The level of certainty of the inferred position.</p>
     */
    inline const PositionalAccuracy& GetAccuracy() const{ return m_accuracy; }
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }
    inline void SetAccuracy(const PositionalAccuracy& value) { m_accuracyHasBeenSet = true; m_accuracy = value; }
    inline void SetAccuracy(PositionalAccuracy&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::move(value); }
    inline InferredState& WithAccuracy(const PositionalAccuracy& value) { SetAccuracy(value); return *this;}
    inline InferredState& WithAccuracy(PositionalAccuracy&& value) { SetAccuracy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance between the inferred position and the device's self-reported
     * position.</p>
     */
    inline double GetDeviationDistance() const{ return m_deviationDistance; }
    inline bool DeviationDistanceHasBeenSet() const { return m_deviationDistanceHasBeenSet; }
    inline void SetDeviationDistance(double value) { m_deviationDistanceHasBeenSet = true; m_deviationDistance = value; }
    inline InferredState& WithDeviationDistance(double value) { SetDeviationDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if a proxy was used.</p>
     */
    inline bool GetProxyDetected() const{ return m_proxyDetected; }
    inline bool ProxyDetectedHasBeenSet() const { return m_proxyDetectedHasBeenSet; }
    inline void SetProxyDetected(bool value) { m_proxyDetectedHasBeenSet = true; m_proxyDetected = value; }
    inline InferredState& WithProxyDetected(bool value) { SetProxyDetected(value); return *this;}
    ///@}
  private:

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    PositionalAccuracy m_accuracy;
    bool m_accuracyHasBeenSet = false;

    double m_deviationDistance;
    bool m_deviationDistanceHasBeenSet = false;

    bool m_proxyDetected;
    bool m_proxyDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
