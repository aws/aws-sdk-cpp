/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/RuleTypeId.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ArtifactDetail.h>
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
   * <p>Input information used for a rule execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleExecutionInput">AWS
   * API Reference</a></p>
   */
  class RuleExecutionInput
  {
  public:
    AWS_CODEPIPELINE_API RuleExecutionInput() = default;
    AWS_CODEPIPELINE_API RuleExecutionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the rule type, which is made up of the combined values for
     * category, owner, provider, and version. For more information about conditions,
     * see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/stage-conditions.html">Stage
     * conditions</a>. For more information about rules, see the <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/rule-reference.html">CodePipeline
     * rule reference</a>.</p>
     */
    inline const RuleTypeId& GetRuleTypeId() const { return m_ruleTypeId; }
    inline bool RuleTypeIdHasBeenSet() const { return m_ruleTypeIdHasBeenSet; }
    template<typename RuleTypeIdT = RuleTypeId>
    void SetRuleTypeId(RuleTypeIdT&& value) { m_ruleTypeIdHasBeenSet = true; m_ruleTypeId = std::forward<RuleTypeIdT>(value); }
    template<typename RuleTypeIdT = RuleTypeId>
    RuleExecutionInput& WithRuleTypeId(RuleTypeIdT&& value) { SetRuleTypeId(std::forward<RuleTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration data for a rule execution, such as the resolved values for that
     * run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<Aws::String, Aws::String>>
    RuleExecutionInput& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationKeyT = Aws::String, typename ConfigurationValueT = Aws::String>
    RuleExecutionInput& AddConfiguration(ConfigurationKeyT&& key, ConfigurationValueT&& value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(std::forward<ConfigurationKeyT>(key), std::forward<ConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Configuration data for a rule execution with all variable references replaced
     * with their real values for the execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResolvedConfiguration() const { return m_resolvedConfiguration; }
    inline bool ResolvedConfigurationHasBeenSet() const { return m_resolvedConfigurationHasBeenSet; }
    template<typename ResolvedConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetResolvedConfiguration(ResolvedConfigurationT&& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration = std::forward<ResolvedConfigurationT>(value); }
    template<typename ResolvedConfigurationT = Aws::Map<Aws::String, Aws::String>>
    RuleExecutionInput& WithResolvedConfiguration(ResolvedConfigurationT&& value) { SetResolvedConfiguration(std::forward<ResolvedConfigurationT>(value)); return *this;}
    template<typename ResolvedConfigurationKeyT = Aws::String, typename ResolvedConfigurationValueT = Aws::String>
    RuleExecutionInput& AddResolvedConfiguration(ResolvedConfigurationKeyT&& key, ResolvedConfigurationValueT&& value) {
      m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(std::forward<ResolvedConfigurationKeyT>(key), std::forward<ResolvedConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM service role that performs the declared rule. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    RuleExecutionInput& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the rule, such as us-east-1.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RuleExecutionInput& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of input artifacts of the rule that correspond to the rule
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactDetail>& GetInputArtifacts() const { return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    template<typename InputArtifactsT = Aws::Vector<ArtifactDetail>>
    void SetInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::forward<InputArtifactsT>(value); }
    template<typename InputArtifactsT = Aws::Vector<ArtifactDetail>>
    RuleExecutionInput& WithInputArtifacts(InputArtifactsT&& value) { SetInputArtifacts(std::forward<InputArtifactsT>(value)); return *this;}
    template<typename InputArtifactsT = ArtifactDetail>
    RuleExecutionInput& AddInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace_back(std::forward<InputArtifactsT>(value)); return *this; }
    ///@}
  private:

    RuleTypeId m_ruleTypeId;
    bool m_ruleTypeIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resolvedConfiguration;
    bool m_resolvedConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<ArtifactDetail> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
