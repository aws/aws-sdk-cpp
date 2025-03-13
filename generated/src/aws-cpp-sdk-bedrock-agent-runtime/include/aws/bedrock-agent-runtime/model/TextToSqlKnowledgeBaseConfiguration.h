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
   * <p>Contains configurations for a knowledge base to use in
   * transformation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TextToSqlKnowledgeBaseConfiguration">AWS
   * API Reference</a></p>
   */
  class TextToSqlKnowledgeBaseConfiguration
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TextToSqlKnowledgeBaseConfiguration() = default;
    AWS_BEDROCKAGENTRUNTIME_API TextToSqlKnowledgeBaseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TextToSqlKnowledgeBaseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the knowledge base</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    TextToSqlKnowledgeBaseConfiguration& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
