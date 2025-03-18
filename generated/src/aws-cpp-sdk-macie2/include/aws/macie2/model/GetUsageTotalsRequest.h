/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class GetUsageTotalsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API GetUsageTotalsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageTotals"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The inclusive time period to retrieve the data for. Valid values are:
     * MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS, for
     * the preceding 30 days. If you don't specify a value for this parameter, Amazon
     * Macie provides aggregated usage data for the preceding 30 days.</p>
     */
    inline const Aws::String& GetTimeRange() const { return m_timeRange; }
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
    template<typename TimeRangeT = Aws::String>
    void SetTimeRange(TimeRangeT&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::forward<TimeRangeT>(value); }
    template<typename TimeRangeT = Aws::String>
    GetUsageTotalsRequest& WithTimeRange(TimeRangeT&& value) { SetTimeRange(std::forward<TimeRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timeRange;
    bool m_timeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
