/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>A summary of the models used in an Amazon Bedrock model evaluation job. These
   * resources can be models in Amazon Bedrock or models outside of Amazon Bedrock
   * that you use to generate your own inference response data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationModelConfigSummary">AWS
   * API Reference</a></p>
   */
  class EvaluationModelConfigSummary
  {
  public:
    AWS_BEDROCK_API EvaluationModelConfigSummary() = default;
    AWS_BEDROCK_API EvaluationModelConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationModelConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the models used for the evaluation
     * job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBedrockModelIdentifiers() const { return m_bedrockModelIdentifiers; }
    inline bool BedrockModelIdentifiersHasBeenSet() const { return m_bedrockModelIdentifiersHasBeenSet; }
    template<typename BedrockModelIdentifiersT = Aws::Vector<Aws::String>>
    void SetBedrockModelIdentifiers(BedrockModelIdentifiersT&& value) { m_bedrockModelIdentifiersHasBeenSet = true; m_bedrockModelIdentifiers = std::forward<BedrockModelIdentifiersT>(value); }
    template<typename BedrockModelIdentifiersT = Aws::Vector<Aws::String>>
    EvaluationModelConfigSummary& WithBedrockModelIdentifiers(BedrockModelIdentifiersT&& value) { SetBedrockModelIdentifiers(std::forward<BedrockModelIdentifiersT>(value)); return *this;}
    template<typename BedrockModelIdentifiersT = Aws::String>
    EvaluationModelConfigSummary& AddBedrockModelIdentifiers(BedrockModelIdentifiersT&& value) { m_bedrockModelIdentifiersHasBeenSet = true; m_bedrockModelIdentifiers.emplace_back(std::forward<BedrockModelIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A label that identifies the models used for a model evaluation job where you
     * provide your own inference response data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrecomputedInferenceSourceIdentifiers() const { return m_precomputedInferenceSourceIdentifiers; }
    inline bool PrecomputedInferenceSourceIdentifiersHasBeenSet() const { return m_precomputedInferenceSourceIdentifiersHasBeenSet; }
    template<typename PrecomputedInferenceSourceIdentifiersT = Aws::Vector<Aws::String>>
    void SetPrecomputedInferenceSourceIdentifiers(PrecomputedInferenceSourceIdentifiersT&& value) { m_precomputedInferenceSourceIdentifiersHasBeenSet = true; m_precomputedInferenceSourceIdentifiers = std::forward<PrecomputedInferenceSourceIdentifiersT>(value); }
    template<typename PrecomputedInferenceSourceIdentifiersT = Aws::Vector<Aws::String>>
    EvaluationModelConfigSummary& WithPrecomputedInferenceSourceIdentifiers(PrecomputedInferenceSourceIdentifiersT&& value) { SetPrecomputedInferenceSourceIdentifiers(std::forward<PrecomputedInferenceSourceIdentifiersT>(value)); return *this;}
    template<typename PrecomputedInferenceSourceIdentifiersT = Aws::String>
    EvaluationModelConfigSummary& AddPrecomputedInferenceSourceIdentifiers(PrecomputedInferenceSourceIdentifiersT&& value) { m_precomputedInferenceSourceIdentifiersHasBeenSet = true; m_precomputedInferenceSourceIdentifiers.emplace_back(std::forward<PrecomputedInferenceSourceIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_bedrockModelIdentifiers;
    bool m_bedrockModelIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_precomputedInferenceSourceIdentifiers;
    bool m_precomputedInferenceSourceIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
