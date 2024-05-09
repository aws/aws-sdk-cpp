/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/PropertyParameters.h>
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
   * <p>The request body to provide for the API request, as the agent elicited from
   * the user.</p> <p>This data type is used in the following API operations:</p>
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ApiRequestBody">AWS
   * API Reference</a></p>
   */
  class ApiRequestBody
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ApiRequestBody();
    AWS_BEDROCKAGENTRUNTIME_API ApiRequestBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ApiRequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline const Aws::Map<Aws::String, PropertyParameters>& GetContent() const{ return m_content; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline void SetContent(const Aws::Map<Aws::String, PropertyParameters>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline void SetContent(Aws::Map<Aws::String, PropertyParameters>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& WithContent(const Aws::Map<Aws::String, PropertyParameters>& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& WithContent(Aws::Map<Aws::String, PropertyParameters>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& AddContent(const Aws::String& key, const PropertyParameters& value) { m_contentHasBeenSet = true; m_content.emplace(key, value); return *this; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& AddContent(Aws::String&& key, const PropertyParameters& value) { m_contentHasBeenSet = true; m_content.emplace(std::move(key), value); return *this; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& AddContent(const Aws::String& key, PropertyParameters&& value) { m_contentHasBeenSet = true; m_content.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& AddContent(Aws::String&& key, PropertyParameters&& value) { m_contentHasBeenSet = true; m_content.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& AddContent(const char* key, PropertyParameters&& value) { m_contentHasBeenSet = true; m_content.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The content of the request body. The key of the object in this field is a
     * media type defining the format of the request body.</p>
     */
    inline ApiRequestBody& AddContent(const char* key, const PropertyParameters& value) { m_contentHasBeenSet = true; m_content.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, PropertyParameters> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
