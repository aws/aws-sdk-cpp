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
   * <p>Describes the description of a security group rule.</p> <p>You can use this
   * when you want to update the security group rule description for either an
   * inbound or outbound rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupRuleDescription">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRuleDescription
  {
  public:
    AWS_EC2_API SecurityGroupRuleDescription();
    AWS_EC2_API SecurityGroupRuleDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRuleDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline SecurityGroupRuleDescription& WithSecurityGroupRuleId(const Aws::String& value) { SetSecurityGroupRuleId(value); return *this;}

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline SecurityGroupRuleDescription& WithSecurityGroupRuleId(Aws::String&& value) { SetSecurityGroupRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group rule.</p>
     */
    inline SecurityGroupRuleDescription& WithSecurityGroupRuleId(const char* value) { SetSecurityGroupRuleId(value); return *this;}


    /**
     * <p>The description of the security group rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the security group rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the security group rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the security group rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the security group rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the security group rule.</p>
     */
    inline SecurityGroupRuleDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security group rule.</p>
     */
    inline SecurityGroupRuleDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security group rule.</p>
     */
    inline SecurityGroupRuleDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
