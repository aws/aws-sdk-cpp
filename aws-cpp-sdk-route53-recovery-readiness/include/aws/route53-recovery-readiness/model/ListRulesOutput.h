/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * A collection of rules used in a readiness check<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRulesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput
  {
  public:
    ListRulesOutput();
    ListRulesOutput(Aws::Utils::Json::JsonView jsonValue);
    ListRulesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The resource type the rule applies to.
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * The resource type the rule applies to.
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * The resource type the rule applies to.
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * The resource type the rule applies to.
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * The resource type the rule applies to.
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * The resource type the rule applies to.
     */
    inline ListRulesOutput& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * The resource type the rule applies to.
     */
    inline ListRulesOutput& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * The resource type the rule applies to.
     */
    inline ListRulesOutput& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * A description of the rule
     */
    inline const Aws::String& GetRuleDescription() const{ return m_ruleDescription; }

    /**
     * A description of the rule
     */
    inline bool RuleDescriptionHasBeenSet() const { return m_ruleDescriptionHasBeenSet; }

    /**
     * A description of the rule
     */
    inline void SetRuleDescription(const Aws::String& value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription = value; }

    /**
     * A description of the rule
     */
    inline void SetRuleDescription(Aws::String&& value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription = std::move(value); }

    /**
     * A description of the rule
     */
    inline void SetRuleDescription(const char* value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription.assign(value); }

    /**
     * A description of the rule
     */
    inline ListRulesOutput& WithRuleDescription(const Aws::String& value) { SetRuleDescription(value); return *this;}

    /**
     * A description of the rule
     */
    inline ListRulesOutput& WithRuleDescription(Aws::String&& value) { SetRuleDescription(std::move(value)); return *this;}

    /**
     * A description of the rule
     */
    inline ListRulesOutput& WithRuleDescription(const char* value) { SetRuleDescription(value); return *this;}


    /**
     * The Rule's ID.
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * The Rule's ID.
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * The Rule's ID.
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * The Rule's ID.
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * The Rule's ID.
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * The Rule's ID.
     */
    inline ListRulesOutput& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * The Rule's ID.
     */
    inline ListRulesOutput& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * The Rule's ID.
     */
    inline ListRulesOutput& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_ruleDescription;
    bool m_ruleDescriptionHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
