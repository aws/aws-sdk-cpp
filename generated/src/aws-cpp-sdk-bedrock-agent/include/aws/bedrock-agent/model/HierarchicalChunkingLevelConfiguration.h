/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Token settings for a layer in a hierarchical chunking
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/HierarchicalChunkingLevelConfiguration">AWS
   * API Reference</a></p>
   */
  class HierarchicalChunkingLevelConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API HierarchicalChunkingLevelConfiguration() = default;
    AWS_BEDROCKAGENT_API HierarchicalChunkingLevelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API HierarchicalChunkingLevelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of tokens that a chunk can contain in this layer.</p>
     */
    inline int GetMaxTokens() const { return m_maxTokens; }
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }
    inline HierarchicalChunkingLevelConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}
    ///@}
  private:

    int m_maxTokens{0};
    bool m_maxTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
