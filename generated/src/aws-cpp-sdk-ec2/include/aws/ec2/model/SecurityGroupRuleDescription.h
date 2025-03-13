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
    AWS_EC2_API SecurityGroupRuleDescription() = default;
    AWS_EC2_API SecurityGroupRuleDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRuleDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    SecurityGroupRuleDescription& WithSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { SetSecurityGroupRuleId(std::forward<SecurityGroupRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security group rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SecurityGroupRuleDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
