/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationTargetType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_CONFIGSERVICE_API RemediationConfiguration
  {
  public:
    RemediationConfiguration();
    RemediationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    RemediationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline RemediationConfiguration& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline RemediationConfiguration& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
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
     */
    inline const Aws::String& GetTargetVersion() const{ return m_targetVersion; }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
     */
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
     */
    inline void SetTargetVersion(const Aws::String& value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
     */
    inline void SetTargetVersion(Aws::String&& value) { m_targetVersionHasBeenSet = true; m_targetVersion = std::move(value); }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
     */
    inline void SetTargetVersion(const char* value) { m_targetVersionHasBeenSet = true; m_targetVersion.assign(value); }

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
     */
    inline RemediationConfiguration& WithTargetVersion(const Aws::String& value) { SetTargetVersion(value); return *this;}

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
     */
    inline RemediationConfiguration& WithTargetVersion(Aws::String&& value) { SetTargetVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the target. For example, version of the SSM document.</p>
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

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    RemediationTargetType m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    Aws::String m_targetVersion;
    bool m_targetVersionHasBeenSet;

    Aws::Map<Aws::String, RemediationParameterValue> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
