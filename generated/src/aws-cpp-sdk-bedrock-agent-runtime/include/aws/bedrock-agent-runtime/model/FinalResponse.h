﻿/**
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
   * <p>Contains details about the response to the user.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FinalResponse">AWS
   * API Reference</a></p>
   */
  class FinalResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FinalResponse() = default;
    AWS_BEDROCKAGENTRUNTIME_API FinalResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FinalResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text in the response to the user.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    FinalResponse& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
