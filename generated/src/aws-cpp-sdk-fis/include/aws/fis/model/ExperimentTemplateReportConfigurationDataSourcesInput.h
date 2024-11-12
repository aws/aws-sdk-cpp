/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fis/model/ReportConfigurationCloudWatchDashboardInput.h>
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
   * <p>Specifies the data sources for the experiment report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateReportConfigurationDataSourcesInput">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateReportConfigurationDataSourcesInput
  {
  public:
    AWS_FIS_API ExperimentTemplateReportConfigurationDataSourcesInput();
    AWS_FIS_API ExperimentTemplateReportConfigurationDataSourcesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateReportConfigurationDataSourcesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CloudWatch dashboards to include as data sources in the experiment
     * report.</p>
     */
    inline const Aws::Vector<ReportConfigurationCloudWatchDashboardInput>& GetCloudWatchDashboards() const{ return m_cloudWatchDashboards; }
    inline bool CloudWatchDashboardsHasBeenSet() const { return m_cloudWatchDashboardsHasBeenSet; }
    inline void SetCloudWatchDashboards(const Aws::Vector<ReportConfigurationCloudWatchDashboardInput>& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards = value; }
    inline void SetCloudWatchDashboards(Aws::Vector<ReportConfigurationCloudWatchDashboardInput>&& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards = std::move(value); }
    inline ExperimentTemplateReportConfigurationDataSourcesInput& WithCloudWatchDashboards(const Aws::Vector<ReportConfigurationCloudWatchDashboardInput>& value) { SetCloudWatchDashboards(value); return *this;}
    inline ExperimentTemplateReportConfigurationDataSourcesInput& WithCloudWatchDashboards(Aws::Vector<ReportConfigurationCloudWatchDashboardInput>&& value) { SetCloudWatchDashboards(std::move(value)); return *this;}
    inline ExperimentTemplateReportConfigurationDataSourcesInput& AddCloudWatchDashboards(const ReportConfigurationCloudWatchDashboardInput& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards.push_back(value); return *this; }
    inline ExperimentTemplateReportConfigurationDataSourcesInput& AddCloudWatchDashboards(ReportConfigurationCloudWatchDashboardInput&& value) { m_cloudWatchDashboardsHasBeenSet = true; m_cloudWatchDashboards.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ReportConfigurationCloudWatchDashboardInput> m_cloudWatchDashboards;
    bool m_cloudWatchDashboardsHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
