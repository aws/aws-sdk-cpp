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
#include <aws/codepipeline/model/EnvironmentVariable.h>
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
    AWS_CODEPIPELINE_API ActionDeclaration() = default;
    AWS_CODEPIPELINE_API ActionDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action declaration's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActionDeclaration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action type and the provider of the action.</p>
     */
    inline const ActionTypeId& GetActionTypeId() const { return m_actionTypeId; }
    inline bool ActionTypeIdHasBeenSet() const { return m_actionTypeIdHasBeenSet; }
    template<typename ActionTypeIdT = ActionTypeId>
    void SetActionTypeId(ActionTypeIdT&& value) { m_actionTypeIdHasBeenSet = true; m_actionTypeId = std::forward<ActionTypeIdT>(value); }
    template<typename ActionTypeIdT = ActionTypeId>
    ActionDeclaration& WithActionTypeId(ActionTypeIdT&& value) { SetActionTypeId(std::forward<ActionTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which actions are run.</p>
     */
    inline int GetRunOrder() const { return m_runOrder; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
    ActionDeclaration& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationKeyT = Aws::String, typename ConfigurationValueT = Aws::String>
    ActionDeclaration& AddConfiguration(ConfigurationKeyT&& key, ConfigurationValueT&& value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(std::forward<ConfigurationKeyT>(key), std::forward<ConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The shell commands to run with your compute action in CodePipeline. All
     * commands are supported except multi-line formats. While CodeBuild logs and
     * permissions are used, you do not need to create any resources in CodeBuild.</p>
     *  <p>Using compute time for this action will incur separate charges in
     * CodeBuild.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommands() const { return m_commands; }
    inline bool CommandsHasBeenSet() const { return m_commandsHasBeenSet; }
    template<typename CommandsT = Aws::Vector<Aws::String>>
    void SetCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands = std::forward<CommandsT>(value); }
    template<typename CommandsT = Aws::Vector<Aws::String>>
    ActionDeclaration& WithCommands(CommandsT&& value) { SetCommands(std::forward<CommandsT>(value)); return *this;}
    template<typename CommandsT = Aws::String>
    ActionDeclaration& AddCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands.emplace_back(std::forward<CommandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ID of the result of the action declaration, such as a test or
     * build artifact.</p>
     */
    inline const Aws::Vector<OutputArtifact>& GetOutputArtifacts() const { return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    template<typename OutputArtifactsT = Aws::Vector<OutputArtifact>>
    void SetOutputArtifacts(OutputArtifactsT&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::forward<OutputArtifactsT>(value); }
    template<typename OutputArtifactsT = Aws::Vector<OutputArtifact>>
    ActionDeclaration& WithOutputArtifacts(OutputArtifactsT&& value) { SetOutputArtifacts(std::forward<OutputArtifactsT>(value)); return *this;}
    template<typename OutputArtifactsT = OutputArtifact>
    ActionDeclaration& AddOutputArtifacts(OutputArtifactsT&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace_back(std::forward<OutputArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or ID of the artifact consumed by the action, such as a test or
     * build artifact.</p>
     */
    inline const Aws::Vector<InputArtifact>& GetInputArtifacts() const { return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    template<typename InputArtifactsT = Aws::Vector<InputArtifact>>
    void SetInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::forward<InputArtifactsT>(value); }
    template<typename InputArtifactsT = Aws::Vector<InputArtifact>>
    ActionDeclaration& WithInputArtifacts(InputArtifactsT&& value) { SetInputArtifacts(std::forward<InputArtifactsT>(value)); return *this;}
    template<typename InputArtifactsT = InputArtifact>
    ActionDeclaration& AddInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace_back(std::forward<InputArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of variables that are to be exported from the compute action. This
     * is specifically CodeBuild environment variables as used for that action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputVariables() const { return m_outputVariables; }
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }
    template<typename OutputVariablesT = Aws::Vector<Aws::String>>
    void SetOutputVariables(OutputVariablesT&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::forward<OutputVariablesT>(value); }
    template<typename OutputVariablesT = Aws::Vector<Aws::String>>
    ActionDeclaration& WithOutputVariables(OutputVariablesT&& value) { SetOutputVariables(std::forward<OutputVariablesT>(value)); return *this;}
    template<typename OutputVariablesT = Aws::String>
    ActionDeclaration& AddOutputVariables(OutputVariablesT&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace_back(std::forward<OutputVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM service role that performs the declared action. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ActionDeclaration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action declaration's Amazon Web Services Region, such as us-east-1.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ActionDeclaration& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The variable namespace associated with the action. All variables produced as
     * output by this action fall under this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ActionDeclaration& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timeout duration in minutes that can be applied against the ActionType’s
     * default timeout value specified in <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/limits.html">Quotas
     * for CodePipeline </a>. This attribute is available only to the manual approval
     * ActionType.</p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline ActionDeclaration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for the action.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Vector<EnvironmentVariable>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Vector<EnvironmentVariable>>
    ActionDeclaration& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesT = EnvironmentVariable>
    ActionDeclaration& AddEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace_back(std::forward<EnvironmentVariablesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActionTypeId m_actionTypeId;
    bool m_actionTypeIdHasBeenSet = false;

    int m_runOrder{0};
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

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;

    Aws::Vector<EnvironmentVariable> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
