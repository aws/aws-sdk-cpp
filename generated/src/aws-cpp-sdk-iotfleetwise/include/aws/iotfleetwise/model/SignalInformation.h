/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a signal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/SignalInformation">AWS
   * API Reference</a></p>
   */
  class SignalInformation
  {
  public:
    AWS_IOTFLEETWISE_API SignalInformation() = default;
    AWS_IOTFLEETWISE_API SignalInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the signal.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SignalInformation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of samples to collect.</p>
     */
    inline long long GetMaxSampleCount() const { return m_maxSampleCount; }
    inline bool MaxSampleCountHasBeenSet() const { return m_maxSampleCountHasBeenSet; }
    inline void SetMaxSampleCount(long long value) { m_maxSampleCountHasBeenSet = true; m_maxSampleCount = value; }
    inline SignalInformation& WithMaxSampleCount(long long value) { SetMaxSampleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum duration of time (in milliseconds) between two triggering events
     * to collect data.</p>  <p>If a signal changes often, you might want to
     * collect data at a slower rate.</p> 
     */
    inline long long GetMinimumSamplingIntervalMs() const { return m_minimumSamplingIntervalMs; }
    inline bool MinimumSamplingIntervalMsHasBeenSet() const { return m_minimumSamplingIntervalMsHasBeenSet; }
    inline void SetMinimumSamplingIntervalMs(long long value) { m_minimumSamplingIntervalMsHasBeenSet = true; m_minimumSamplingIntervalMs = value; }
    inline SignalInformation& WithMinimumSamplingIntervalMs(long long value) { SetMinimumSamplingIntervalMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data partition this signal is associated with.</p> <p>The ID
     * must match one of the IDs provided in <code>dataPartitions</code>. This is
     * accomplished either by specifying a particular data partition ID or by using
     * <code>default</code> for an established default partition. You can establish a
     * default partition in the <code>DataPartition</code> data type.</p>  <p>If
     * you upload a signal as a condition for a campaign's data partition, the same
     * signal must be included in <code>signalsToCollect</code>.</p> 
     *  <p>Access to certain Amazon Web Services IoT FleetWise features is
     * currently gated. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
     * Web Services Region and feature availability</a> in the <i>Amazon Web Services
     * IoT FleetWise Developer Guide</i>.</p> 
     */
    inline const Aws::String& GetDataPartitionId() const { return m_dataPartitionId; }
    inline bool DataPartitionIdHasBeenSet() const { return m_dataPartitionIdHasBeenSet; }
    template<typename DataPartitionIdT = Aws::String>
    void SetDataPartitionId(DataPartitionIdT&& value) { m_dataPartitionIdHasBeenSet = true; m_dataPartitionId = std::forward<DataPartitionIdT>(value); }
    template<typename DataPartitionIdT = Aws::String>
    SignalInformation& WithDataPartitionId(DataPartitionIdT&& value) { SetDataPartitionId(std::forward<DataPartitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_maxSampleCount{0};
    bool m_maxSampleCountHasBeenSet = false;

    long long m_minimumSamplingIntervalMs{0};
    bool m_minimumSamplingIntervalMsHasBeenSet = false;

    Aws::String m_dataPartitionId;
    bool m_dataPartitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
