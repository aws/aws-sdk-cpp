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
   * <p>Input to lambda used in action group</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/KnowledgeBaseLookupInput">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseLookupInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupInput();
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API KnowledgeBaseLookupInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetText() const{ return m_text; }

    
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    
    inline KnowledgeBaseLookupInput& WithText(const Aws::String& value) { SetText(value); return *this;}

    
    inline KnowledgeBaseLookupInput& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    
    inline KnowledgeBaseLookupInput& WithText(const char* value) { SetText(value); return *this;}


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    
    inline KnowledgeBaseLookupInput& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline KnowledgeBaseLookupInput& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline KnowledgeBaseLookupInput& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
