﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The tokens used in a message API inference call. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/TokenUsage">AWS
   * API Reference</a></p>
   */
  class TokenUsage
  {
  public:
    AWS_BEDROCKRUNTIME_API TokenUsage() = default;
    AWS_BEDROCKRUNTIME_API TokenUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API TokenUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of tokens sent in the request to the model.</p>
     */
    inline int GetInputTokens() const { return m_inputTokens; }
    inline bool InputTokensHasBeenSet() const { return m_inputTokensHasBeenSet; }
    inline void SetInputTokens(int value) { m_inputTokensHasBeenSet = true; m_inputTokens = value; }
    inline TokenUsage& WithInputTokens(int value) { SetInputTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tokens that the model generated for the request.</p>
     */
    inline int GetOutputTokens() const { return m_outputTokens; }
    inline bool OutputTokensHasBeenSet() const { return m_outputTokensHasBeenSet; }
    inline void SetOutputTokens(int value) { m_outputTokensHasBeenSet = true; m_outputTokens = value; }
    inline TokenUsage& WithOutputTokens(int value) { SetOutputTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total of input tokens and tokens generated by the model.</p>
     */
    inline int GetTotalTokens() const { return m_totalTokens; }
    inline bool TotalTokensHasBeenSet() const { return m_totalTokensHasBeenSet; }
    inline void SetTotalTokens(int value) { m_totalTokensHasBeenSet = true; m_totalTokens = value; }
    inline TokenUsage& WithTotalTokens(int value) { SetTotalTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input tokens read from the cache for the request.</p>
     */
    inline int GetCacheReadInputTokens() const { return m_cacheReadInputTokens; }
    inline bool CacheReadInputTokensHasBeenSet() const { return m_cacheReadInputTokensHasBeenSet; }
    inline void SetCacheReadInputTokens(int value) { m_cacheReadInputTokensHasBeenSet = true; m_cacheReadInputTokens = value; }
    inline TokenUsage& WithCacheReadInputTokens(int value) { SetCacheReadInputTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input tokens written to the cache for the request.</p>
     */
    inline int GetCacheWriteInputTokens() const { return m_cacheWriteInputTokens; }
    inline bool CacheWriteInputTokensHasBeenSet() const { return m_cacheWriteInputTokensHasBeenSet; }
    inline void SetCacheWriteInputTokens(int value) { m_cacheWriteInputTokensHasBeenSet = true; m_cacheWriteInputTokens = value; }
    inline TokenUsage& WithCacheWriteInputTokens(int value) { SetCacheWriteInputTokens(value); return *this;}
    ///@}
  private:

    int m_inputTokens{0};
    bool m_inputTokensHasBeenSet = false;

    int m_outputTokens{0};
    bool m_outputTokensHasBeenSet = false;

    int m_totalTokens{0};
    bool m_totalTokensHasBeenSet = false;

    int m_cacheReadInputTokens{0};
    bool m_cacheReadInputTokensHasBeenSet = false;

    int m_cacheWriteInputTokens{0};
    bool m_cacheWriteInputTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
