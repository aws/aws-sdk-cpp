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
    AWS_EC2_API RuleGroupRuleOptionsPair() = default;
    AWS_EC2_API RuleGroupRuleOptionsPair(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RuleGroupRuleOptionsPair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    RuleGroupRuleOptionsPair& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule options.</p>
     */
    inline const Aws::Vector<RuleOption>& GetRuleOptions() const { return m_ruleOptions; }
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }
    template<typename RuleOptionsT = Aws::Vector<RuleOption>>
    void SetRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::forward<RuleOptionsT>(value); }
    template<typename RuleOptionsT = Aws::Vector<RuleOption>>
    RuleGroupRuleOptionsPair& WithRuleOptions(RuleOptionsT&& value) { SetRuleOptions(std::forward<RuleOptionsT>(value)); return *this;}
    template<typename RuleOptionsT = RuleOption>
    RuleGroupRuleOptionsPair& AddRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.emplace_back(std::forward<RuleOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::Vector<RuleOption> m_ruleOptions;
    bool m_ruleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
