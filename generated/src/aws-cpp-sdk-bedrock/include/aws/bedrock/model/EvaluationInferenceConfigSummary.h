/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/EvaluationModelConfigSummary.h>
#include <aws/bedrock/model/EvaluationRagConfigSummary.h>
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
   * <p>Identifies the models, Knowledge Bases, or other RAG sources evaluated in a
   * model or Knowledge Base evaluation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationInferenceConfigSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationInferenceConfigSummary
  {
  public:
    AWS_BEDROCK_API EvaluationInferenceConfigSummary() = default;
    AWS_BEDROCK_API EvaluationInferenceConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationInferenceConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A summary of the models used in an Amazon Bedrock model evaluation job. These
     * resources can be models in Amazon Bedrock or models outside of Amazon Bedrock
     * that you use to generate your own inference response data.</p>
     */
    inline const EvaluationModelConfigSummary& GetModelConfigSummary() const { return m_modelConfigSummary; }
    inline bool ModelConfigSummaryHasBeenSet() const { return m_modelConfigSummaryHasBeenSet; }
    template<typename ModelConfigSummaryT = EvaluationModelConfigSummary>
    void SetModelConfigSummary(ModelConfigSummaryT&& value) { m_modelConfigSummaryHasBeenSet = true; m_modelConfigSummary = std::forward<ModelConfigSummaryT>(value); }
    template<typename ModelConfigSummaryT = EvaluationModelConfigSummary>
    EvaluationInferenceConfigSummary& WithModelConfigSummary(ModelConfigSummaryT&& value) { SetModelConfigSummary(std::forward<ModelConfigSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the RAG resources used in an Amazon Bedrock Knowledge Base
     * evaluation job. These resources can be Knowledge Bases in Amazon Bedrock or RAG
     * sources outside of Amazon Bedrock that you use to generate your own inference
     * response data.</p>
     */
    inline const EvaluationRagConfigSummary& GetRagConfigSummary() const { return m_ragConfigSummary; }
    inline bool RagConfigSummaryHasBeenSet() const { return m_ragConfigSummaryHasBeenSet; }
    template<typename RagConfigSummaryT = EvaluationRagConfigSummary>
    void SetRagConfigSummary(RagConfigSummaryT&& value) { m_ragConfigSummaryHasBeenSet = true; m_ragConfigSummary = std::forward<RagConfigSummaryT>(value); }
    template<typename RagConfigSummaryT = EvaluationRagConfigSummary>
    EvaluationInferenceConfigSummary& WithRagConfigSummary(RagConfigSummaryT&& value) { SetRagConfigSummary(std::forward<RagConfigSummaryT>(value)); return *this;}
    ///@}
  private:

    EvaluationModelConfigSummary m_modelConfigSummary;
    bool m_modelConfigSummaryHasBeenSet = false;

    EvaluationRagConfigSummary m_ragConfigSummary;
    bool m_ragConfigSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
