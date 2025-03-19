/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fis/model/ExperimentReportConfigurationCloudWatchDashboard.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the data sources for the experiment report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReportConfigurationDataSources">AWS
   * API Reference</a></p>
   */
  class ExperimentReportConfigurationDataSources
  {
  public:
    AWS_FIS_API ExperimentReportConfigurationDataSources() = default;
    AWS_FIS_API ExperimentReportConfigurationDataSources(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportConfigurationDataSources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CloudWatch dashboards to include as data sources in the experiment
     * report.</p>
     */
    inline const Aws::Vector<ExperimentReportConfigurationCloudWatchDashboard>& GetCloudWatchDashboards() const { return m_cloudWatchDashboards; }
    inline bool CloudWatchDashboardsHasBeenSet() const { return m_cloudWatchDashboardsHasBeenSet; }
    template<typename CloudWatchDashboardsT = Aws::Vector<ExperimentReportConfigurationCloudWatchDashboard>>
    void SetCloudWatchDashboards(CloudWatchDashboardsT&& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards = std::forward<CloudWatchDashboardsT>(value); }
    template<typename CloudWatchDashboardsT = Aws::Vector<ExperimentReportConfigurationCloudWatchDashboard>>
    ExperimentReportConfigurationDataSources& WithCloudWatchDashboards(CloudWatchDashboardsT&& value) { SetCloudWatchDashboards(std::forward<CloudWatchDashboardsT>(value)); return *this;}
    template<typename CloudWatchDashboardsT = ExperimentReportConfigurationCloudWatchDashboard>
    ExperimentReportConfigurationDataSources& AddCloudWatchDashboards(CloudWatchDashboardsT&& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards.emplace_back(std::forward<CloudWatchDashboardsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ExperimentReportConfigurationCloudWatchDashboard> m_cloudWatchDashboards;
    bool m_cloudWatchDashboardsHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
