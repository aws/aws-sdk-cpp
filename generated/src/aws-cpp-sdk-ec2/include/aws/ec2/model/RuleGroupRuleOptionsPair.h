/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/RuleOption.h>
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
   * <p>Describes the rule options for a stateful rule group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RuleGroupRuleOptionsPair">AWS
   * API Reference</a></p>
   */
  class RuleGroupRuleOptionsPair
  {
  public:
    AWS_EC2_API RuleGroupRuleOptionsPair();
    AWS_EC2_API RuleGroupRuleOptionsPair(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RuleGroupRuleOptionsPair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline RuleGroupRuleOptionsPair& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline RuleGroupRuleOptionsPair& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the rule group.</p>
     */
    inline RuleGroupRuleOptionsPair& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>The rule options.</p>
     */
    inline const Aws::Vector<RuleOption>& GetRuleOptions() const{ return m_ruleOptions; }

    /**
     * <p>The rule options.</p>
     */
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }

    /**
     * <p>The rule options.</p>
     */
    inline void SetRuleOptions(const Aws::Vector<RuleOption>& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = value; }

    /**
     * <p>The rule options.</p>
     */
    inline void SetRuleOptions(Aws::Vector<RuleOption>&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::move(value); }

    /**
     * <p>The rule options.</p>
     */
    inline RuleGroupRuleOptionsPair& WithRuleOptions(const Aws::Vector<RuleOption>& value) { SetRuleOptions(value); return *this;}

    /**
     * <p>The rule options.</p>
     */
    inline RuleGroupRuleOptionsPair& WithRuleOptions(Aws::Vector<RuleOption>&& value) { SetRuleOptions(std::move(value)); return *this;}

    /**
     * <p>The rule options.</p>
     */
    inline RuleGroupRuleOptionsPair& AddRuleOptions(const RuleOption& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(value); return *this; }

    /**
     * <p>The rule options.</p>
     */
    inline RuleGroupRuleOptionsPair& AddRuleOptions(RuleOption&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::Vector<RuleOption> m_ruleOptions;
    bool m_ruleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
