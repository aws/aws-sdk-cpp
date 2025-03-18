/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
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
  class MappingRule
  {
  public:
    AWS_COGNITOIDENTITY_API MappingRule() = default;
    AWS_COGNITOIDENTITY_API MappingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITY_API MappingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The claim name that must be present in the token, for example, "isAdmin" or
     * "paid".</p>
     */
    inline const Aws::String& GetClaim() const { return m_claim; }
    inline bool ClaimHasBeenSet() const { return m_claimHasBeenSet; }
    template<typename ClaimT = Aws::String>
    void SetClaim(ClaimT&& value) { m_claimHasBeenSet = true; m_claim = std::forward<ClaimT>(value); }
    template<typename ClaimT = Aws::String>
    MappingRule& WithClaim(ClaimT&& value) { SetClaim(std::forward<ClaimT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The match condition that specifies how closely the claim value in the IdP
     * token must match <code>Value</code>.</p>
     */
    inline MappingRuleMatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(MappingRuleMatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline MappingRule& WithMatchType(MappingRuleMatchType value) { SetMatchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief string that the claim must match, for example, "paid" or "yes".</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    MappingRule& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    MappingRule& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_claim;
    bool m_claimHasBeenSet = false;

    MappingRuleMatchType m_matchType{MappingRuleMatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
