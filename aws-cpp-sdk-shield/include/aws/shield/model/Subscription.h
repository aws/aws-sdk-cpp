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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{

  /**
   * <p>Information about the AWS Shield Advanced subscription for an
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Subscription">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API Subscription
  {
  public:
    Subscription();
    Subscription(const Aws::Utils::Json::JsonValue& jsonValue);
    Subscription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The start time of the subscription, in the format "2016-12-16T13:50Z".</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the subscription, in the format "2016-12-16T13:50Z".</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the subscription, in the format "2016-12-16T13:50Z".</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the subscription, in the format "2016-12-16T13:50Z".</p>
     */
    inline Subscription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the subscription, in the format "2016-12-16T13:50Z".</p>
     */
    inline Subscription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>The length, in seconds, of the AWS Shield Advanced subscription for the
     * account.</p>
     */
    inline long long GetTimeCommitmentInSeconds() const{ return m_timeCommitmentInSeconds; }

    /**
     * <p>The length, in seconds, of the AWS Shield Advanced subscription for the
     * account.</p>
     */
    inline void SetTimeCommitmentInSeconds(long long value) { m_timeCommitmentInSecondsHasBeenSet = true; m_timeCommitmentInSeconds = value; }

    /**
     * <p>The length, in seconds, of the AWS Shield Advanced subscription for the
     * account.</p>
     */
    inline Subscription& WithTimeCommitmentInSeconds(long long value) { SetTimeCommitmentInSeconds(value); return *this;}

  private:
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    long long m_timeCommitmentInSeconds;
    bool m_timeCommitmentInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
