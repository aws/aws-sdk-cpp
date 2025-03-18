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
    AWS_EC2_API RuleGroupTypePair() = default;
    AWS_EC2_API RuleGroupTypePair(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RuleGroupTypePair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    RuleGroupTypePair& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule group type. The possible values are <code>Domain List</code> and
     * <code>Suricata</code>.</p>
     */
    inline const Aws::String& GetRuleGroupType() const { return m_ruleGroupType; }
    inline bool RuleGroupTypeHasBeenSet() const { return m_ruleGroupTypeHasBeenSet; }
    template<typename RuleGroupTypeT = Aws::String>
    void SetRuleGroupType(RuleGroupTypeT&& value) { m_ruleGroupTypeHasBeenSet = true; m_ruleGroupType = std::forward<RuleGroupTypeT>(value); }
    template<typename RuleGroupTypeT = Aws::String>
    RuleGroupTypePair& WithRuleGroupType(RuleGroupTypeT&& value) { SetRuleGroupType(std::forward<RuleGroupTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::String m_ruleGroupType;
    bool m_ruleGroupTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
