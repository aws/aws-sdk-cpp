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
    AWS_IOTFLEETWISE_API SignalInformation();
    AWS_IOTFLEETWISE_API SignalInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the signal.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the signal.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the signal.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the signal.</p>
     */
    inline SignalInformation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the signal.</p>
     */
    inline SignalInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal.</p>
     */
    inline SignalInformation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum number of samples to collect.</p>
     */
    inline long long GetMaxSampleCount() const{ return m_maxSampleCount; }

    /**
     * <p>The maximum number of samples to collect.</p>
     */
    inline bool MaxSampleCountHasBeenSet() const { return m_maxSampleCountHasBeenSet; }

    /**
     * <p>The maximum number of samples to collect.</p>
     */
    inline void SetMaxSampleCount(long long value) { m_maxSampleCountHasBeenSet = true; m_maxSampleCount = value; }

    /**
     * <p>The maximum number of samples to collect.</p>
     */
    inline SignalInformation& WithMaxSampleCount(long long value) { SetMaxSampleCount(value); return *this;}


    /**
     * <p>The minimum duration of time (in milliseconds) between two triggering events
     * to collect data.</p>  <p>If a signal changes often, you might want to
     * collect data at a slower rate.</p> 
     */
    inline long long GetMinimumSamplingIntervalMs() const{ return m_minimumSamplingIntervalMs; }

    /**
     * <p>The minimum duration of time (in milliseconds) between two triggering events
     * to collect data.</p>  <p>If a signal changes often, you might want to
     * collect data at a slower rate.</p> 
     */
    inline bool MinimumSamplingIntervalMsHasBeenSet() const { return m_minimumSamplingIntervalMsHasBeenSet; }

    /**
     * <p>The minimum duration of time (in milliseconds) between two triggering events
     * to collect data.</p>  <p>If a signal changes often, you might want to
     * collect data at a slower rate.</p> 
     */
    inline void SetMinimumSamplingIntervalMs(long long value) { m_minimumSamplingIntervalMsHasBeenSet = true; m_minimumSamplingIntervalMs = value; }

    /**
     * <p>The minimum duration of time (in milliseconds) between two triggering events
     * to collect data.</p>  <p>If a signal changes often, you might want to
     * collect data at a slower rate.</p> 
     */
    inline SignalInformation& WithMinimumSamplingIntervalMs(long long value) { SetMinimumSamplingIntervalMs(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_maxSampleCount;
    bool m_maxSampleCountHasBeenSet = false;

    long long m_minimumSamplingIntervalMs;
    bool m_minimumSamplingIntervalMsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
