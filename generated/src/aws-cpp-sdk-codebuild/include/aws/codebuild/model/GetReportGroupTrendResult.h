/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ReportGroupTrendStats.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportWithRawData.h>
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
namespace CodeBuild
{
namespace Model
{
  class GetReportGroupTrendResult
  {
  public:
    AWS_CODEBUILD_API GetReportGroupTrendResult() = default;
    AWS_CODEBUILD_API GetReportGroupTrendResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API GetReportGroupTrendResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the accumulated trend data.</p>
     */
    inline const ReportGroupTrendStats& GetStats() const { return m_stats; }
    template<typename StatsT = ReportGroupTrendStats>
    void SetStats(StatsT&& value) { m_statsHasBeenSet = true; m_stats = std::forward<StatsT>(value); }
    template<typename StatsT = ReportGroupTrendStats>
    GetReportGroupTrendResult& WithStats(StatsT&& value) { SetStats(std::forward<StatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the raw data for each report.</p>
     */
    inline const Aws::Vector<ReportWithRawData>& GetRawData() const { return m_rawData; }
    template<typename RawDataT = Aws::Vector<ReportWithRawData>>
    void SetRawData(RawDataT&& value) { m_rawDataHasBeenSet = true; m_rawData = std::forward<RawDataT>(value); }
    template<typename RawDataT = Aws::Vector<ReportWithRawData>>
    GetReportGroupTrendResult& WithRawData(RawDataT&& value) { SetRawData(std::forward<RawDataT>(value)); return *this;}
    template<typename RawDataT = ReportWithRawData>
    GetReportGroupTrendResult& AddRawData(RawDataT&& value) { m_rawDataHasBeenSet = true; m_rawData.emplace_back(std::forward<RawDataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReportGroupTrendResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReportGroupTrendStats m_stats;
    bool m_statsHasBeenSet = false;

    Aws::Vector<ReportWithRawData> m_rawData;
    bool m_rawDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
