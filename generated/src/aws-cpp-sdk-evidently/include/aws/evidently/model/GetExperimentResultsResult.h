/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ExperimentReport.h>
#include <aws/evidently/model/ExperimentResultsData.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class GetExperimentResultsResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResultsResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the experiment doesn't yet have enough events to provide valid results,
     * this field is returned with the message <code>Not enough events to generate
     * results</code>. If there are enough events to provide valid results, this field
     * is not returned.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    GetExperimentResultsResult& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline const Aws::Vector<ExperimentReport>& GetReports() const { return m_reports; }
    template<typename ReportsT = Aws::Vector<ExperimentReport>>
    void SetReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports = std::forward<ReportsT>(value); }
    template<typename ReportsT = Aws::Vector<ExperimentReport>>
    GetExperimentResultsResult& WithReports(ReportsT&& value) { SetReports(std::forward<ReportsT>(value)); return *this;}
    template<typename ReportsT = ExperimentReport>
    GetExperimentResultsResult& AddReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports.emplace_back(std::forward<ReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline const Aws::Vector<ExperimentResultsData>& GetResultsData() const { return m_resultsData; }
    template<typename ResultsDataT = Aws::Vector<ExperimentResultsData>>
    void SetResultsData(ResultsDataT&& value) { m_resultsDataHasBeenSet = true; m_resultsData = std::forward<ResultsDataT>(value); }
    template<typename ResultsDataT = Aws::Vector<ExperimentResultsData>>
    GetExperimentResultsResult& WithResultsData(ResultsDataT&& value) { SetResultsData(std::forward<ResultsDataT>(value)); return *this;}
    template<typename ResultsDataT = ExperimentResultsData>
    GetExperimentResultsResult& AddResultsData(ResultsDataT&& value) { m_resultsDataHasBeenSet = true; m_resultsData.emplace_back(std::forward<ResultsDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::forward<TimestampsT>(value); }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    GetExperimentResultsResult& WithTimestamps(TimestampsT&& value) { SetTimestamps(std::forward<TimestampsT>(value)); return *this;}
    template<typename TimestampsT = Aws::Utils::DateTime>
    GetExperimentResultsResult& AddTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps.emplace_back(std::forward<TimestampsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetExperimentResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Vector<ExperimentReport> m_reports;
    bool m_reportsHasBeenSet = false;

    Aws::Vector<ExperimentResultsData> m_resultsData;
    bool m_resultsDataHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
