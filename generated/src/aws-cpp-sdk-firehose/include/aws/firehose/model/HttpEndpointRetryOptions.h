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
   * <p>Describes the retry behavior in case Kinesis Data Firehose is unable to
   * deliver data to the specified HTTP endpoint destination, or if it doesn't
   * receive a valid acknowledgment of receipt from the specified HTTP endpoint
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointRetryOptions">AWS
   * API Reference</a></p>
   */
  class HttpEndpointRetryOptions
  {
  public:
    AWS_FIREHOSE_API HttpEndpointRetryOptions();
    AWS_FIREHOSE_API HttpEndpointRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to the custom destination
     * via HTTPS endpoint fails. It doesn't include the periods during which Kinesis
     * Data Firehose waits for acknowledgment from the specified destination after each
     * attempt. </p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to the custom destination
     * via HTTPS endpoint fails. It doesn't include the periods during which Kinesis
     * Data Firehose waits for acknowledgment from the specified destination after each
     * attempt. </p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to the custom destination
     * via HTTPS endpoint fails. It doesn't include the periods during which Kinesis
     * Data Firehose waits for acknowledgment from the specified destination after each
     * attempt. </p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to the custom destination
     * via HTTPS endpoint fails. It doesn't include the periods during which Kinesis
     * Data Firehose waits for acknowledgment from the specified destination after each
     * attempt. </p>
     */
    inline HttpEndpointRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
