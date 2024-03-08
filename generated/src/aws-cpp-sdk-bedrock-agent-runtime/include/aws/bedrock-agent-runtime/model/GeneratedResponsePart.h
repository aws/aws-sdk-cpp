/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/TextResponsePart.h>
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
   * <p>Contains metadata about a part of the generated response that is accompanied
   * by a citation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/GeneratedResponsePart">AWS
   * API Reference</a></p>
   */
  class GeneratedResponsePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GeneratedResponsePart();
    AWS_BEDROCKAGENTRUNTIME_API GeneratedResponsePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API GeneratedResponsePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains metadata about a textual part of the generated response that is
     * accompanied by a citation.</p>
     */
    inline const TextResponsePart& GetTextResponsePart() const{ return m_textResponsePart; }

    /**
     * <p>Contains metadata about a textual part of the generated response that is
     * accompanied by a citation.</p>
     */
    inline bool TextResponsePartHasBeenSet() const { return m_textResponsePartHasBeenSet; }

    /**
     * <p>Contains metadata about a textual part of the generated response that is
     * accompanied by a citation.</p>
     */
    inline void SetTextResponsePart(const TextResponsePart& value) { m_textResponsePartHasBeenSet = true; m_textResponsePart = value; }

    /**
     * <p>Contains metadata about a textual part of the generated response that is
     * accompanied by a citation.</p>
     */
    inline void SetTextResponsePart(TextResponsePart&& value) { m_textResponsePartHasBeenSet = true; m_textResponsePart = std::move(value); }

    /**
     * <p>Contains metadata about a textual part of the generated response that is
     * accompanied by a citation.</p>
     */
    inline GeneratedResponsePart& WithTextResponsePart(const TextResponsePart& value) { SetTextResponsePart(value); return *this;}

    /**
     * <p>Contains metadata about a textual part of the generated response that is
     * accompanied by a citation.</p>
     */
    inline GeneratedResponsePart& WithTextResponsePart(TextResponsePart&& value) { SetTextResponsePart(std::move(value)); return *this;}

  private:

    TextResponsePart m_textResponsePart;
    bool m_textResponsePartHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
