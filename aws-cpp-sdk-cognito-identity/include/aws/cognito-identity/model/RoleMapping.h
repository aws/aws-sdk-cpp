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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/model/RoleMappingType.h>
#include <aws/cognito-identity/model/AmbiguousRoleResolutionType.h>
#include <aws/cognito-identity/model/RulesConfigurationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>A role mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/RoleMapping">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API RoleMapping
  {
  public:
    RoleMapping();
    RoleMapping(const Aws::Utils::Json::JsonValue& jsonValue);
    RoleMapping& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The role mapping type. Token will use <code>cognito:roles</code> and
     * <code>cognito:preferred_role</code> claims from the Cognito identity provider
     * token to map groups to roles. Rules will attempt to match claims from the token
     * to map to a role.</p>
     */
    inline const RoleMappingType& GetType() const{ return m_type; }

    /**
     * <p>The role mapping type. Token will use <code>cognito:roles</code> and
     * <code>cognito:preferred_role</code> claims from the Cognito identity provider
     * token to map groups to roles. Rules will attempt to match claims from the token
     * to map to a role.</p>
     */
    inline void SetType(const RoleMappingType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The role mapping type. Token will use <code>cognito:roles</code> and
     * <code>cognito:preferred_role</code> claims from the Cognito identity provider
     * token to map groups to roles. Rules will attempt to match claims from the token
     * to map to a role.</p>
     */
    inline void SetType(RoleMappingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The role mapping type. Token will use <code>cognito:roles</code> and
     * <code>cognito:preferred_role</code> claims from the Cognito identity provider
     * token to map groups to roles. Rules will attempt to match claims from the token
     * to map to a role.</p>
     */
    inline RoleMapping& WithType(const RoleMappingType& value) { SetType(value); return *this;}

    /**
     * <p>The role mapping type. Token will use <code>cognito:roles</code> and
     * <code>cognito:preferred_role</code> claims from the Cognito identity provider
     * token to map groups to roles. Rules will attempt to match claims from the token
     * to map to a role.</p>
     */
    inline RoleMapping& WithType(RoleMappingType&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>If you specify Token or Rules as the <code>Type</code>,
     * <code>AmbiguousRoleResolution</code> is required.</p> <p>Specifies the action to
     * be taken if either no rules match the claim value for the <code>Rules</code>
     * type, or there is no <code>cognito:preferred_role</code> claim and there are
     * multiple <code>cognito:roles</code> matches for the <code>Token</code> type.</p>
     */
    inline const AmbiguousRoleResolutionType& GetAmbiguousRoleResolution() const{ return m_ambiguousRoleResolution; }

    /**
     * <p>If you specify Token or Rules as the <code>Type</code>,
     * <code>AmbiguousRoleResolution</code> is required.</p> <p>Specifies the action to
     * be taken if either no rules match the claim value for the <code>Rules</code>
     * type, or there is no <code>cognito:preferred_role</code> claim and there are
     * multiple <code>cognito:roles</code> matches for the <code>Token</code> type.</p>
     */
    inline void SetAmbiguousRoleResolution(const AmbiguousRoleResolutionType& value) { m_ambiguousRoleResolutionHasBeenSet = true; m_ambiguousRoleResolution = value; }

    /**
     * <p>If you specify Token or Rules as the <code>Type</code>,
     * <code>AmbiguousRoleResolution</code> is required.</p> <p>Specifies the action to
     * be taken if either no rules match the claim value for the <code>Rules</code>
     * type, or there is no <code>cognito:preferred_role</code> claim and there are
     * multiple <code>cognito:roles</code> matches for the <code>Token</code> type.</p>
     */
    inline void SetAmbiguousRoleResolution(AmbiguousRoleResolutionType&& value) { m_ambiguousRoleResolutionHasBeenSet = true; m_ambiguousRoleResolution = std::move(value); }

    /**
     * <p>If you specify Token or Rules as the <code>Type</code>,
     * <code>AmbiguousRoleResolution</code> is required.</p> <p>Specifies the action to
     * be taken if either no rules match the claim value for the <code>Rules</code>
     * type, or there is no <code>cognito:preferred_role</code> claim and there are
     * multiple <code>cognito:roles</code> matches for the <code>Token</code> type.</p>
     */
    inline RoleMapping& WithAmbiguousRoleResolution(const AmbiguousRoleResolutionType& value) { SetAmbiguousRoleResolution(value); return *this;}

    /**
     * <p>If you specify Token or Rules as the <code>Type</code>,
     * <code>AmbiguousRoleResolution</code> is required.</p> <p>Specifies the action to
     * be taken if either no rules match the claim value for the <code>Rules</code>
     * type, or there is no <code>cognito:preferred_role</code> claim and there are
     * multiple <code>cognito:roles</code> matches for the <code>Token</code> type.</p>
     */
    inline RoleMapping& WithAmbiguousRoleResolution(AmbiguousRoleResolutionType&& value) { SetAmbiguousRoleResolution(std::move(value)); return *this;}

    /**
     * <p>The rules to be used for mapping users to roles.</p> <p>If you specify Rules
     * as the role mapping type, <code>RulesConfiguration</code> is required.</p>
     */
    inline const RulesConfigurationType& GetRulesConfiguration() const{ return m_rulesConfiguration; }

    /**
     * <p>The rules to be used for mapping users to roles.</p> <p>If you specify Rules
     * as the role mapping type, <code>RulesConfiguration</code> is required.</p>
     */
    inline void SetRulesConfiguration(const RulesConfigurationType& value) { m_rulesConfigurationHasBeenSet = true; m_rulesConfiguration = value; }

    /**
     * <p>The rules to be used for mapping users to roles.</p> <p>If you specify Rules
     * as the role mapping type, <code>RulesConfiguration</code> is required.</p>
     */
    inline void SetRulesConfiguration(RulesConfigurationType&& value) { m_rulesConfigurationHasBeenSet = true; m_rulesConfiguration = std::move(value); }

    /**
     * <p>The rules to be used for mapping users to roles.</p> <p>If you specify Rules
     * as the role mapping type, <code>RulesConfiguration</code> is required.</p>
     */
    inline RoleMapping& WithRulesConfiguration(const RulesConfigurationType& value) { SetRulesConfiguration(value); return *this;}

    /**
     * <p>The rules to be used for mapping users to roles.</p> <p>If you specify Rules
     * as the role mapping type, <code>RulesConfiguration</code> is required.</p>
     */
    inline RoleMapping& WithRulesConfiguration(RulesConfigurationType&& value) { SetRulesConfiguration(std::move(value)); return *this;}

  private:
    RoleMappingType m_type;
    bool m_typeHasBeenSet;
    AmbiguousRoleResolutionType m_ambiguousRoleResolution;
    bool m_ambiguousRoleResolutionHasBeenSet;
    RulesConfigurationType m_rulesConfiguration;
    bool m_rulesConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
