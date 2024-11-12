/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTemplateReportConfigurationOutputs.h>
#include <aws/fis/model/ExperimentTemplateReportConfigurationDataSources.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the experiment report configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/experiment-report-configuration">Experiment
   * report configurations for AWS FIS</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateReportConfiguration">AWS
   * API Reference</a></p>
   */
  class ExperimentTemplateReportConfiguration
  {
  public:
    AWS_FIS_API ExperimentTemplateReportConfiguration();
    AWS_FIS_API ExperimentTemplateReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentTemplateReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the output destinations of the experiment report.</p>
     */
    inline const ExperimentTemplateReportConfigurationOutputs& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const ExperimentTemplateReportConfigurationOutputs& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(ExperimentTemplateReportConfigurationOutputs&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline ExperimentTemplateReportConfiguration& WithOutputs(const ExperimentTemplateReportConfigurationOutputs& value) { SetOutputs(value); return *this;}
    inline ExperimentTemplateReportConfiguration& WithOutputs(ExperimentTemplateReportConfigurationOutputs&& value) { SetOutputs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sources for the experiment report.</p>
     */
    inline const ExperimentTemplateReportConfigurationDataSources& GetDataSources() const{ return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    inline void SetDataSources(const ExperimentTemplateReportConfigurationDataSources& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }
    inline void SetDataSources(ExperimentTemplateReportConfigurationDataSources&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }
    inline ExperimentTemplateReportConfiguration& WithDataSources(const ExperimentTemplateReportConfigurationDataSources& value) { SetDataSources(value); return *this;}
    inline ExperimentTemplateReportConfiguration& WithDataSources(ExperimentTemplateReportConfigurationDataSources&& value) { SetDataSources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration before the experiment start time for the data sources to include
     * in the report.</p>
     */
    inline const Aws::String& GetPreExperimentDuration() const{ return m_preExperimentDuration; }
    inline bool PreExperimentDurationHasBeenSet() const { return m_preExperimentDurationHasBeenSet; }
    inline void SetPreExperimentDuration(const Aws::String& value) { m_preExperimentDurationHasBeenSet = true; m_preExperimentDuration = value; }
    inline void SetPreExperimentDuration(Aws::String&& value) { m_preExperimentDurationHasBeenSet = true; m_preExperimentDuration = std::move(value); }
    inline void SetPreExperimentDuration(const char* value) { m_preExperimentDurationHasBeenSet = true; m_preExperimentDuration.assign(value); }
    inline ExperimentTemplateReportConfiguration& WithPreExperimentDuration(const Aws::String& value) { SetPreExperimentDuration(value); return *this;}
    inline ExperimentTemplateReportConfiguration& WithPreExperimentDuration(Aws::String&& value) { SetPreExperimentDuration(std::move(value)); return *this;}
    inline ExperimentTemplateReportConfiguration& WithPreExperimentDuration(const char* value) { SetPreExperimentDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration after the experiment end time for the data sources to include in
     * the report.</p>
     */
    inline const Aws::String& GetPostExperimentDuration() const{ return m_postExperimentDuration; }
    inline bool PostExperimentDurationHasBeenSet() const { return m_postExperimentDurationHasBeenSet; }
    inline void SetPostExperimentDuration(const Aws::String& value) { m_postExperimentDurationHasBeenSet = true; m_postExperimentDuration = value; }
    inline void SetPostExperimentDuration(Aws::String&& value) { m_postExperimentDurationHasBeenSet = true; m_postExperimentDuration = std::move(value); }
    inline void SetPostExperimentDuration(const char* value) { m_postExperimentDurationHasBeenSet = true; m_postExperimentDuration.assign(value); }
    inline ExperimentTemplateReportConfiguration& WithPostExperimentDuration(const Aws::String& value) { SetPostExperimentDuration(value); return *this;}
    inline ExperimentTemplateReportConfiguration& WithPostExperimentDuration(Aws::String&& value) { SetPostExperimentDuration(std::move(value)); return *this;}
    inline ExperimentTemplateReportConfiguration& WithPostExperimentDuration(const char* value) { SetPostExperimentDuration(value); return *this;}
    ///@}
  private:

    ExperimentTemplateReportConfigurationOutputs m_outputs;
    bool m_outputsHasBeenSet = false;

    ExperimentTemplateReportConfigurationDataSources m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::String m_preExperimentDuration;
    bool m_preExperimentDurationHasBeenSet = false;

    Aws::String m_postExperimentDuration;
    bool m_postExperimentDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
