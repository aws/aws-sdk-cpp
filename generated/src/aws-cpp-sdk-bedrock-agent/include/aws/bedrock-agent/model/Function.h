/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent/model/ParameterDetail.h>
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
   * <p>Defines parameters that the agent needs to invoke from the user to complete
   * the function. Corresponds to an action in an action group.</p> <p>This data type
   * is used in the following API operations:</p> <ul> <li> <p> <a
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/Function">AWS
   * API Reference</a></p>
   */
  class Function
  {
  public:
    AWS_BEDROCKAGENT_API Function();
    AWS_BEDROCKAGENT_API Function(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Function& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline Function& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline Function& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the function and its purpose.</p>
     */
    inline Function& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the function.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the function.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the function.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the function.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the function.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the function.</p>
     */
    inline Function& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the function.</p>
     */
    inline Function& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the function.</p>
     */
    inline Function& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline const Aws::Map<Aws::String, ParameterDetail>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, ParameterDetail>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, ParameterDetail>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& WithParameters(const Aws::Map<Aws::String, ParameterDetail>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& WithParameters(Aws::Map<Aws::String, ParameterDetail>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& AddParameters(const Aws::String& key, const ParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& AddParameters(Aws::String&& key, const ParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& AddParameters(const Aws::String& key, ParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& AddParameters(Aws::String&& key, ParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& AddParameters(const char* key, ParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that the agent elicits from the user to fulfill the
     * function.</p>
     */
    inline Function& AddParameters(const char* key, const ParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, ParameterDetail> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
