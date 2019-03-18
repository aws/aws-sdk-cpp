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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/EdgeStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/HistogramEntry.h>
#include <aws/xray/model/Alias.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about a connection between two services.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Edge">AWS API
   * Reference</a></p>
   */
  class AWS_XRAY_API Edge
  {
  public:
    Edge();
    Edge(Aws::Utils::Json::JsonView jsonValue);
    Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline int GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>Identifier of the edge. Unique within a service map.</p>
     */
    inline Edge& WithReferenceId(int value) { SetReferenceId(value); return *this;}


    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline Edge& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the first segment on the edge.</p>
     */
    inline Edge& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline Edge& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the last segment on the edge.</p>
     */
    inline Edge& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline const EdgeStatistics& GetSummaryStatistics() const{ return m_summaryStatistics; }

    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline bool SummaryStatisticsHasBeenSet() const { return m_summaryStatisticsHasBeenSet; }

    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline void SetSummaryStatistics(const EdgeStatistics& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = value; }

    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline void SetSummaryStatistics(EdgeStatistics&& value) { m_summaryStatisticsHasBeenSet = true; m_summaryStatistics = std::move(value); }

    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline Edge& WithSummaryStatistics(const EdgeStatistics& value) { SetSummaryStatistics(value); return *this;}

    /**
     * <p>Response statistics for segments on the edge.</p>
     */
    inline Edge& WithSummaryStatistics(EdgeStatistics&& value) { SetSummaryStatistics(std::move(value)); return *this;}


    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline const Aws::Vector<HistogramEntry>& GetResponseTimeHistogram() const{ return m_responseTimeHistogram; }

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline bool ResponseTimeHistogramHasBeenSet() const { return m_responseTimeHistogramHasBeenSet; }

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline void SetResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = value; }

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline void SetResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram = std::move(value); }

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline Edge& WithResponseTimeHistogram(const Aws::Vector<HistogramEntry>& value) { SetResponseTimeHistogram(value); return *this;}

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline Edge& WithResponseTimeHistogram(Aws::Vector<HistogramEntry>&& value) { SetResponseTimeHistogram(std::move(value)); return *this;}

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline Edge& AddResponseTimeHistogram(const HistogramEntry& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(value); return *this; }

    /**
     * <p>A histogram that maps the spread of client response times on an edge.</p>
     */
    inline Edge& AddResponseTimeHistogram(HistogramEntry&& value) { m_responseTimeHistogramHasBeenSet = true; m_responseTimeHistogram.push_back(std::move(value)); return *this; }


    /**
     * <p>Aliases for the edge.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }

    /**
     * <p>Aliases for the edge.</p>
     */
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }

    /**
     * <p>Aliases for the edge.</p>
     */
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliasesHasBeenSet = true; m_aliases = value; }

    /**
     * <p>Aliases for the edge.</p>
     */
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }

    /**
     * <p>Aliases for the edge.</p>
     */
    inline Edge& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}

    /**
     * <p>Aliases for the edge.</p>
     */
    inline Edge& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>Aliases for the edge.</p>
     */
    inline Edge& AddAliases(const Alias& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }

    /**
     * <p>Aliases for the edge.</p>
     */
    inline Edge& AddAliases(Alias&& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(std::move(value)); return *this; }

  private:

    int m_referenceId;
    bool m_referenceIdHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    EdgeStatistics m_summaryStatistics;
    bool m_summaryStatisticsHasBeenSet;

    Aws::Vector<HistogramEntry> m_responseTimeHistogram;
    bool m_responseTimeHistogramHasBeenSet;

    Aws::Vector<Alias> m_aliases;
    bool m_aliasesHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
