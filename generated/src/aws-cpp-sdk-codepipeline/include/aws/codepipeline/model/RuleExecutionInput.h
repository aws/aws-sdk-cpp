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
    AWS_CODEPIPELINE_API RuleExecutionInput();
    AWS_CODEPIPELINE_API RuleExecutionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the rule type, which is made up of the combined values for
     * category, owner, provider, and version.</p>
     */
    inline const RuleTypeId& GetRuleTypeId() const{ return m_ruleTypeId; }
    inline bool RuleTypeIdHasBeenSet() const { return m_ruleTypeIdHasBeenSet; }
    inline void SetRuleTypeId(const RuleTypeId& value) { m_ruleTypeIdHasBeenSet = true; m_ruleTypeId = value; }
    inline void SetRuleTypeId(RuleTypeId&& value) { m_ruleTypeIdHasBeenSet = true; m_ruleTypeId = std::move(value); }
    inline RuleExecutionInput& WithRuleTypeId(const RuleTypeId& value) { SetRuleTypeId(value); return *this;}
    inline RuleExecutionInput& WithRuleTypeId(RuleTypeId&& value) { SetRuleTypeId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration data for a rule execution, such as the resolved values for that
     * run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline RuleExecutionInput& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}
    inline RuleExecutionInput& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline RuleExecutionInput& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    inline RuleExecutionInput& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline RuleExecutionInput& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline RuleExecutionInput& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    inline RuleExecutionInput& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline RuleExecutionInput& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline RuleExecutionInput& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration data for a rule execution with all variable references replaced
     * with their real values for the execution.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResolvedConfiguration() const{ return m_resolvedConfiguration; }
    inline bool ResolvedConfigurationHasBeenSet() const { return m_resolvedConfigurationHasBeenSet; }
    inline void SetResolvedConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration = value; }
    inline void SetResolvedConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration = std::move(value); }
    inline RuleExecutionInput& WithResolvedConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetResolvedConfiguration(value); return *this;}
    inline RuleExecutionInput& WithResolvedConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetResolvedConfiguration(std::move(value)); return *this;}
    inline RuleExecutionInput& AddResolvedConfiguration(const Aws::String& key, const Aws::String& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(key, value); return *this; }
    inline RuleExecutionInput& AddResolvedConfiguration(Aws::String&& key, const Aws::String& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(std::move(key), value); return *this; }
    inline RuleExecutionInput& AddResolvedConfiguration(const Aws::String& key, Aws::String&& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(key, std::move(value)); return *this; }
    inline RuleExecutionInput& AddResolvedConfiguration(Aws::String&& key, Aws::String&& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline RuleExecutionInput& AddResolvedConfiguration(const char* key, Aws::String&& value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(key, std::move(value)); return *this; }
    inline RuleExecutionInput& AddResolvedConfiguration(Aws::String&& key, const char* value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(std::move(key), value); return *this; }
    inline RuleExecutionInput& AddResolvedConfiguration(const char* key, const char* value) { m_resolvedConfigurationHasBeenSet = true; m_resolvedConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM service role that performs the declared rule. This is
     * assumed through the roleArn for the pipeline.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RuleExecutionInput& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RuleExecutionInput& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RuleExecutionInput& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the rule, such as us-east-1.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RuleExecutionInput& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RuleExecutionInput& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RuleExecutionInput& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of input artifacts of the rule that correspond to the rule
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactDetail>& GetInputArtifacts() const{ return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    inline void SetInputArtifacts(const Aws::Vector<ArtifactDetail>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }
    inline void SetInputArtifacts(Aws::Vector<ArtifactDetail>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }
    inline RuleExecutionInput& WithInputArtifacts(const Aws::Vector<ArtifactDetail>& value) { SetInputArtifacts(value); return *this;}
    inline RuleExecutionInput& WithInputArtifacts(Aws::Vector<ArtifactDetail>&& value) { SetInputArtifacts(std::move(value)); return *this;}
    inline RuleExecutionInput& AddInputArtifacts(const ArtifactDetail& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(value); return *this; }
    inline RuleExecutionInput& AddInputArtifacts(ArtifactDetail&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.push_back(std::move(value)); return *this; }
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
