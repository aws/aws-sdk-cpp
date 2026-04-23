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
#include <aws/shield/model/AutoRenew.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/Limit.h>
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
    Subscription(Aws::Utils::Json::JsonView jsonValue);
    Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of the subscription, in Unix time in seconds. For more
     * information see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. For more
     * information see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. For more
     * information see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. For more
     * information see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the subscription, in Unix time in seconds. For more
     * information see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline Subscription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the subscription, in Unix time in seconds. For more
     * information see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline Subscription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline Subscription& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The date and time your subscription will end.</p>
     */
    inline Subscription& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The length, in seconds, of the AWS Shield Advanced subscription for the
     * account.</p>
     */
    inline long long GetTimeCommitmentInSeconds() const{ return m_timeCommitmentInSeconds; }

    /**
     * <p>The length, in seconds, of the AWS Shield Advanced subscription for the
     * account.</p>
     */
    inline bool TimeCommitmentInSecondsHasBeenSet() const { return m_timeCommitmentInSecondsHasBeenSet; }

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


    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline const AutoRenew& GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline void SetAutoRenew(const AutoRenew& value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline void SetAutoRenew(AutoRenew&& value) { m_autoRenewHasBeenSet = true; m_autoRenew = std::move(value); }

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline Subscription& WithAutoRenew(const AutoRenew& value) { SetAutoRenew(value); return *this;}

    /**
     * <p>If <code>ENABLED</code>, the subscription will be automatically renewed at
     * the end of the existing subscription period.</p> <p>When you initally create a
     * subscription, <code>AutoRenew</code> is set to <code>ENABLED</code>. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline Subscription& WithAutoRenew(AutoRenew&& value) { SetAutoRenew(std::move(value)); return *this;}


    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline const Aws::Vector<Limit>& GetLimits() const{ return m_limits; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline void SetLimits(const Aws::Vector<Limit>& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline void SetLimits(Aws::Vector<Limit>&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& WithLimits(const Aws::Vector<Limit>& value) { SetLimits(value); return *this;}

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& WithLimits(Aws::Vector<Limit>&& value) { SetLimits(std::move(value)); return *this;}

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& AddLimits(const Limit& value) { m_limitsHasBeenSet = true; m_limits.push_back(value); return *this; }

    /**
     * <p>Specifies how many protections of a given type you can create.</p>
     */
    inline Subscription& AddLimits(Limit&& value) { m_limitsHasBeenSet = true; m_limits.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    long long m_timeCommitmentInSeconds;
    bool m_timeCommitmentInSecondsHasBeenSet;

    AutoRenew m_autoRenew;
    bool m_autoRenewHasBeenSet;

    Aws::Vector<Limit> m_limits;
    bool m_limitsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
