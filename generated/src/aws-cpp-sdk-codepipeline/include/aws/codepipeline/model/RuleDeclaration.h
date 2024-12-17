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
   * conditions</a>. For more information about rules, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/rule-reference.html">CodePipeline
   * rule reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleDeclaration">AWS
   * API Reference</a></p>
   */
  class RuleDeclaration
  {
  public:
    AWS_CODEPIPELINE_API RuleDeclaration();
    AWS_CODEPIPELINE_API RuleDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule that is created for the condition, such as
     * <code>VariableCheck</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RuleDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RuleDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RuleDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the rule type, which is made up of the combined values for
     * category, owner, provider, and version.</p>
     */
    inline const RuleTypeId& GetRuleTypeId() const{ return m_ruleTypeId; }
    inline bool RuleTypeIdHasBeenSet() const { return m_ruleTypeIdHasBeenSet; }
    inline void SetRuleTypeId(const RuleTypeId& value) { m_ruleTypeIdHasBeenSet = true; m_ruleTypeId = value; }
    inline void SetRuleTypeId(RuleTypeId&& value) { m_ruleTypeIdHasBeenSet = true; m_ruleTypeId = std::move(value); }
    inline RuleDeclaration& WithRuleTypeId(const RuleTypeId& value) { SetRuleTypeId(value); return *this;}
    inline RuleDeclaration& WithRuleTypeId(RuleTypeId&& value) { SetRuleTypeId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action configuration fields for the rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline RuleDeclaration& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}
    inline RuleDeclaration& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline RuleDeclaration& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    inline RuleDeclaration& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline RuleDeclaration& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline RuleDeclaration& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    inline RuleDeclaration& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline RuleDeclaration& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline RuleDeclaration& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shell commands to run with your commands rule in CodePipeline. All
     * commands are supported except multi-line formats. While CodeBuild logs and
     * permissions are used, you do not need to create any resources in CodeBuild.</p>
     *  <p>Using compute time for this action will incur separate charges in
     * CodeBuild.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetCommands() const{ return m_commands; }
    inline bool CommandsHasBeenSet() const { return m_commandsHasBeenSet; }
    inline void SetCommands(const Aws::Vector<Aws::String>& value) { m_commandsHasBeenSet = true; m_commands = value; }
    inline void SetCommands(Aws::Vector<Aws::String>&& value) { m_commandsHasBeenSet = true; m_commands = std::move(value); }
    inline RuleDeclaration& WithCommands(const Aws::Vector<Aws::String>& value) { SetCommands(value); return *this;}
    inline RuleDeclaration& WithCommands(Aws::Vector<Aws::String>&& value) { SetCommands(std::move(value)); return *this;}
    inline RuleDeclaration& AddCommands(const Aws::String& value) { m_commandsHasBeenSet = true; m_commands.push_back(value); return *this; }
    inline RuleDeclaration& AddCommands(Aws::String&& value) { m_commandsHasBeenSet = true; m_commands.push_back(std::move(value)); return *this; }
    inline RuleDeclaration& AddCommands(const char* value) { m_commandsHasBeenSet = true; m_commands.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input artifacts fields for the rule, such as specifying an input file for
     * the rule.</p>
     */
    inline const Aws::Vector<InputArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    inline void SetInputArtifacts(const Aws::Vector<InputArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }
    inline void SetInputArtifacts(Aws::Vector<InputArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }
    inline RuleDeclaration& WithInputArtifacts(const Aws::Vector<InputArtifact>& value) { SetInputArtifacts(value); return *this;}
    inline RuleDeclaration& WithInputArtifacts(Aws::Vector<InputArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}
    inline RuleDeclaration& AddInputArtifacts(const InputArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }
    inline RuleDeclaration& AddInputArtifacts(InputArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pipeline role ARN associated with the rule.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RuleDeclaration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RuleDeclaration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RuleDeclaration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region for the condition associated with the rule.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RuleDeclaration& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RuleDeclaration& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RuleDeclaration& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action timeout for the rule.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
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

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
