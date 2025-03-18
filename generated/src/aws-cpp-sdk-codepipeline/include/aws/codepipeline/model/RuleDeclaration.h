/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/RuleTypeId.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents information about the rule to be created for an associated
   * condition. An example would be creating a new rule for an entry condition, such
   * as a rule that checks for a test result before allowing the run to enter the
   * deployment stage. For more information about conditions, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/stage-conditions.html">Stage
   * conditions</a> and <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts-how-it-works-conditions.html">How
   * do stage conditions work?</a>. For more information about rules, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/rule-reference.html">CodePipeline
   * rule reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleDeclaration">AWS
   * API Reference</a></p>
   */
  class RuleDeclaration
  {
  public:
    AWS_CODEPIPELINE_API RuleDeclaration() = default;
    AWS_CODEPIPELINE_API RuleDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule that is created for the condition, such as
     * <code>VariableCheck</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RuleDeclaration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the rule type, which is made up of the combined values for
     * category, owner, provider, and version.</p>
     */
    inline const RuleTypeId& GetRuleTypeId() const { return m_ruleTypeId; }
    inline bool RuleTypeIdHasBeenSet() const { return m_ruleTypeIdHasBeenSet; }
    template<typename RuleTypeIdT = RuleTypeId>
    void SetRuleTypeId(RuleTypeIdT&& value) { m_ruleTypeIdHasBeenSet = true; m_ruleTypeId = std::forward<RuleTypeIdT>(value); }
    template<typename RuleTypeIdT = RuleTypeId>
    RuleDeclaration& WithRuleTypeId(RuleTypeIdT&& value) { SetRuleTypeId(std::forward<RuleTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action configuration fields for the rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
    RuleDeclaration& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationKeyT = Aws::String, typename ConfigurationValueT = Aws::String>
    RuleDeclaration& AddConfiguration(ConfigurationKeyT&& key, ConfigurationValueT&& value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(std::forward<ConfigurationKeyT>(key), std::forward<ConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The shell commands to run with your commands rule in CodePipeline. All
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
    RuleDeclaration& WithCommands(CommandsT&& value) { SetCommands(std::forward<CommandsT>(value)); return *this;}
    template<typename CommandsT = Aws::String>
    RuleDeclaration& AddCommands(CommandsT&& value) { m_commandsHasBeenSet = true; m_commands.emplace_back(std::forward<CommandsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input artifacts fields for the rule, such as specifying an input file for
     * the rule.</p>
     */
    inline const Aws::Vector<InputArtifact>& GetInputArtifacts() const { return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    template<typename InputArtifactsT = Aws::Vector<InputArtifact>>
    void SetInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::forward<InputArtifactsT>(value); }
    template<typename InputArtifactsT = Aws::Vector<InputArtifact>>
    RuleDeclaration& WithInputArtifacts(InputArtifactsT&& value) { SetInputArtifacts(std::forward<InputArtifactsT>(value)); return *this;}
    template<typename InputArtifactsT = InputArtifact>
    RuleDeclaration& AddInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace_back(std::forward<InputArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pipeline role ARN associated with the rule.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    RuleDeclaration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region for the condition associated with the rule.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RuleDeclaration& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action timeout for the rule.</p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline RuleDeclaration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleTypeId m_ruleTypeId;
    bool m_ruleTypeIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_commands;
    bool m_commandsHasBeenSet = false;

    Aws::Vector<InputArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
