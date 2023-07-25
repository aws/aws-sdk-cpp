/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Specifies how does the rule-based matching process should match profiles. You
   * can choose from the following attributes to build the matching Rule:</p> <ul>
   * <li> <p>AccountNumber</p> </li> <li> <p>Address.Address</p> </li> <li>
   * <p>Address.City</p> </li> <li> <p>Address.Country</p> </li> <li>
   * <p>Address.County</p> </li> <li> <p>Address.PostalCode</p> </li> <li>
   * <p>Address.State</p> </li> <li> <p>Address.Province</p> </li> <li>
   * <p>BirthDate</p> </li> <li> <p>BusinessName</p> </li> <li> <p>EmailAddress</p>
   * </li> <li> <p>FirstName</p> </li> <li> <p>Gender</p> </li> <li> <p>LastName</p>
   * </li> <li> <p>MiddleName</p> </li> <li> <p>PhoneNumber</p> </li> <li> <p>Any
   * customized profile attributes that start with the <code>Attributes</code> </p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MatchingRule">AWS
   * API Reference</a></p>
   */
  class MatchingRule
  {
  public:
    AWS_CUSTOMERPROFILES_API MatchingRule();
    AWS_CUSTOMERPROFILES_API MatchingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API MatchingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRule() const{ return m_rule; }

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline void SetRule(const Aws::Vector<Aws::String>& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline void SetRule(Aws::Vector<Aws::String>&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline MatchingRule& WithRule(const Aws::Vector<Aws::String>& value) { SetRule(value); return *this;}

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline MatchingRule& WithRule(Aws::Vector<Aws::String>&& value) { SetRule(std::move(value)); return *this;}

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline MatchingRule& AddRule(const Aws::String& value) { m_ruleHasBeenSet = true; m_rule.push_back(value); return *this; }

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline MatchingRule& AddRule(Aws::String&& value) { m_ruleHasBeenSet = true; m_rule.push_back(std::move(value)); return *this; }

    /**
     * <p>A single rule level of the <code>MatchRules</code>. Configures how the
     * rule-based matching process should match profiles.</p>
     */
    inline MatchingRule& AddRule(const char* value) { m_ruleHasBeenSet = true; m_rule.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
