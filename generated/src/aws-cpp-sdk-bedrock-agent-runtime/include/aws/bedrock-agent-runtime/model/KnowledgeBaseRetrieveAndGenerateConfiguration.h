/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Configurations for retrieval and generation for knowledge base.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseRetrieveAndGenerateConfiguration">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseRetrieveAndGenerateConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieveAndGenerateConfiguration();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieveAndGenerateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseRetrieveAndGenerateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    
    inline KnowledgeBaseRetrieveAndGenerateConfiguration& WithModelArn(const char* value) { SetModelArn(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
