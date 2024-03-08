/**
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
   * <p>Contains the cited text from the data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalResultContent">AWS
   * API Reference</a></p>
   */
  class RetrievalResultContent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent();
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrievalResultContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cited text from the data source.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The cited text from the data source.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The cited text from the data source.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The cited text from the data source.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The cited text from the data source.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The cited text from the data source.</p>
     */
    inline RetrievalResultContent& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The cited text from the data source.</p>
     */
    inline RetrievalResultContent& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The cited text from the data source.</p>
     */
    inline RetrievalResultContent& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
