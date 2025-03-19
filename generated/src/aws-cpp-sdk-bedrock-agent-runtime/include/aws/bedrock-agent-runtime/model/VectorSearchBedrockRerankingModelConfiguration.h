/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains configurations for an Amazon Bedrock reranker model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/VectorSearchBedrockRerankingModelConfiguration">AWS
   * API Reference</a></p>
   */
  class VectorSearchBedrockRerankingModelConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingModelConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JSON object whose keys are request fields for the model and whose values
     * are values for those fields.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const { return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    template<typename AdditionalModelRequestFieldsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    void SetAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::forward<AdditionalModelRequestFieldsT>(value); }
    template<typename AdditionalModelRequestFieldsT = Aws::Map<Aws::String, Aws::Utils::Document>>
    VectorSearchBedrockRerankingModelConfiguration& WithAdditionalModelRequestFields(AdditionalModelRequestFieldsT&& value) { SetAdditionalModelRequestFields(std::forward<AdditionalModelRequestFieldsT>(value)); return *this;}
    template<typename AdditionalModelRequestFieldsKeyT = Aws::String, typename AdditionalModelRequestFieldsValueT = Aws::Utils::Document>
    VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(AdditionalModelRequestFieldsKeyT&& key, AdditionalModelRequestFieldsValueT&& value) {
      m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::forward<AdditionalModelRequestFieldsKeyT>(key), std::forward<AdditionalModelRequestFieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ARN of the reranker model to use.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    VectorSearchBedrockRerankingModelConfiguration& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Utils::Document> m_additionalModelRequestFields;
    bool m_additionalModelRequestFieldsHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
