/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentReportConfigurationOutputs.h>
#include <aws/fis/model/ExperimentReportConfigurationDataSources.h>
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
   * <p>Describes the report configuration for the experiment. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/experiment-report-configuration">Experiment
   * report configurations for AWS FIS</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReportConfiguration">AWS
   * API Reference</a></p>
   */
  class ExperimentReportConfiguration
  {
  public:
    AWS_FIS_API ExperimentReportConfiguration() = default;
    AWS_FIS_API ExperimentReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output destinations of the experiment report.</p>
     */
    inline const ExperimentReportConfigurationOutputs& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = ExperimentReportConfigurationOutputs>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = ExperimentReportConfigurationOutputs>
    ExperimentReportConfiguration& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sources for the experiment report.</p>
     */
    inline const ExperimentReportConfigurationDataSources& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = ExperimentReportConfigurationDataSources>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = ExperimentReportConfigurationDataSources>
    ExperimentReportConfiguration& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration before the experiment start time for the data sources to include
     * in the report.</p>
     */
    inline const Aws::String& GetPreExperimentDuration() const { return m_preExperimentDuration; }
    inline bool PreExperimentDurationHasBeenSet() const { return m_preExperimentDurationHasBeenSet; }
    template<typename PreExperimentDurationT = Aws::String>
    void SetPreExperimentDuration(PreExperimentDurationT&& value) { m_preExperimentDurationHasBeenSet = true; m_preExperimentDuration = std::forward<PreExperimentDurationT>(value); }
    template<typename PreExperimentDurationT = Aws::String>
    ExperimentReportConfiguration& WithPreExperimentDuration(PreExperimentDurationT&& value) { SetPreExperimentDuration(std::forward<PreExperimentDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration after the experiment end time for the data sources to include in
     * the report.</p>
     */
    inline const Aws::String& GetPostExperimentDuration() const { return m_postExperimentDuration; }
    inline bool PostExperimentDurationHasBeenSet() const { return m_postExperimentDurationHasBeenSet; }
    template<typename PostExperimentDurationT = Aws::String>
    void SetPostExperimentDuration(PostExperimentDurationT&& value) { m_postExperimentDurationHasBeenSet = true; m_postExperimentDuration = std::forward<PostExperimentDurationT>(value); }
    template<typename PostExperimentDurationT = Aws::String>
    ExperimentReportConfiguration& WithPostExperimentDuration(PostExperimentDurationT&& value) { SetPostExperimentDuration(std::forward<PostExperimentDurationT>(value)); return *this;}
    ///@}
  private:

    ExperimentReportConfigurationOutputs m_outputs;
    bool m_outputsHasBeenSet = false;

    ExperimentReportConfigurationDataSources m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::String m_preExperimentDuration;
    bool m_preExperimentDurationHasBeenSet = false;

    Aws::String m_postExperimentDuration;
    bool m_postExperimentDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
