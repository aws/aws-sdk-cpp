/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/Input.h>
#include <aws/kinesisanalyticsv2/model/Output.h>
#include <aws/kinesisanalyticsv2/model/ReferenceDataSource.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the inputs, outputs, and reference data sources for a SQL-based
   * Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlApplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class SqlApplicationConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API SqlApplicationConfiguration() = default;
    AWS_KINESISANALYTICSV2_API SqlApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline const Aws::Vector<Input>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Input>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Input>>
    SqlApplicationConfiguration& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Input>
    SqlApplicationConfiguration& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    SqlApplicationConfiguration& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    SqlApplicationConfiguration& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSource>& GetReferenceDataSources() const { return m_referenceDataSources; }
    inline bool ReferenceDataSourcesHasBeenSet() const { return m_referenceDataSourcesHasBeenSet; }
    template<typename ReferenceDataSourcesT = Aws::Vector<ReferenceDataSource>>
    void SetReferenceDataSources(ReferenceDataSourcesT&& value) { m_referenceDataSourcesHasBeenSet = true; m_referenceDataSources = std::forward<ReferenceDataSourcesT>(value); }
    template<typename ReferenceDataSourcesT = Aws::Vector<ReferenceDataSource>>
    SqlApplicationConfiguration& WithReferenceDataSources(ReferenceDataSourcesT&& value) { SetReferenceDataSources(std::forward<ReferenceDataSourcesT>(value)); return *this;}
    template<typename ReferenceDataSourcesT = ReferenceDataSource>
    SqlApplicationConfiguration& AddReferenceDataSources(ReferenceDataSourcesT&& value) { m_referenceDataSourcesHasBeenSet = true; m_referenceDataSources.emplace_back(std::forward<ReferenceDataSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Input> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::Vector<ReferenceDataSource> m_referenceDataSources;
    bool m_referenceDataSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
