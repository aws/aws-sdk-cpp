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
    AWS_EC2_API SecurityGroupRuleUpdate();
    AWS_EC2_API SecurityGroupRuleUpdate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRuleUpdate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the security group rule.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleId() const{ return m_securityGroupRuleId; }

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline bool SecurityGroupRuleIdHasBeenSet() const { return m_securityGroupRuleIdHasBeenSet; }

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline void SetSecurityGroupRuleId(const Aws::String& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = value; }

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline void SetSecurityGroupRuleId(Aws::String&& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = std::move(value); }

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline void SetSecurityGroupRuleId(const char* value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId.assign(value); }

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline SecurityGroupRuleUpdate& WithSecurityGroupRuleId(const Aws::String& value) { SetSecurityGroupRuleId(value); return *this;}

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline SecurityGroupRuleUpdate& WithSecurityGroupRuleId(Aws::String&& value) { SetSecurityGroupRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline SecurityGroupRuleUpdate& WithSecurityGroupRuleId(const char* value) { SetSecurityGroupRuleId(value); return *this;}


    /**
     * <p>Information about the security group rule.</p>
     */
    inline const SecurityGroupRuleRequest& GetSecurityGroupRule() const{ return m_securityGroupRule; }

    /**
     * <p>Information about the security group rule.</p>
     */
    inline bool SecurityGroupRuleHasBeenSet() const { return m_securityGroupRuleHasBeenSet; }

    /**
     * <p>Information about the security group rule.</p>
     */
    inline void SetSecurityGroupRule(const SecurityGroupRuleRequest& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = value; }

    /**
     * <p>Information about the security group rule.</p>
     */
    inline void SetSecurityGroupRule(SecurityGroupRuleRequest&& value) { m_securityGroupRuleHasBeenSet = true; m_securityGroupRule = std::move(value); }

    /**
     * <p>Information about the security group rule.</p>
     */
    inline SecurityGroupRuleUpdate& WithSecurityGroupRule(const SecurityGroupRuleRequest& value) { SetSecurityGroupRule(value); return *this;}

    /**
     * <p>Information about the security group rule.</p>
     */
    inline SecurityGroupRuleUpdate& WithSecurityGroupRule(SecurityGroupRuleRequest&& value) { SetSecurityGroupRule(std::move(value)); return *this;}

  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    SecurityGroupRuleRequest m_securityGroupRule;
    bool m_securityGroupRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
