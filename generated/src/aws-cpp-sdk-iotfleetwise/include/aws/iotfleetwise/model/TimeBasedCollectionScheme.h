/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

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
   * <p>Information about a collection scheme that uses a time period to decide how
   * often to collect data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/TimeBasedCollectionScheme">AWS
   * API Reference</a></p>
   */
  class TimeBasedCollectionScheme
  {
  public:
    AWS_IOTFLEETWISE_API TimeBasedCollectionScheme();
    AWS_IOTFLEETWISE_API TimeBasedCollectionScheme(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API TimeBasedCollectionScheme& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time period (in milliseconds) to decide how often to collect data. For
     * example, if the time period is <code>60000</code>, the Edge Agent software
     * collects data once every minute.</p>
     */
    inline long long GetPeriodMs() const{ return m_periodMs; }

    /**
     * <p>The time period (in milliseconds) to decide how often to collect data. For
     * example, if the time period is <code>60000</code>, the Edge Agent software
     * collects data once every minute.</p>
     */
    inline bool PeriodMsHasBeenSet() const { return m_periodMsHasBeenSet; }

    /**
     * <p>The time period (in milliseconds) to decide how often to collect data. For
     * example, if the time period is <code>60000</code>, the Edge Agent software
     * collects data once every minute.</p>
     */
    inline void SetPeriodMs(long long value) { m_periodMsHasBeenSet = true; m_periodMs = value; }

    /**
     * <p>The time period (in milliseconds) to decide how often to collect data. For
     * example, if the time period is <code>60000</code>, the Edge Agent software
     * collects data once every minute.</p>
     */
    inline TimeBasedCollectionScheme& WithPeriodMs(long long value) { SetPeriodMs(value); return *this;}

  private:

    long long m_periodMs;
    bool m_periodMsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
