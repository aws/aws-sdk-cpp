/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/discovery/model/ExportPreferences.h>
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
  class StartExportTaskRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartExportTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExportTask"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The file format for the returned export data. Default value is
     * <code>CSV</code>. <b>Note:</b> <i>The</i> <code>GRAPHML</code> <i>option has
     * been deprecated.</i> </p>
     */
    inline const Aws::Vector<ExportDataFormat>& GetExportDataFormat() const { return m_exportDataFormat; }
    inline bool ExportDataFormatHasBeenSet() const { return m_exportDataFormatHasBeenSet; }
    template<typename ExportDataFormatT = Aws::Vector<ExportDataFormat>>
    void SetExportDataFormat(ExportDataFormatT&& value) { m_exportDataFormatHasBeenSet = true; m_exportDataFormat = std::forward<ExportDataFormatT>(value); }
    template<typename ExportDataFormatT = Aws::Vector<ExportDataFormat>>
    StartExportTaskRequest& WithExportDataFormat(ExportDataFormatT&& value) { SetExportDataFormat(std::forward<ExportDataFormatT>(value)); return *this;}
    inline StartExportTaskRequest& AddExportDataFormat(ExportDataFormat value) { m_exportDataFormatHasBeenSet = true; m_exportDataFormat.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a filter is present, it selects the single <code>agentId</code> of the
     * Application Discovery Agent for which data is exported. The <code>agentId</code>
     * can be found in the results of the <code>DescribeAgents</code> API or CLI. If no
     * filter is present, <code>startTime</code> and <code>endTime</code> are ignored
     * and exported data includes both Amazon Web Services Application Discovery
     * Service Agentless Collector collectors data and summary data from Application
     * Discovery Agent agents. </p>
     */
    inline const Aws::Vector<ExportFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<ExportFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<ExportFilter>>
    StartExportTaskRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = ExportFilter>
    StartExportTaskRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, data is exported
     * starting from the first data collected by the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartExportTaskRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp for exported data from the single Application Discovery
     * Agent selected in the filters. If no value is specified, exported data includes
     * the most recent data collected by the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    StartExportTaskRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the type of data that needs to be exported. Only one <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/APIReference/API_ExportPreferences.html">ExportPreferences</a>
     * can be enabled at any time. </p>
     */
    inline const ExportPreferences& GetPreferences() const { return m_preferences; }
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }
    template<typename PreferencesT = ExportPreferences>
    void SetPreferences(PreferencesT&& value) { m_preferencesHasBeenSet = true; m_preferences = std::forward<PreferencesT>(value); }
    template<typename PreferencesT = ExportPreferences>
    StartExportTaskRequest& WithPreferences(PreferencesT&& value) { SetPreferences(std::forward<PreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportDataFormat> m_exportDataFormat;
    bool m_exportDataFormatHasBeenSet = false;

    Aws::Vector<ExportFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ExportPreferences m_preferences;
    bool m_preferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
