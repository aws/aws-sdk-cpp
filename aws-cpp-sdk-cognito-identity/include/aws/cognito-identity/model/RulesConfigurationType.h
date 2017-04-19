/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-identity/model/MappingRule.h>
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
   * <p>A container for rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/RulesConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API RulesConfigurationType
  {
  public:
    RulesConfigurationType();
    RulesConfigurationType(const Aws::Utils::Json::JsonValue& jsonValue);
    RulesConfigurationType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline const Aws::Vector<MappingRule>& GetRules() const{ return m_rules; }

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline void SetRules(const Aws::Vector<MappingRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline void SetRules(Aws::Vector<MappingRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline RulesConfigurationType& WithRules(const Aws::Vector<MappingRule>& value) { SetRules(value); return *this;}

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline RulesConfigurationType& WithRules(Aws::Vector<MappingRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline RulesConfigurationType& AddRules(const MappingRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>An array of rules. You can specify up to 25 rules per identity provider.</p>
     * <p>Rules are evaluated in order. The first one to match specifies the role.</p>
     */
    inline RulesConfigurationType& AddRules(MappingRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<MappingRule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
