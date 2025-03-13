/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class GetMinuteUsageResult
  {
  public:
    AWS_GROUNDSTATION_API GetMinuteUsageResult() = default;
    AWS_GROUNDSTATION_API GetMinuteUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetMinuteUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Estimated number of minutes remaining for an account, specific to the month
     * being requested.</p>
     */
    inline int GetEstimatedMinutesRemaining() const { return m_estimatedMinutesRemaining; }
    inline void SetEstimatedMinutesRemaining(int value) { m_estimatedMinutesRemainingHasBeenSet = true; m_estimatedMinutesRemaining = value; }
    inline GetMinuteUsageResult& WithEstimatedMinutesRemaining(int value) { SetEstimatedMinutesRemaining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns whether or not an account has signed up for the reserved minutes
     * pricing plan, specific to the month being requested.</p>
     */
    inline bool GetIsReservedMinutesCustomer() const { return m_isReservedMinutesCustomer; }
    inline void SetIsReservedMinutesCustomer(bool value) { m_isReservedMinutesCustomerHasBeenSet = true; m_isReservedMinutesCustomer = value; }
    inline GetMinuteUsageResult& WithIsReservedMinutesCustomer(bool value) { SetIsReservedMinutesCustomer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of reserved minutes allocated, specific to the month being
     * requested.</p>
     */
    inline int GetTotalReservedMinuteAllocation() const { return m_totalReservedMinuteAllocation; }
    inline void SetTotalReservedMinuteAllocation(int value) { m_totalReservedMinuteAllocationHasBeenSet = true; m_totalReservedMinuteAllocation = value; }
    inline GetMinuteUsageResult& WithTotalReservedMinuteAllocation(int value) { SetTotalReservedMinuteAllocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total scheduled minutes for an account, specific to the month being
     * requested.</p>
     */
    inline int GetTotalScheduledMinutes() const { return m_totalScheduledMinutes; }
    inline void SetTotalScheduledMinutes(int value) { m_totalScheduledMinutesHasBeenSet = true; m_totalScheduledMinutes = value; }
    inline GetMinuteUsageResult& WithTotalScheduledMinutes(int value) { SetTotalScheduledMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Upcoming minutes scheduled for an account, specific to the month being
     * requested.</p>
     */
    inline int GetUpcomingMinutesScheduled() const { return m_upcomingMinutesScheduled; }
    inline void SetUpcomingMinutesScheduled(int value) { m_upcomingMinutesScheduledHasBeenSet = true; m_upcomingMinutesScheduled = value; }
    inline GetMinuteUsageResult& WithUpcomingMinutesScheduled(int value) { SetUpcomingMinutesScheduled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMinuteUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_estimatedMinutesRemaining{0};
    bool m_estimatedMinutesRemainingHasBeenSet = false;

    bool m_isReservedMinutesCustomer{false};
    bool m_isReservedMinutesCustomerHasBeenSet = false;

    int m_totalReservedMinuteAllocation{0};
    bool m_totalReservedMinuteAllocationHasBeenSet = false;

    int m_totalScheduledMinutes{0};
    bool m_totalScheduledMinutesHasBeenSet = false;

    int m_upcomingMinutesScheduled{0};
    bool m_upcomingMinutesScheduledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
