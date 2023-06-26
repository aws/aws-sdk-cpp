/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the type of a stateful rule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RuleGroupTypePair">AWS
   * API Reference</a></p>
   */
  class RuleGroupTypePair
  {
  public:
    AWS_EC2_API RuleGroupTypePair();
    AWS_EC2_API RuleGroupTypePair(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RuleGroupTypePair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline RuleGroupTypePair& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline RuleGroupTypePair& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline RuleGroupTypePair& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline const Aws::String& GetRuleGroupType() const{ return m_ruleGroupType; }

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline bool RuleGroupTypeHasBeenSet() const { return m_ruleGroupTypeHasBeenSet; }

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline void SetRuleGroupType(const Aws::String& value) { m_ruleGroupTypeHasBeenSet = true; m_ruleGroupType = value; }

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline void SetRuleGroupType(Aws::String&& value) { m_ruleGroupTypeHasBeenSet = true; m_ruleGroupType = std::move(value); }

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline void SetRuleGroupType(const char* value) { m_ruleGroupTypeHasBeenSet = true; m_ruleGroupType.assign(value); }

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline RuleGroupTypePair& WithRuleGroupType(const Aws::String& value) { SetRuleGroupType(value); return *this;}

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline RuleGroupTypePair& WithRuleGroupType(Aws::String&& value) { SetRuleGroupType(std::move(value)); return *this;}

    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline RuleGroupTypePair& WithRuleGroupType(const char* value) { SetRuleGroupType(value); return *this;}

  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::String m_ruleGroupType;
    bool m_ruleGroupTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
