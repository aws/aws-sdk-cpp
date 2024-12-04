/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/InputQueryType.h>
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
   * <p>Contains information about a natural language query to transform into
   * SQL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/QueryGenerationInput">AWS
   * API Reference</a></p>
   */
  class QueryGenerationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API QueryGenerationInput();
    AWS_BEDROCKAGENTRUNTIME_API QueryGenerationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API QueryGenerationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the query.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline QueryGenerationInput& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline QueryGenerationInput& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline QueryGenerationInput& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the query.</p>
     */
    inline const InputQueryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InputQueryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InputQueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline QueryGenerationInput& WithType(const InputQueryType& value) { SetType(value); return *this;}
    inline QueryGenerationInput& WithType(InputQueryType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    InputQueryType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
