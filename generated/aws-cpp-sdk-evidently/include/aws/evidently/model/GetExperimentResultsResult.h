﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
  class AWS_CLOUDWATCHEVIDENTLY_API GetExperimentResultsResult
  {
  public:
    GetExperimentResultsResult();
    GetExperimentResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetExperimentResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline const Aws::Vector<ExperimentReport>& GetReports() const{ return m_reports; }

    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline void SetReports(const Aws::Vector<ExperimentReport>& value) { m_reports = value; }

    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline void SetReports(Aws::Vector<ExperimentReport>&& value) { m_reports = std::move(value); }

    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline GetExperimentResultsResult& WithReports(const Aws::Vector<ExperimentReport>& value) { SetReports(value); return *this;}

    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline GetExperimentResultsResult& WithReports(Aws::Vector<ExperimentReport>&& value) { SetReports(std::move(value)); return *this;}

    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline GetExperimentResultsResult& AddReports(const ExperimentReport& value) { m_reports.push_back(value); return *this; }

    /**
     * <p>An array of structures that include the reports that you requested.</p>
     */
    inline GetExperimentResultsResult& AddReports(ExperimentReport&& value) { m_reports.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline const Aws::Vector<ExperimentResultsData>& GetResultsData() const{ return m_resultsData; }

    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline void SetResultsData(const Aws::Vector<ExperimentResultsData>& value) { m_resultsData = value; }

    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline void SetResultsData(Aws::Vector<ExperimentResultsData>&& value) { m_resultsData = std::move(value); }

    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline GetExperimentResultsResult& WithResultsData(const Aws::Vector<ExperimentResultsData>& value) { SetResultsData(value); return *this;}

    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline GetExperimentResultsResult& WithResultsData(Aws::Vector<ExperimentResultsData>&& value) { SetResultsData(std::move(value)); return *this;}

    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline GetExperimentResultsResult& AddResultsData(const ExperimentResultsData& value) { m_resultsData.push_back(value); return *this; }

    /**
     * <p>An array of structures that include experiment results including metric names
     * and values. </p>
     */
    inline GetExperimentResultsResult& AddResultsData(ExperimentResultsData&& value) { m_resultsData.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestamps = value; }

    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestamps = std::move(value); }

    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline GetExperimentResultsResult& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline GetExperimentResultsResult& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline GetExperimentResultsResult& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestamps.push_back(value); return *this; }

    /**
     * <p>The timestamps of each result returned.</p>
     */
    inline GetExperimentResultsResult& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestamps.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ExperimentReport> m_reports;

    Aws::Vector<ExperimentResultsData> m_resultsData;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
