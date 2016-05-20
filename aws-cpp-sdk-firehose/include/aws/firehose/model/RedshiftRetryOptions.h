/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Configures retry behavior in the event that Firehose is unable to deliver
   * documents to Amazon Redshift.</p>
   */
  class AWS_FIREHOSE_API RedshiftRetryOptions
  {
  public:
    RedshiftRetryOptions();
    RedshiftRetryOptions(const Aws::Utils::Json::JsonValue& jsonValue);
    RedshiftRetryOptions& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The length of time during which Firehose retries delivery after a failure,
     * starting from the initial request and including the first attempt. The default
     * value is 3600 seconds (60 minutes). Firehose does not retry if the value of
     * <code>DurationInSeconds</code> is 0 (zero) or if the first delivery attempt
     * takes longer than the current value.</p>
     */
    inline long GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The length of time during which Firehose retries delivery after a failure,
     * starting from the initial request and including the first attempt. The default
     * value is 3600 seconds (60 minutes). Firehose does not retry if the value of
     * <code>DurationInSeconds</code> is 0 (zero) or if the first delivery attempt
     * takes longer than the current value.</p>
     */
    inline void SetDurationInSeconds(long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The length of time during which Firehose retries delivery after a failure,
     * starting from the initial request and including the first attempt. The default
     * value is 3600 seconds (60 minutes). Firehose does not retry if the value of
     * <code>DurationInSeconds</code> is 0 (zero) or if the first delivery attempt
     * takes longer than the current value.</p>
     */
    inline RedshiftRetryOptions& WithDurationInSeconds(long value) { SetDurationInSeconds(value); return *this;}

  private:
    long m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
