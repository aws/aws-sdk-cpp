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
   * <p>Settings for semantic document chunking for a data source. Semantic chunking
   * splits a document into into smaller documents based on groups of similar content
   * derived from the text with natural language processing.</p> <p>With semantic
   * chunking, each sentence is compared to the next to determine how similar they
   * are. You specify a threshold in the form of a percentile, where adjacent
   * sentences that are less similar than that percentage of sentence pairs are
   * divided into separate chunks. For example, if you set the threshold to 90, then
   * the 10 percent of sentence pairs that are least similar are split. So if you
   * have 101 sentences, 100 sentence pairs are compared, and the 10 with the least
   * similarity are split, creating 11 chunks. These chunks are further split if they
   * exceed the max token size.</p> <p>You must also specify a buffer size, which
   * determines whether sentences are compared in isolation, or within a moving
   * context window that includes the previous and following sentence. For example,
   * if you set the buffer size to <code>1</code>, the embedding for sentence 10 is
   * derived from sentences 9, 10, and 11 combined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SemanticChunkingConfiguration">AWS
   * API Reference</a></p>
   */
  class SemanticChunkingConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SemanticChunkingConfiguration() = default;
    AWS_BEDROCKAGENT_API SemanticChunkingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SemanticChunkingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of tokens that a chunk can contain.</p>
     */
    inline int GetMaxTokens() const { return m_maxTokens; }
    inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
    inline void SetMaxTokens(int value) { m_maxTokensHasBeenSet = true; m_maxTokens = value; }
    inline SemanticChunkingConfiguration& WithMaxTokens(int value) { SetMaxTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffer size.</p>
     */
    inline int GetBufferSize() const { return m_bufferSize; }
    inline bool BufferSizeHasBeenSet() const { return m_bufferSizeHasBeenSet; }
    inline void SetBufferSize(int value) { m_bufferSizeHasBeenSet = true; m_bufferSize = value; }
    inline SemanticChunkingConfiguration& WithBufferSize(int value) { SetBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dissimilarity threshold for splitting chunks.</p>
     */
    inline int GetBreakpointPercentileThreshold() const { return m_breakpointPercentileThreshold; }
    inline bool BreakpointPercentileThresholdHasBeenSet() const { return m_breakpointPercentileThresholdHasBeenSet; }
    inline void SetBreakpointPercentileThreshold(int value) { m_breakpointPercentileThresholdHasBeenSet = true; m_breakpointPercentileThreshold = value; }
    inline SemanticChunkingConfiguration& WithBreakpointPercentileThreshold(int value) { SetBreakpointPercentileThreshold(value); return *this;}
    ///@}
  private:

    int m_maxTokens{0};
    bool m_maxTokensHasBeenSet = false;

    int m_bufferSize{0};
    bool m_bufferSizeHasBeenSet = false;

    int m_breakpointPercentileThreshold{0};
    bool m_breakpointPercentileThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
