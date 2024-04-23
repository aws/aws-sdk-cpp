/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluationDatasetMetricConfig.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Use to specify a automatic model evaluation job. The
   * <code>EvaluationDatasetMetricConfig</code> object is used to specify the prompt
   * datasets, task type, and metric names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedEvaluationConfig">AWS
   * API Reference</a></p>
   */
  class AutomatedEvaluationConfig
  {
  public:
    AWS_BEDROCK_API AutomatedEvaluationConfig();
    AWS_BEDROCK_API AutomatedEvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedEvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline const Aws::Vector<EvaluationDatasetMetricConfig>& GetDatasetMetricConfigs() const{ return m_datasetMetricConfigs; }

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline bool DatasetMetricConfigsHasBeenSet() const { return m_datasetMetricConfigsHasBeenSet; }

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline void SetDatasetMetricConfigs(const Aws::Vector<EvaluationDatasetMetricConfig>& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs = value; }

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline void SetDatasetMetricConfigs(Aws::Vector<EvaluationDatasetMetricConfig>&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs = std::move(value); }

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline AutomatedEvaluationConfig& WithDatasetMetricConfigs(const Aws::Vector<EvaluationDatasetMetricConfig>& value) { SetDatasetMetricConfigs(value); return *this;}

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline AutomatedEvaluationConfig& WithDatasetMetricConfigs(Aws::Vector<EvaluationDatasetMetricConfig>&& value) { SetDatasetMetricConfigs(std::move(value)); return *this;}

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline AutomatedEvaluationConfig& AddDatasetMetricConfigs(const EvaluationDatasetMetricConfig& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs.push_back(value); return *this; }

    /**
     * <p>Specifies the required elements for an automatic model evaluation job.</p>
     */
    inline AutomatedEvaluationConfig& AddDatasetMetricConfigs(EvaluationDatasetMetricConfig&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EvaluationDatasetMetricConfig> m_datasetMetricConfigs;
    bool m_datasetMetricConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
