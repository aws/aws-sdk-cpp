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
   * <p>Configures fixed size chunking strategy</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FixedSizeChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class FixedSizeChunkingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API FixedSizeChunkingConfiguration();
    AWS_BEDROCKAGENT_API FixedSizeChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FixedSizeChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of tokens per chunk.</p>
     */
    inline int GetMaxTokens() const{ return m_maxTokens; }

    /**
     * <p>The maximum number of tokens per chunk.</p>
     */
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }

    /**
     * <p>The maximum number of tokens per chunk.</p>
     */
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }

    /**
     * <p>The maximum number of tokens per chunk.</p>
     */
    inline FixedSizeChunkingConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}


    /**
     * <p>The overlap percentage between adjacent chunks.</p>
     */
    inline int GetOverlapPercentage() const{ return m_overlapPercentage; }

    /**
     * <p>The overlap percentage between adjacent chunks.</p>
     */
    inline bool OverlapPercentageHasBeenSet() const { return m_overlapPercentageHasBeenSet; }

    /**
     * <p>The overlap percentage between adjacent chunks.</p>
     */
    inline void SetOverlapPercentage(int value) { m_overlapPercentageHasBeenSet = true; m_overlapPercentage = value; }

    /**
     * <p>The overlap percentage between adjacent chunks.</p>
     */
    inline FixedSizeChunkingConfiguration& WithOverlapPercentage(int value) { SetOverlapPercentage(value); return *this;}

  private:

    int m_maxTokens;
    bool m_maxTokensHasBeenSet = false;

    int m_overlapPercentage;
    bool m_overlapPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
