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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/discovery/model/ExportDataFormat.h>
#include <aws/discovery/model/ExportFilter.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API StartExportTaskRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    StartExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExportTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline const Aws::Vector<ExportDataFormat>& GetExportDataFormat() const{ return m_exportDataFormat; }

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline bool ExportDataFormatHasBeenSet() const { return m_exportDataFormatHasBeenSet; }

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline void SetExportDataFormat(const Aws::Vector<ExportDataFormat>& value) { m_exportDataFormatHasBeenSet = true; m_exportDataFormat = value; }

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline void SetExportDataFormat(Aws::Vector<ExportDataFormat>&& value) { m_exportDataFormatHasBeenSet = true; m_exportDataFormat = std::move(value); }

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline StartExportTaskRequest& WithExportDataFormat(const Aws::Vector<ExportDataFormat>& value) { SetExportDataFormat(value); return *this;}

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline StartExportTaskRequest& WithExportDataFormat(Aws::Vector<ExportDataFormat>&& value) { SetExportDataFormat(std::move(value)); return *this;}

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline StartExportTaskRequest& AddExportDataFormat(const ExportDataFormat& value) { m_exportDataFormatHasBeenSet = true; m_exportDataFormat.push_back(value); return *this; }

    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline StartExportTaskRequest& AddExportDataFormat(ExportDataFormat&& value) { m_exportDataFormatHasBeenSet = true; m_exportDataFormat.push_back(std::move(value)); return *this; }


    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline const Aws::Vector<ExportFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline void SetFilters(const Aws::Vector<ExportFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline void SetFilters(Aws::Vector<ExportFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline StartExportTaskRequest& WithFilters(const Aws::Vector<ExportFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline StartExportTaskRequest& WithFilters(Aws::Vector<ExportFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline StartExportTaskRequest& AddFilters(const ExportFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Agentless Discovery Connector data and summary
     * data from Application Discovery agents. </p>
     */
    inline StartExportTaskRequest& AddFilters(ExportFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline StartExportTaskRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline StartExportTaskRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline StartExportTaskRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline StartExportTaskRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Vector<ExportDataFormat> m_exportDataFormat;
    bool m_exportDataFormatHasBeenSet;

    Aws::Vector<ExportFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
