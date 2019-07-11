/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>

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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The retry strategy to use for failed jobs if the target is an AWS Batch job.
   * If you specify a retry strategy here, it overrides the retry strategy defined in
   * the job definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/BatchRetryStrategy">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API BatchRetryStrategy
  {
  public:
    BatchRetryStrategy();
    BatchRetryStrategy(Aws::Utils::Json::JsonView jsonValue);
    BatchRetryStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline int GetAttempts() const{ return m_attempts; }

    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline bool AttemptsHasBeenSet() const { return m_attemptsHasBeenSet; }

    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline void SetAttempts(int value) { m_attemptsHasBeenSet = true; m_attempts = value; }

    /**
     * <p>The number of times to attempt to retry, if the job fails. Valid values are
     * 1–10.</p>
     */
    inline BatchRetryStrategy& WithAttempts(int value) { SetAttempts(value); return *this;}

  private:

    int m_attempts;
    bool m_attemptsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
