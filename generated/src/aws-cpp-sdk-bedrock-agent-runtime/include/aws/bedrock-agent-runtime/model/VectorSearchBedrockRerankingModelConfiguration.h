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
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingModelConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API VectorSearchBedrockRerankingModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JSON object whose keys are request fields for the model and whose values
     * are values for those fields.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetAdditionalModelRequestFields() const{ return m_additionalModelRequestFields; }
    inline bool AdditionalModelRequestFieldsHasBeenSet() const { return m_additionalModelRequestFieldsHasBeenSet; }
    inline void SetAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = value; }
    inline void SetAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields = std::move(value); }
    inline VectorSearchBedrockRerankingModelConfiguration& WithAdditionalModelRequestFields(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetAdditionalModelRequestFields(value); return *this;}
    inline VectorSearchBedrockRerankingModelConfiguration& WithAdditionalModelRequestFields(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetAdditionalModelRequestFields(std::move(value)); return *this;}
    inline VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
    inline VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), value); return *this; }
    inline VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(const Aws::String& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(Aws::String&& key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(std::move(key), std::move(value)); return *this; }
    inline VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(const char* key, Aws::Utils::Document&& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, std::move(value)); return *this; }
    inline VectorSearchBedrockRerankingModelConfiguration& AddAdditionalModelRequestFields(const char* key, const Aws::Utils::Document& value) { m_additionalModelRequestFieldsHasBeenSet = true; m_additionalModelRequestFields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the reranker model to use.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }
    inline VectorSearchBedrockRerankingModelConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}
    inline VectorSearchBedrockRerankingModelConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}
    inline VectorSearchBedrockRerankingModelConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}
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
