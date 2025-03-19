/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class BatchGetServiceLevelObjectiveBudgetReportRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API BatchGetServiceLevelObjectiveBudgetReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetServiceLevelObjectiveBudgetReport"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The date and time that you want the report to be for. It is expressed as the
     * number of milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    BatchGetServiceLevelObjectiveBudgetReportRequest& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the IDs of the service level objectives that you want to
     * include in the report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSloIds() const { return m_sloIds; }
    inline bool SloIdsHasBeenSet() const { return m_sloIdsHasBeenSet; }
    template<typename SloIdsT = Aws::Vector<Aws::String>>
    void SetSloIds(SloIdsT&& value) { m_sloIdsHasBeenSet = true; m_sloIds = std::forward<SloIdsT>(value); }
    template<typename SloIdsT = Aws::Vector<Aws::String>>
    BatchGetServiceLevelObjectiveBudgetReportRequest& WithSloIds(SloIdsT&& value) { SetSloIds(std::forward<SloIdsT>(value)); return *this;}
    template<typename SloIdsT = Aws::String>
    BatchGetServiceLevelObjectiveBudgetReportRequest& AddSloIds(SloIdsT&& value) { m_sloIdsHasBeenSet = true; m_sloIds.emplace_back(std::forward<SloIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::Vector<Aws::String> m_sloIds;
    bool m_sloIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
