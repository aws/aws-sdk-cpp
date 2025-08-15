/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/CachePointBlock.h>
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
   * <p>Contains the content for the message you pass to, or receive from a model.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
   * a prompt using Prompt management</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ContentBlock">AWS
   * API Reference</a></p>
   */
  class ContentBlock
  {
  public:
    AWS_BEDROCKAGENT_API ContentBlock() = default;
    AWS_BEDROCKAGENT_API ContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text in the message.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    ContentBlock& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates a cache checkpoint within a message.</p>
     */
    inline const CachePointBlock& GetCachePoint() const { return m_cachePoint; }
    inline bool CachePointHasBeenSet() const { return m_cachePointHasBeenSet; }
    template<typename CachePointT = CachePointBlock>
    void SetCachePoint(CachePointT&& value) { m_cachePointHasBeenSet = true; m_cachePoint = std::forward<CachePointT>(value); }
    template<typename CachePointT = CachePointBlock>
    ContentBlock& WithCachePoint(CachePointT&& value) { SetCachePoint(std::forward<CachePointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    CachePointBlock m_cachePoint;
    bool m_cachePointHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
