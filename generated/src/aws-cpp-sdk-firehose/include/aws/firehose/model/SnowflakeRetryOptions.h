/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>

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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Specify how long Firehose retries sending data to the New Relic HTTP
   * endpoint. After sending data, Firehose first waits for an acknowledgment from
   * the HTTP endpoint. If an error occurs or the acknowledgment doesn’t arrive
   * within the acknowledgment timeout period, Firehose starts the retry duration
   * counter. It keeps retrying until the retry duration expires. After that,
   * Firehose considers it a data delivery failure and backs up the data to your
   * Amazon S3 bucket. Every time that Firehose sends data to the HTTP endpoint
   * (either the initial attempt or a retry), it restarts the acknowledgement timeout
   * counter and waits for an acknowledgement from the HTTP endpoint. Even if the
   * retry duration expires, Firehose still waits for the acknowledgment until it
   * receives it or the acknowledgement timeout period is reached. If the
   * acknowledgment times out, Firehose determines whether there's time left in the
   * retry counter. If there is time left, it retries again and repeats the logic
   * until it receives an acknowledgment or determines that the retry time has
   * expired. If you don't want Firehose to retry sending data, set this value to
   * 0.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeRetryOptions">AWS
   * API Reference</a></p>
   */
  class SnowflakeRetryOptions
  {
  public:
    AWS_FIREHOSE_API SnowflakeRetryOptions();
    AWS_FIREHOSE_API SnowflakeRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>the time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>the time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>the time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>the time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline SnowflakeRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
