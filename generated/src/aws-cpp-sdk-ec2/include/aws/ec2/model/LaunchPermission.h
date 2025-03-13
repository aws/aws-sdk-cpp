/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PermissionGroup.h>
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
   * <p>Describes a launch permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchPermission">AWS
   * API Reference</a></p>
   */
  class LaunchPermission
  {
  public:
    AWS_EC2_API LaunchPermission() = default;
    AWS_EC2_API LaunchPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p>
     */
    inline const Aws::String& GetOrganizationArn() const { return m_organizationArn; }
    inline bool OrganizationArnHasBeenSet() const { return m_organizationArnHasBeenSet; }
    template<typename OrganizationArnT = Aws::String>
    void SetOrganizationArn(OrganizationArnT&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::forward<OrganizationArnT>(value); }
    template<typename OrganizationArnT = Aws::String>
    LaunchPermission& WithOrganizationArn(OrganizationArnT&& value) { SetOrganizationArn(std::forward<OrganizationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organizational unit (OU).</p>
     */
    inline const Aws::String& GetOrganizationalUnitArn() const { return m_organizationalUnitArn; }
    inline bool OrganizationalUnitArnHasBeenSet() const { return m_organizationalUnitArnHasBeenSet; }
    template<typename OrganizationalUnitArnT = Aws::String>
    void SetOrganizationalUnitArn(OrganizationalUnitArnT&& value) { m_organizationalUnitArnHasBeenSet = true; m_organizationalUnitArn = std::forward<OrganizationalUnitArnT>(value); }
    template<typename OrganizationalUnitArnT = Aws::String>
    LaunchPermission& WithOrganizationalUnitArn(OrganizationalUnitArnT&& value) { SetOrganizationalUnitArn(std::forward<OrganizationalUnitArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p> <p>Constraints: Up to 10 000 account
     * IDs can be specified in a single request.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    LaunchPermission& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline PermissionGroup GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(PermissionGroup value) { m_groupHasBeenSet = true; m_group = value; }
    inline LaunchPermission& WithGroup(PermissionGroup value) { SetGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet = false;

    Aws::String m_organizationalUnitArn;
    bool m_organizationalUnitArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    PermissionGroup m_group{PermissionGroup::NOT_SET};
    bool m_groupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
