/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>

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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration information of a delta time
   * session window.</p> <p> <a
   * href="https://docs.aws.amazon.com/iotanalytics/latest/APIReference/API_DeltaTime.html">
   * <code>DeltaTime</code> </a> specifies a time interval. You can use
   * <code>DeltaTime</code> to create dataset contents with data that has arrived in
   * the data store since the last execution. For an example of
   * <code>DeltaTime</code>, see <a
   * href="https://docs.aws.amazon.com/iotanalytics/latest/userguide/automate-create-dataset.html#automate-example6">
   * Creating a SQL dataset with a delta window (CLI)</a> in the <i>IoT Analytics
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeltaTimeSessionWindowConfiguration">AWS
   * API Reference</a></p>
   */
  class DeltaTimeSessionWindowConfiguration
  {
  public:
    AWS_IOTANALYTICS_API DeltaTimeSessionWindowConfiguration();
    AWS_IOTANALYTICS_API DeltaTimeSessionWindowConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DeltaTimeSessionWindowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A time interval. You can use <code>timeoutInMinutes</code> so that IoT
     * Analytics can batch up late data notifications that have been generated since
     * the last execution. IoT Analytics sends one batch of notifications to Amazon
     * CloudWatch Events at one time.</p> <p>For more information about how to write a
     * timestamp expression, see <a
     * href="https://prestodb.io/docs/0.172/functions/datetime.html">Date and Time
     * Functions and Operators</a>, in the <i>Presto 0.172 Documentation</i>.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>A time interval. You can use <code>timeoutInMinutes</code> so that IoT
     * Analytics can batch up late data notifications that have been generated since
     * the last execution. IoT Analytics sends one batch of notifications to Amazon
     * CloudWatch Events at one time.</p> <p>For more information about how to write a
     * timestamp expression, see <a
     * href="https://prestodb.io/docs/0.172/functions/datetime.html">Date and Time
     * Functions and Operators</a>, in the <i>Presto 0.172 Documentation</i>.</p>
     */
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }

    /**
     * <p>A time interval. You can use <code>timeoutInMinutes</code> so that IoT
     * Analytics can batch up late data notifications that have been generated since
     * the last execution. IoT Analytics sends one batch of notifications to Amazon
     * CloudWatch Events at one time.</p> <p>For more information about how to write a
     * timestamp expression, see <a
     * href="https://prestodb.io/docs/0.172/functions/datetime.html">Date and Time
     * Functions and Operators</a>, in the <i>Presto 0.172 Documentation</i>.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>A time interval. You can use <code>timeoutInMinutes</code> so that IoT
     * Analytics can batch up late data notifications that have been generated since
     * the last execution. IoT Analytics sends one batch of notifications to Amazon
     * CloudWatch Events at one time.</p> <p>For more information about how to write a
     * timestamp expression, see <a
     * href="https://prestodb.io/docs/0.172/functions/datetime.html">Date and Time
     * Functions and Operators</a>, in the <i>Presto 0.172 Documentation</i>.</p>
     */
    inline DeltaTimeSessionWindowConfiguration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

  private:

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
