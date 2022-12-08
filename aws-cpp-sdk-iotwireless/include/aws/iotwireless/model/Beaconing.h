/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Beaconing parameters for configuring the wireless gateways.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/Beaconing">AWS
   * API Reference</a></p>
   */
  class Beaconing
  {
  public:
    AWS_IOTWIRELESS_API Beaconing();
    AWS_IOTWIRELESS_API Beaconing(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Beaconing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data rate for gateways that are sending the beacons.</p>
     */
    inline int GetDataRate() const{ return m_dataRate; }

    /**
     * <p>The data rate for gateways that are sending the beacons.</p>
     */
    inline bool DataRateHasBeenSet() const { return m_dataRateHasBeenSet; }

    /**
     * <p>The data rate for gateways that are sending the beacons.</p>
     */
    inline void SetDataRate(int value) { m_dataRateHasBeenSet = true; m_dataRate = value; }

    /**
     * <p>The data rate for gateways that are sending the beacons.</p>
     */
    inline Beaconing& WithDataRate(int value) { SetDataRate(value); return *this;}


    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline const Aws::Vector<int>& GetFrequencies() const{ return m_frequencies; }

    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline bool FrequenciesHasBeenSet() const { return m_frequenciesHasBeenSet; }

    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline void SetFrequencies(const Aws::Vector<int>& value) { m_frequenciesHasBeenSet = true; m_frequencies = value; }

    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline void SetFrequencies(Aws::Vector<int>&& value) { m_frequenciesHasBeenSet = true; m_frequencies = std::move(value); }

    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline Beaconing& WithFrequencies(const Aws::Vector<int>& value) { SetFrequencies(value); return *this;}

    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline Beaconing& WithFrequencies(Aws::Vector<int>&& value) { SetFrequencies(std::move(value)); return *this;}

    /**
     * <p>The frequency list for the gateways to send the beacons.</p>
     */
    inline Beaconing& AddFrequencies(int value) { m_frequenciesHasBeenSet = true; m_frequencies.push_back(value); return *this; }

  private:

    int m_dataRate;
    bool m_dataRateHasBeenSet = false;

    Aws::Vector<int> m_frequencies;
    bool m_frequenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
