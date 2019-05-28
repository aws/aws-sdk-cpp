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
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API GetMinuteUsageResult
  {
  public:
    GetMinuteUsageResult();
    GetMinuteUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMinuteUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Estimated number of minutes remaining for an account, specific to the month
     * being requested.</p>
     */
    inline int GetEstimatedMinutesRemaining() const{ return m_estimatedMinutesRemaining; }

    /**
     * <p>Estimated number of minutes remaining for an account, specific to the month
     * being requested.</p>
     */
    inline void SetEstimatedMinutesRemaining(int value) { m_estimatedMinutesRemaining = value; }

    /**
     * <p>Estimated number of minutes remaining for an account, specific to the month
     * being requested.</p>
     */
    inline GetMinuteUsageResult& WithEstimatedMinutesRemaining(int value) { SetEstimatedMinutesRemaining(value); return *this;}


    /**
     * <p>Returns whether or not an account has signed up for the reserved minutes
     * pricing plan, specific to the month being requested.</p>
     */
    inline bool GetIsReservedMinutesCustomer() const{ return m_isReservedMinutesCustomer; }

    /**
     * <p>Returns whether or not an account has signed up for the reserved minutes
     * pricing plan, specific to the month being requested.</p>
     */
    inline void SetIsReservedMinutesCustomer(bool value) { m_isReservedMinutesCustomer = value; }

    /**
     * <p>Returns whether or not an account has signed up for the reserved minutes
     * pricing plan, specific to the month being requested.</p>
     */
    inline GetMinuteUsageResult& WithIsReservedMinutesCustomer(bool value) { SetIsReservedMinutesCustomer(value); return *this;}


    /**
     * <p>Total number of reserved minutes allocated, specific to the month being
     * requested.</p>
     */
    inline int GetTotalReservedMinuteAllocation() const{ return m_totalReservedMinuteAllocation; }

    /**
     * <p>Total number of reserved minutes allocated, specific to the month being
     * requested.</p>
     */
    inline void SetTotalReservedMinuteAllocation(int value) { m_totalReservedMinuteAllocation = value; }

    /**
     * <p>Total number of reserved minutes allocated, specific to the month being
     * requested.</p>
     */
    inline GetMinuteUsageResult& WithTotalReservedMinuteAllocation(int value) { SetTotalReservedMinuteAllocation(value); return *this;}


    /**
     * <p>Total scheduled minutes for an account, specific to the month being
     * requested.</p>
     */
    inline int GetTotalScheduledMinutes() const{ return m_totalScheduledMinutes; }

    /**
     * <p>Total scheduled minutes for an account, specific to the month being
     * requested.</p>
     */
    inline void SetTotalScheduledMinutes(int value) { m_totalScheduledMinutes = value; }

    /**
     * <p>Total scheduled minutes for an account, specific to the month being
     * requested.</p>
     */
    inline GetMinuteUsageResult& WithTotalScheduledMinutes(int value) { SetTotalScheduledMinutes(value); return *this;}


    /**
     * <p>Upcoming minutes scheduled for an account, specific to the month being
     * requested.</p>
     */
    inline int GetUpcomingMinutesScheduled() const{ return m_upcomingMinutesScheduled; }

    /**
     * <p>Upcoming minutes scheduled for an account, specific to the month being
     * requested.</p>
     */
    inline void SetUpcomingMinutesScheduled(int value) { m_upcomingMinutesScheduled = value; }

    /**
     * <p>Upcoming minutes scheduled for an account, specific to the month being
     * requested.</p>
     */
    inline GetMinuteUsageResult& WithUpcomingMinutesScheduled(int value) { SetUpcomingMinutesScheduled(value); return *this;}

  private:

    int m_estimatedMinutesRemaining;

    bool m_isReservedMinutesCustomer;

    int m_totalReservedMinuteAllocation;

    int m_totalScheduledMinutes;

    int m_upcomingMinutesScheduled;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
