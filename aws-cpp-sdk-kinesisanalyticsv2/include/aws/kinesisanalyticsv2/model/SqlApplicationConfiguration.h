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
    AWS_KINESISANALYTICSV2_API SqlApplicationConfiguration();
    AWS_KINESISANALYTICSV2_API SqlApplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlApplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline const Aws::Vector<Input>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline void SetInputs(const Aws::Vector<Input>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline void SetInputs(Aws::Vector<Input>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline SqlApplicationConfiguration& WithInputs(const Aws::Vector<Input>& value) { SetInputs(value); return *this;}

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline SqlApplicationConfiguration& WithInputs(Aws::Vector<Input>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline SqlApplicationConfiguration& AddInputs(const Input& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The array of <a>Input</a> objects describing the input streams used by the
     * application.</p>
     */
    inline SqlApplicationConfiguration& AddInputs(Input&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline SqlApplicationConfiguration& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline SqlApplicationConfiguration& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline SqlApplicationConfiguration& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The array of <a>Output</a> objects describing the destination streams used by
     * the application.</p>
     */
    inline SqlApplicationConfiguration& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline const Aws::Vector<ReferenceDataSource>& GetReferenceDataSources() const{ return m_referenceDataSources; }

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline bool ReferenceDataSourcesHasBeenSet() const { return m_referenceDataSourcesHasBeenSet; }

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline void SetReferenceDataSources(const Aws::Vector<ReferenceDataSource>& value) { m_referenceDataSourcesHasBeenSet = true; m_referenceDataSources = value; }

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline void SetReferenceDataSources(Aws::Vector<ReferenceDataSource>&& value) { m_referenceDataSourcesHasBeenSet = true; m_referenceDataSources = std::move(value); }

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline SqlApplicationConfiguration& WithReferenceDataSources(const Aws::Vector<ReferenceDataSource>& value) { SetReferenceDataSources(value); return *this;}

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline SqlApplicationConfiguration& WithReferenceDataSources(Aws::Vector<ReferenceDataSource>&& value) { SetReferenceDataSources(std::move(value)); return *this;}

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline SqlApplicationConfiguration& AddReferenceDataSources(const ReferenceDataSource& value) { m_referenceDataSourcesHasBeenSet = true; m_referenceDataSources.push_back(value); return *this; }

    /**
     * <p>The array of <a>ReferenceDataSource</a> objects describing the reference data
     * sources used by the application.</p>
     */
    inline SqlApplicationConfiguration& AddReferenceDataSources(ReferenceDataSource&& value) { m_referenceDataSourcesHasBeenSet = true; m_referenceDataSources.push_back(std::move(value)); return *this; }

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
