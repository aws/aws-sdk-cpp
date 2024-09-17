/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/HierarchicalChunkingLevelConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Settings for hierarchical document chunking for a data source. Hierarchical
   * chunking splits documents into layers of chunks where the first layer contains
   * large chunks, and the second layer contains smaller chunks derived from the
   * first layer.</p> <p>You configure the number of tokens to overlap, or repeat
   * across adjacent chunks. For example, if you set overlap tokens to 60, the last
   * 60 tokens in the first chunk are also included at the beginning of the second
   * chunk. For each layer, you must also configure the maximum number of tokens in a
   * chunk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/HierarchicalChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class HierarchicalChunkingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API HierarchicalChunkingConfiguration();
    AWS_BEDROCKAGENT_API HierarchicalChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API HierarchicalChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Token settings for each layer.</p>
     */
    inline const Aws::Vector<HierarchicalChunkingLevelConfiguration>& GetLevelConfigurations() const{ return m_levelConfigurations; }
    inline bool LevelConfigurationsHasBeenSet() const { return m_levelConfigurationsHasBeenSet; }
    inline void SetLevelConfigurations(const Aws::Vector<HierarchicalChunkingLevelConfiguration>& value) { m_levelConfigurationsHasBeenSet = true; m_levelConfigurations = value; }
    inline void SetLevelConfigurations(Aws::Vector<HierarchicalChunkingLevelConfiguration>&& value) { m_levelConfigurationsHasBeenSet = true; m_levelConfigurations = std::move(value); }
    inline HierarchicalChunkingConfiguration& WithLevelConfigurations(const Aws::Vector<HierarchicalChunkingLevelConfiguration>& value) { SetLevelConfigurations(value); return *this;}
    inline HierarchicalChunkingConfiguration& WithLevelConfigurations(Aws::Vector<HierarchicalChunkingLevelConfiguration>&& value) { SetLevelConfigurations(std::move(value)); return *this;}
    inline HierarchicalChunkingConfiguration& AddLevelConfigurations(const HierarchicalChunkingLevelConfiguration& value) { m_levelConfigurationsHasBeenSet = true; m_levelConfigurations.push_back(value); return *this; }
    inline HierarchicalChunkingConfiguration& AddLevelConfigurations(HierarchicalChunkingLevelConfiguration&& value) { m_levelConfigurationsHasBeenSet = true; m_levelConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of tokens to repeat across chunks in the same layer.</p>
     */
    inline int GetOverlapTokens() const{ return m_overlapTokens; }
    inline bool OverlapTokensHasBeenSet() const { return m_overlapTokensHasBeenSet; }
    inline void SetOverlapTokens(int value) { m_overlapTokensHasBeenSet = true; m_overlapTokens = value; }
    inline HierarchicalChunkingConfiguration& WithOverlapTokens(int value) { SetOverlapTokens(value); return *this;}
    ///@}
  private:

    Aws::Vector<HierarchicalChunkingLevelConfiguration> m_levelConfigurations;
    bool m_levelConfigurationsHasBeenSet = false;

    int m_overlapTokens;
    bool m_overlapTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
