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
    AWS_CONFIGSERVICE_API RemediationConfiguration();
    AWS_CONFIGSERVICE_API RemediationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule.</p>
     */
    inline RemediationConfiguration& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline RemediationConfiguration& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule.</p>
     */
    inline RemediationConfiguration& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline const RemediationTargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline void SetTargetType(const RemediationTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline void SetTargetType(RemediationTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline RemediationConfiguration& WithTargetType(const RemediationTargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the target. Target executes remediation. For example, SSM
     * document.</p>
     */
    inline RemediationConfiguration& WithTargetType(RemediationTargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline RemediationConfiguration& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline RemediationConfiguration& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>Target ID is the name of the public document.</p>
     */
    inline RemediationConfiguration& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::move(value); }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline void SetTargetVersion(const char* value) { m_targetVersionHasBeenSet = true; m_targetVersion.assign(value); }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline RemediationConfiguration& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline RemediationConfiguration& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the target. For example, version of the SSM document.</p> 
     * <p>If you make backward incompatible changes to the SSM document, you must call
     * PutRemediationConfiguration API again to ensure the remediations can run.</p>
     * 
     */
    inline RemediationConfiguration& WithTargetVersion(const char* value) { SetTargetVersion(value); return *this;}


    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline const Aws::Map<Aws::String, RemediationParameterValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, RemediationParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, RemediationParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& WithParameters(const Aws::Map<Aws::String, RemediationParameterValue>& value) { SetParameters(value); return *this;}

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& WithParameters(Aws::Map<Aws::String, RemediationParameterValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& AddParameters(const Aws::String& key, const RemediationParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& AddParameters(Aws::String&& key, const RemediationParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& AddParameters(const Aws::String& key, RemediationParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& AddParameters(Aws::String&& key, RemediationParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& AddParameters(const char* key, RemediationParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object of the RemediationParameterValue.</p>
     */
    inline RemediationConfiguration& AddParameters(const char* key, const RemediationParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The type of a resource. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of a resource. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of a resource. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of a resource. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of a resource. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of a resource. </p>
     */
    inline RemediationConfiguration& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of a resource. </p>
     */
    inline RemediationConfiguration& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of a resource. </p>
     */
    inline RemediationConfiguration& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The remediation is triggered automatically.</p>
     */
    inline bool GetAutomatic() const{ return m_automatic; }

    /**
     * <p>The remediation is triggered automatically.</p>
     */
    inline bool AutomaticHasBeenSet() const { return m_automaticHasBeenSet; }

    /**
     * <p>The remediation is triggered automatically.</p>
     */
    inline void SetAutomatic(bool value) { m_automaticHasBeenSet = true; m_automatic = value; }

    /**
     * <p>The remediation is triggered automatically.</p>
     */
    inline RemediationConfiguration& WithAutomatic(bool value) { SetAutomatic(value); return *this;}


    /**
     * <p>An ExecutionControls object.</p>
     */
    inline const ExecutionControls& GetExecutionControls() const{ return m_executionControls; }

    /**
     * <p>An ExecutionControls object.</p>
     */
    inline bool ExecutionControlsHasBeenSet() const { return m_executionControlsHasBeenSet; }

    /**
     * <p>An ExecutionControls object.</p>
     */
    inline void SetExecutionControls(const ExecutionControls& value) { m_executionControlsHasBeenSet = true; m_executionControls = value; }

    /**
     * <p>An ExecutionControls object.</p>
     */
    inline void SetExecutionControls(ExecutionControls&& value) { m_executionControlsHasBeenSet = true; m_executionControls = std::move(value); }

    /**
     * <p>An ExecutionControls object.</p>
     */
    inline RemediationConfiguration& WithExecutionControls(const ExecutionControls& value) { SetExecutionControls(value); return *this;}

    /**
     * <p>An ExecutionControls object.</p>
     */
    inline RemediationConfiguration& WithExecutionControls(ExecutionControls&& value) { SetExecutionControls(std::move(value)); return *this;}


    /**
     * <p>The maximum number of failed attempts for auto-remediation. If you do not
     * select a number, the default is 5.</p> <p>For example, if you specify
     * MaximumAutomaticAttempts as 5 with RetryAttemptSeconds as 50 seconds, Config
     * will put a RemediationException on your behalf for the failing resource after
     * the 5th failed attempt within 50 seconds.</p>
     */
    inline int GetMaximumAutomaticAttempts() const{ return m_maximumAutomaticAttempts; }

    /**
     * <p>The maximum number of failed attempts for auto-remediation. If you do not
     * select a number, the default is 5.</p> <p>For example, if you specify
     * MaximumAutomaticAttempts as 5 with RetryAttemptSeconds as 50 seconds, Config
     * will put a RemediationException on your behalf for the failing resource after
     * the 5th failed attempt within 50 seconds.</p>
     */
    inline bool MaximumAutomaticAttemptsHasBeenSet() const { return m_maximumAutomaticAttemptsHasBeenSet; }

    /**
     * <p>The maximum number of failed attempts for auto-remediation. If you do not
     * select a number, the default is 5.</p> <p>For example, if you specify
     * MaximumAutomaticAttempts as 5 with RetryAttemptSeconds as 50 seconds, Config
     * will put a RemediationException on your behalf for the failing resource after
     * the 5th failed attempt within 50 seconds.</p>
     */
    inline void SetMaximumAutomaticAttempts(int value) { m_maximumAutomaticAttemptsHasBeenSet = true; m_maximumAutomaticAttempts = value; }

    /**
     * <p>The maximum number of failed attempts for auto-remediation. If you do not
     * select a number, the default is 5.</p> <p>For example, if you specify
     * MaximumAutomaticAttempts as 5 with RetryAttemptSeconds as 50 seconds, Config
     * will put a RemediationException on your behalf for the failing resource after
     * the 5th failed attempt within 50 seconds.</p>
     */
    inline RemediationConfiguration& WithMaximumAutomaticAttempts(int value) { SetMaximumAutomaticAttempts(value); return *this;}


    /**
     * <p>Maximum time in seconds that Config runs auto-remediation. If you do not
     * select a number, the default is 60 seconds. </p> <p>For example, if you specify
     * RetryAttemptSeconds as 50 seconds and MaximumAutomaticAttempts as 5, Config will
     * run auto-remediations 5 times within 50 seconds before throwing an
     * exception.</p>
     */
    inline long long GetRetryAttemptSeconds() const{ return m_retryAttemptSeconds; }

    /**
     * <p>Maximum time in seconds that Config runs auto-remediation. If you do not
     * select a number, the default is 60 seconds. </p> <p>For example, if you specify
     * RetryAttemptSeconds as 50 seconds and MaximumAutomaticAttempts as 5, Config will
     * run auto-remediations 5 times within 50 seconds before throwing an
     * exception.</p>
     */
    inline bool RetryAttemptSecondsHasBeenSet() const { return m_retryAttemptSecondsHasBeenSet; }

    /**
     * <p>Maximum time in seconds that Config runs auto-remediation. If you do not
     * select a number, the default is 60 seconds. </p> <p>For example, if you specify
     * RetryAttemptSeconds as 50 seconds and MaximumAutomaticAttempts as 5, Config will
     * run auto-remediations 5 times within 50 seconds before throwing an
     * exception.</p>
     */
    inline void SetRetryAttemptSeconds(long long value) { m_retryAttemptSecondsHasBeenSet = true; m_retryAttemptSeconds = value; }

    /**
     * <p>Maximum time in seconds that Config runs auto-remediation. If you do not
     * select a number, the default is 60 seconds. </p> <p>For example, if you specify
     * RetryAttemptSeconds as 50 seconds and MaximumAutomaticAttempts as 5, Config will
     * run auto-remediations 5 times within 50 seconds before throwing an
     * exception.</p>
     */
    inline RemediationConfiguration& WithRetryAttemptSeconds(long long value) { SetRetryAttemptSeconds(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline RemediationConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline RemediationConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of remediation configuration.</p>
     */
    inline RemediationConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline const Aws::String& GetCreatedByService() const{ return m_createdByService; }

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline bool CreatedByServiceHasBeenSet() const { return m_createdByServiceHasBeenSet; }

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline void SetCreatedByService(const Aws::String& value) { m_createdByServiceHasBeenSet = true; m_createdByService = value; }

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline void SetCreatedByService(Aws::String&& value) { m_createdByServiceHasBeenSet = true; m_createdByService = std::move(value); }

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline void SetCreatedByService(const char* value) { m_createdByServiceHasBeenSet = true; m_createdByService.assign(value); }

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline RemediationConfiguration& WithCreatedByService(const Aws::String& value) { SetCreatedByService(value); return *this;}

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline RemediationConfiguration& WithCreatedByService(Aws::String&& value) { SetCreatedByService(std::move(value)); return *this;}

    /**
     * <p>Name of the service that owns the service-linked rule, if applicable.</p>
     */
    inline RemediationConfiguration& WithCreatedByService(const char* value) { SetCreatedByService(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    RemediationTargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    Aws::Map<Aws::String, RemediationParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    bool m_automatic;
    bool m_automaticHasBeenSet = false;

    ExecutionControls m_executionControls;
    bool m_executionControlsHasBeenSet = false;

    int m_maximumAutomaticAttempts;
    bool m_maximumAutomaticAttemptsHasBeenSet = false;

    long long m_retryAttemptSeconds;
    bool m_retryAttemptSecondsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByService;
    bool m_createdByServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
