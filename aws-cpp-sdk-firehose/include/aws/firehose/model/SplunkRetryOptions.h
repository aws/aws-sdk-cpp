﻿/**
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
   * <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver
   * documents to Splunk, or if it doesn't receive an acknowledgment from
   * Splunk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SplunkRetryOptions">AWS
   * API Reference</a></p>
   */
  class AWS_FIREHOSE_API SplunkRetryOptions
  {
  public:
    SplunkRetryOptions();
    SplunkRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    SplunkRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to Splunk fails. It
     * doesn't include the periods during which Kinesis Data Firehose waits for
     * acknowledgment from Splunk after each attempt.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to Splunk fails. It
     * doesn't include the periods during which Kinesis Data Firehose waits for
     * acknowledgment from Splunk after each attempt.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to Splunk fails. It
     * doesn't include the periods during which Kinesis Data Firehose waits for
     * acknowledgment from Splunk after each attempt.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The total amount of time that Kinesis Data Firehose spends on retries. This
     * duration starts after the initial attempt to send data to Splunk fails. It
     * doesn't include the periods during which Kinesis Data Firehose waits for
     * acknowledgment from Splunk after each attempt.</p>
     */
    inline SplunkRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
