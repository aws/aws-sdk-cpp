/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SecurityGroupRuleRequest.h>
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
   * <p>Describes an update to a security group rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupRuleUpdate">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRuleUpdate
  {
  public:
    AWS_EC2_API SecurityGroupRuleUpdate() = default;
    AWS_EC2_API SecurityGroupRuleUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRuleUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the security group rule.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleId() const { return m_securityGroupRuleId; }
    inline bool SecurityGroupRuleIdHasBeenSet() const { return m_securityGroupRuleIdHasBeenSet; }
    template<typename SecurityGroupRuleIdT = Aws::String>
    void SetSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = std::forward<SecurityGroupRuleIdT>(value); }
    template<typename SecurityGroupRuleIdT = Aws::String>
    SecurityGroupRuleUpdate& WithSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { SetSecurityGroupRuleId(std::forward<SecurityGroupRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the security group rule.</p>
     */
    inline const SecurityGroupRuleRequest& GetSecurityGroupRule() const { return m_securityGroupRule; }
    inline bool SecurityGroupRuleHasBeenSet() const { return m_securityGroupRuleHasBeenSet; }
    template<typename SecurityGroupRuleT = SecurityGroupRuleRequest>
    void SetSecurityGroupRule(SecurityGroupRuleT&& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = std::forward<SecurityGroupRuleT>(value); }
    template<typename SecurityGroupRuleT = SecurityGroupRuleRequest>
    SecurityGroupRuleUpdate& WithSecurityGroupRule(SecurityGroupRuleT&& value) { SetSecurityGroupRule(std::forward<SecurityGroupRuleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    SecurityGroupRuleRequest m_securityGroupRule;
    bool m_securityGroupRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
