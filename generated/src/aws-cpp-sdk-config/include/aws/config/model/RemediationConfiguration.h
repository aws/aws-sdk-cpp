/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationTargetType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/config/model/ExecutionControls.h>
#include <aws/config/model/RemediationParameterValue.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>An object that represents the details about the remediation configuration
   * that includes the remediation action, parameters, and data to execute the
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RemediationConfiguration">AWS
   * API Reference</a></p>
   */
  class RemediationConfiguration
  {
  public:
    AWS_CONFIGSERVICE_API RemediationConfiguration() = default;
    AWS_CONFIGSERVICE_API RemediationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    RemediationConfiguration& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline RemediationTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(RemediationTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline RemediationConfiguration& WithTargetType(RemediationTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target ID is the name of the SSM document.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    RemediationConfiguration& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    template<typename TargetVersionT = Aws::String>
    void SetTargetVersion(TargetVersionT&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::forward<TargetVersionT>(value); }
    template<typename TargetVersionT = Aws::String>
    RemediationConfiguration& WithTargetVersion(TargetVersionT&& value) { SetTargetVersion(std::forward<TargetVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline const Aws::Map<Aws::String, RemediationParameterValue>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, RemediationParameterValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, RemediationParameterValue>>
    RemediationConfiguration& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = RemediationParameterValue>
    RemediationConfiguration& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of a resource. </p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    RemediationConfiguration& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remediation is triggered automatically.</p>
     */
    inline bool GetAutomatic() const { return m_automatic; }
    inline bool AutomaticHasBeenSet() const { return m_automaticHasBeenSet; }
    inline void SetAutomatic(bool value) { m_automaticHasBeenSet = true; m_automatic = value; }
    inline RemediationConfiguration& WithAutomatic(bool value) { SetAutomatic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ExecutionControls object.</p>
     */
    inline const ExecutionControls& GetExecutionControls() const { return m_executionControls; }
    inline bool ExecutionControlsHasBeenSet() const { return m_executionControlsHasBeenSet; }
    template<typename ExecutionControlsT = ExecutionControls>
    void SetExecutionControls(ExecutionControlsT&& value) { m_executionControlsHasBeenSet = true; m_executionControls = std::forward<ExecutionControlsT>(value); }
    template<typename ExecutionControlsT = ExecutionControls>
    RemediationConfiguration& WithExecutionControls(ExecutionControlsT&& value) { SetExecutionControls(std::forward<ExecutionControlsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of failed attempts for auto-remediation. If you do not
     * select a number, the default is 5.</p> <p>For example, if you specify
     * MaximumAutomaticAttempts as 5 with RetryAttemptSeconds as 50 seconds, Config
     * will put a RemediationException on your behalf for the failing resource after
     * the 5th failed attempt within 50 seconds.</p>
     */
    inline int GetMaximumAutomaticAttempts() const { return m_maximumAutomaticAttempts; }
    inline bool MaximumAutomaticAttemptsHasBeenSet() const { return m_maximumAutomaticAttemptsHasBeenSet; }
    inline void SetMaximumAutomaticAttempts(int value) { m_maximumAutomaticAttemptsHasBeenSet = true; m_maximumAutomaticAttempts = value; }
    inline RemediationConfiguration& WithMaximumAutomaticAttempts(int value) { SetMaximumAutomaticAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time window to determine whether or not to add a remediation exception to
     * prevent infinite remediation attempts. If <code>MaximumAutomaticAttempts</code>
     * remediation attempts have been made under <code>RetryAttemptSeconds</code>, a
     * remediation exception will be added to the resource. If you do not select a
     * number, the default is 60 seconds. </p> <p>For example, if you specify
     * <code>RetryAttemptSeconds</code> as 50 seconds and
     * <code>MaximumAutomaticAttempts</code> as 5, Config will run auto-remediations 5
     * times within 50 seconds before adding a remediation exception to the
     * resource.</p>
     */
    inline long long GetRetryAttemptSeconds() const { return m_retryAttemptSeconds; }
    inline bool RetryAttemptSecondsHasBeenSet() const { return m_retryAttemptSecondsHasBeenSet; }
    inline void SetRetryAttemptSeconds(long long value) { m_retryAttemptSecondsHasBeenSet = true; m_retryAttemptSeconds = value; }
    inline RemediationConfiguration& WithRetryAttemptSeconds(long long value) { SetRetryAttemptSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RemediationConfiguration& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline const Aws::String& GetCreatedByService() const { return m_createdByService; }
    inline bool CreatedByServiceHasBeenSet() const { return m_createdByServiceHasBeenSet; }
    template<typename CreatedByServiceT = Aws::String>
    void SetCreatedByService(CreatedByServiceT&& value) { m_createdByServiceHasBeenSet = true; m_createdByService = std::forward<CreatedByServiceT>(value); }
    template<typename CreatedByServiceT = Aws::String>
    RemediationConfiguration& WithCreatedByService(CreatedByServiceT&& value) { SetCreatedByService(std::forward<CreatedByServiceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    RemediationTargetType m_targetType{RemediationTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    Aws::Map<Aws::String, RemediationParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    bool m_automatic{false};
    bool m_automaticHasBeenSet = false;

    ExecutionControls m_executionControls;
    bool m_executionControlsHasBeenSet = false;

    int m_maximumAutomaticAttempts{0};
    bool m_maximumAutomaticAttemptsHasBeenSet = false;

    long long m_retryAttemptSeconds{0};
    bool m_retryAttemptSecondsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByService;
    bool m_createdByServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
