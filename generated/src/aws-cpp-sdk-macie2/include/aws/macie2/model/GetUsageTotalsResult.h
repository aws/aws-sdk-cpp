/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/UsageTotal.h>
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
namespace Macie2
{
namespace Model
{
  class GetUsageTotalsResult
  {
  public:
    AWS_MACIE2_API GetUsageTotalsResult() = default;
    AWS_MACIE2_API GetUsageTotalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetUsageTotalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The inclusive time period that the usage data applies to. Possible values
     * are: MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS,
     * for the preceding 30 days.</p>
     */
    inline TimeRange GetTimeRange() const { return m_timeRange; }
    inline void SetTimeRange(TimeRange value) { m_timeRangeHasBeenSet = true; m_timeRange = value; }
    inline GetUsageTotalsResult& WithTimeRange(TimeRange value) { SetTimeRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for a specific usage metric.</p>
     */
    inline const Aws::Vector<UsageTotal>& GetUsageTotals() const { return m_usageTotals; }
    template<typename UsageTotalsT = Aws::Vector<UsageTotal>>
    void SetUsageTotals(UsageTotalsT&& value) { m_usageTotalsHasBeenSet = true; m_usageTotals = std::forward<UsageTotalsT>(value); }
    template<typename UsageTotalsT = Aws::Vector<UsageTotal>>
    GetUsageTotalsResult& WithUsageTotals(UsageTotalsT&& value) { SetUsageTotals(std::forward<UsageTotalsT>(value)); return *this;}
    template<typename UsageTotalsT = UsageTotal>
    GetUsageTotalsResult& AddUsageTotals(UsageTotalsT&& value) { m_usageTotalsHasBeenSet = true; m_usageTotals.emplace_back(std::forward<UsageTotalsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUsageTotalsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TimeRange m_timeRange{TimeRange::NOT_SET};
    bool m_timeRangeHasBeenSet = false;

    Aws::Vector<UsageTotal> m_usageTotals;
    bool m_usageTotalsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
