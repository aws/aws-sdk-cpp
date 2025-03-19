/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
   * <p>The input schema for the tool. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Use a
   * tool to complete an Amazon Bedrock model response</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ToolInputSchema">AWS
   * API Reference</a></p>
   */
  class ToolInputSchema
  {
  public:
    AWS_BEDROCKAGENT_API ToolInputSchema() = default;
    AWS_BEDROCKAGENT_API ToolInputSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ToolInputSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JSON object defining the input schema for the tool.</p>
     */
    inline Aws::Utils::DocumentView GetJson() const { return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    template<typename JsonT = Aws::Utils::Document>
    void SetJson(JsonT&& value) { m_jsonHasBeenSet = true; m_json = std::forward<JsonT>(value); }
    template<typename JsonT = Aws::Utils::Document>
    ToolInputSchema& WithJson(JsonT&& value) { SetJson(std::forward<JsonT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_json;
    bool m_jsonHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
