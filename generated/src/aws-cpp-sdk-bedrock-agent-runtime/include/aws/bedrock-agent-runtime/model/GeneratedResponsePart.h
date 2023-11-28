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
   * <p>Generate response part</p><p><h3>See Also:</h3>   <a
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


    
    inline const TextResponsePart& GetTextResponsePart() const{ return m_textResponsePart; }

    
    inline bool TextResponsePartHasBeenSet() const { return m_textResponsePartHasBeenSet; }

    
    inline void SetTextResponsePart(const TextResponsePart& value) { m_textResponsePartHasBeenSet = true; m_textResponsePart = value; }

    
    inline void SetTextResponsePart(TextResponsePart&& value) { m_textResponsePartHasBeenSet = true; m_textResponsePart = std::move(value); }

    
    inline GeneratedResponsePart& WithTextResponsePart(const TextResponsePart& value) { SetTextResponsePart(value); return *this;}

    
    inline GeneratedResponsePart& WithTextResponsePart(TextResponsePart&& value) { SetTextResponsePart(std::move(value)); return *this;}

  private:

    TextResponsePart m_textResponsePart;
    bool m_textResponsePartHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
