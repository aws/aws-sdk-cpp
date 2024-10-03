/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionTypeId.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/OutputArtifact.h>
#include <aws/codepipeline/model/InputArtifact.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an action declaration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionDeclaration">AWS
   * API Reference</a></p>
   */
  class ActionDeclaration
  {
  public:
    AWS_CODEPIPELINE_API ActionDeclaration();
    AWS_CODEPIPELINE_API ActionDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action declaration's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ActionDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ActionDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ActionDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline const ActionTypeId& GetActionTypeId() const{ return m_actionTypeId; }
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }
    inline void SetActionTypeId(const ActionTypeId& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = value; }
    inline void SetActionTypeId(ActionTypeId&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::move(value); }
    inline ActionDeclaration& WithActionTypeId(const ActionTypeId& value) { SetActionTypeId(value); return *this;}
    inline ActionDeclaration& WithActionTypeId(ActionTypeId&& value) { SetActionTypeId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which actions are run.</p>
     */
    inline int GetRunOrder() const{ return m_runOrder; }
    inline bool RunOrderHasBeenSet() const { return m_runOrderHasBeenSet; }
    inline void SetRunOrder(int value) { m_runOrderHasBeenSet = true; m_runOrder = value; }
    inline ActionDeclaration& WithRunOrder(int value) { SetRunOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action's configuration. These are key-value pairs that specify input
     * values for an action. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#action-requirements">Action
     * Structure Requirements in CodePipeline</a>. For the list of configuration
     * properties for the CloudFormation action type in CodePipeline, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-action-reference.html">Configuration
     * Properties Reference</a> in the <i>CloudFormation User Guide</i>. For template
     * snippets with examples, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/continuous-delivery-codepipeline-parameter-override-functions.html">Using
     * Parameter Override Functions with CodePipeline Pipelines</a> in the
     * <i>CloudFormation User Guide</i>.</p> <p>The values can be represented in either
     * JSON or YAML format. For example, the JSON configuration item format is as
     * follows: </p> <p> <i>JSON:</i> </p> <p> <code>"Configuration" : { Key : Value
     * },</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline ActionDeclaration& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}
    inline ActionDeclaration& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline ActionDeclaration& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    inline ActionDeclaration& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline ActionDeclaration& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline ActionDeclaration& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    inline ActionDeclaration& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline ActionDeclaration& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline ActionDeclaration& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shell commands to run with your compute action in CodePipeline. All
     * commands are supported except multi-line formats. While CodeBuild logs and
     * permissions are used, you do not need to create any resources in CodeBuild.</p>
     *  <p>Using compute time for this action will incur separate charges in
     * CodeBuild.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommands() const{ return m_commands; }
    inline bool CommandsHasBeenSet() const { return m_commandsHasBeenSet; }
    inline void SetCommands(const Aws::Vector<Aws::String>& value) { m_commandsHasBeenSet = true; m_commands = value; }
    inline void SetCommands(Aws::Vector<Aws::String>&& value) { m_commandsHasBeenSet = true; m_commands = std::move(value); }
    inline ActionDeclaration& WithCommands(const Aws::Vector<Aws::String>& value) { SetCommands(value); return *this;}
    inline ActionDeclaration& WithCommands(Aws::Vector<Aws::String>&& value) { SetCommands(std::move(value)); return *this;}
    inline ActionDeclaration& AddCommands(const Aws::String& value) { m_commandsHasBeenSet = true; m_commands.push_back(value); return *this; }
    inline ActionDeclaration& AddCommands(Aws::String&& value) { m_commandsHasBeenSet = true; m_commands.push_back(std::move(value)); return *this; }
    inline ActionDeclaration& AddCommands(const char* value) { m_commandsHasBeenSet = true; m_commands.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline const Aws::Vector<OutputArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    inline void SetOutputArtifacts(const Aws::Vector<OutputArtifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }
    inline void SetOutputArtifacts(Aws::Vector<OutputArtifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }
    inline ActionDeclaration& WithOutputArtifacts(const Aws::Vector<OutputArtifact>& value) { SetOutputArtifacts(value); return *this;}
    inline ActionDeclaration& WithOutputArtifacts(Aws::Vector<OutputArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}
    inline ActionDeclaration& AddOutputArtifacts(const OutputArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(value); return *this; }
    inline ActionDeclaration& AddOutputArtifacts(OutputArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline const Aws::Vector<InputArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    inline void SetInputArtifacts(const Aws::Vector<InputArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }
    inline void SetInputArtifacts(Aws::Vector<InputArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }
    inline ActionDeclaration& WithInputArtifacts(const Aws::Vector<InputArtifact>& value) { SetInputArtifacts(value); return *this;}
    inline ActionDeclaration& WithInputArtifacts(Aws::Vector<InputArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}
    inline ActionDeclaration& AddInputArtifacts(const InputArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }
    inline ActionDeclaration& AddInputArtifacts(InputArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of variables that are to be exported from the compute action. This
     * is specifically CodeBuild environment variables as used for that action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputVariables() const{ return m_outputVariables; }
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }
    inline void SetOutputVariables(const Aws::Vector<Aws::String>& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = value; }
    inline void SetOutputVariables(Aws::Vector<Aws::String>&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::move(value); }
    inline ActionDeclaration& WithOutputVariables(const Aws::Vector<Aws::String>& value) { SetOutputVariables(value); return *this;}
    inline ActionDeclaration& WithOutputVariables(Aws::Vector<Aws::String>&& value) { SetOutputVariables(std::move(value)); return *this;}
    inline ActionDeclaration& AddOutputVariables(const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.push_back(value); return *this; }
    inline ActionDeclaration& AddOutputVariables(Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.push_back(std::move(value)); return *this; }
    inline ActionDeclaration& AddOutputVariables(const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ActionDeclaration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ActionDeclaration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ActionDeclaration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action declaration's Amazon Web Services Region, such as us-east-1.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ActionDeclaration& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ActionDeclaration& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ActionDeclaration& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline ActionDeclaration& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline ActionDeclaration& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline ActionDeclaration& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timeout duration in minutes that can be applied against the ActionType’s
     * default timeout value specified in <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/limits.html">Quotas
     * for CodePipeline </a>. This attribute is available only to the manual approval
     * ActionType.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline ActionDeclaration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet = false;

    int m_runOrder;
    bool m_runOrderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_commands;
    bool m_commandsHasBeenSet = false;

    Aws::Vector<OutputArtifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    Aws::Vector<InputArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputVariables;
    bool m_outputVariablesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
