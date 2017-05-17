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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-identity/model/MappingRuleMatchType.h>
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
   * <p>A rule that maps a claim name, a claim value, and a match type to a role
   * ARN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/MappingRule">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API MappingRule
  {
  public:
    MappingRule();
    MappingRule(const Aws::Utils::Json::JsonValue& jsonValue);
    MappingRule& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline const Aws::String& GetClaim() const{ return m_claim; }

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline void SetClaim(const Aws::String& value) { m_claimHasBeenSet = true; m_claim = value; }

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline void SetClaim(Aws::String&& value) { m_claimHasBeenSet = true; m_claim = std::move(value); }

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline void SetClaim(const char* value) { m_claimHasBeenSet = true; m_claim.assign(value); }

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline MappingRule& WithClaim(const Aws::String& value) { SetClaim(value); return *this;}

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline MappingRule& WithClaim(Aws::String&& value) { SetClaim(std::move(value)); return *this;}

    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline MappingRule& WithClaim(const char* value) { SetClaim(value); return *this;}

    /**
     * <p>The match condition that specifies how closely the claim value in the IdP
     * token must match <code>Value</code>.</p>
     */
    inline const MappingRuleMatchType& GetMatchType() const{ return m_matchType; }

    /**
     * <p>The match condition that specifies how closely the claim value in the IdP
     * token must match <code>Value</code>.</p>
     */
    inline void SetMatchType(const MappingRuleMatchType& value) { m_matchTypeHasBeenSet = true; m_matchType = value; }

    /**
     * <p>The match condition that specifies how closely the claim value in the IdP
     * token must match <code>Value</code>.</p>
     */
    inline void SetMatchType(MappingRuleMatchType&& value) { m_matchTypeHasBeenSet = true; m_matchType = std::move(value); }

    /**
     * <p>The match condition that specifies how closely the claim value in the IdP
     * token must match <code>Value</code>.</p>
     */
    inline MappingRule& WithMatchType(const MappingRuleMatchType& value) { SetMatchType(value); return *this;}

    /**
     * <p>The match condition that specifies how closely the claim value in the IdP
     * token must match <code>Value</code>.</p>
     */
    inline MappingRule& WithMatchType(MappingRuleMatchType&& value) { SetMatchType(std::move(value)); return *this;}

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline MappingRule& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline MappingRule& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline MappingRule& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The role ARN.</p>
     */
    inline MappingRule& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline MappingRule& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline MappingRule& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:
    Aws::String m_claim;
    bool m_claimHasBeenSet;
    MappingRuleMatchType m_matchType;
    bool m_matchTypeHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
