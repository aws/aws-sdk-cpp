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
   * <p>Configures retry behavior in case Firehose is unable to deliver documents to
   * Splunk, or if it doesn't receive an acknowledgment from Splunk.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SplunkRetryOptions">AWS
   * API Reference</a></p>
   */
  class SplunkRetryOptions
  {
  public:
    AWS_FIREHOSE_API SplunkRetryOptions() = default;
    AWS_FIREHOSE_API SplunkRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SplunkRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total amount of time that Firehose spends on retries. This duration
     * starts after the initial attempt to send data to Splunk fails. It doesn't
     * include the periods during which Firehose waits for acknowledgment from Splunk
     * after each attempt.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline SplunkRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}
  private:

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
