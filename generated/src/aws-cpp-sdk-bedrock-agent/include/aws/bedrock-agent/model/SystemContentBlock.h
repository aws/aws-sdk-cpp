/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CachePointBlock.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains a system prompt to provide context to the model or to describe how
   * it should behave. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
   * a prompt using Prompt management</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SystemContentBlock">AWS
   * API Reference</a></p>
   */
  class SystemContentBlock
  {
  public:
    AWS_BEDROCKAGENT_API SystemContentBlock();
    AWS_BEDROCKAGENT_API SystemContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SystemContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates a cache checkpoint within a tool designation</p>
     */
    inline const CachePointBlock& GetCachePoint() const{ return m_cachePoint; }
    inline bool CachePointHasBeenSet() const { return m_cachePointHasBeenSet; }
    inline void SetCachePoint(const CachePointBlock& value) { m_cachePointHasBeenSet = true; m_cachePoint = value; }
    inline void SetCachePoint(CachePointBlock&& value) { m_cachePointHasBeenSet = true; m_cachePoint = std::move(value); }
    inline SystemContentBlock& WithCachePoint(const CachePointBlock& value) { SetCachePoint(value); return *this;}
    inline SystemContentBlock& WithCachePoint(CachePointBlock&& value) { SetCachePoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text in the system prompt.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline SystemContentBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline SystemContentBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline SystemContentBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}
  private:

    CachePointBlock m_cachePoint;
    bool m_cachePointHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
