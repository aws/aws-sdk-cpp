/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/Type.h>
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
   * <p>Contains details about a parameter in a function for an action group.</p>
   * <p>This data type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_CreateAgentActionGroup.html#API_agent_CreateAgentActionGroup_RequestSyntax">CreateAgentActionGroup
   * request</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_CreateAgentActionGroup.html#API_agent_CreateAgentActionGroup_ResponseSyntax">CreateAgentActionGroup
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_UpdateAgentActionGroup.html#API_agent_UpdateAgentActionGroup_RequestSyntax">UpdateAgentActionGroup
   * request</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_UpdateAgentActionGroup.html#API_agent_UpdateAgentActionGroup_ResponseSyntax">UpdateAgentActionGroup
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetAgentActionGroup.html#API_agent_GetAgentActionGroup_ResponseSyntax">GetAgentActionGroup
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ParameterDetail">AWS
   * API Reference</a></p>
   */
  class ParameterDetail
  {
  public:
    AWS_BEDROCKAGENT_API ParameterDetail();
    AWS_BEDROCKAGENT_API ParameterDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ParameterDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline ParameterDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline ParameterDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user.</p>
     */
    inline ParameterDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Whether the parameter is required for the agent to complete the function for
     * action group invocation.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Whether the parameter is required for the agent to complete the function for
     * action group invocation.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Whether the parameter is required for the agent to complete the function for
     * action group invocation.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Whether the parameter is required for the agent to complete the function for
     * action group invocation.</p>
     */
    inline ParameterDetail& WithRequired(bool value) { SetRequired(value); return *this;}


    /**
     * <p>The data type of the parameter.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the parameter.</p>
     */
    inline ParameterDetail& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the parameter.</p>
     */
    inline ParameterDetail& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
