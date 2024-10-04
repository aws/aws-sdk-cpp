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
    AWS_EC2_API LaunchPermission();
    AWS_EC2_API LaunchPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p>
     */
    inline const Aws::String& GetOrganizationArn() const{ return m_organizationArn; }
    inline bool OrganizationArnHasBeenSet() const { return m_organizationArnHasBeenSet; }
    inline void SetOrganizationArn(const Aws::String& value) { m_organizationArnHasBeenSet = true; m_organizationArn = value; }
    inline void SetOrganizationArn(Aws::String&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::move(value); }
    inline void SetOrganizationArn(const char* value) { m_organizationArnHasBeenSet = true; m_organizationArn.assign(value); }
    inline LaunchPermission& WithOrganizationArn(const Aws::String& value) { SetOrganizationArn(value); return *this;}
    inline LaunchPermission& WithOrganizationArn(Aws::String&& value) { SetOrganizationArn(std::move(value)); return *this;}
    inline LaunchPermission& WithOrganizationArn(const char* value) { SetOrganizationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organizational unit (OU).</p>
     */
    inline const Aws::String& GetOrganizationalUnitArn() const{ return m_organizationalUnitArn; }
    inline bool OrganizationalUnitArnHasBeenSet() const { return m_organizationalUnitArnHasBeenSet; }
    inline void SetOrganizationalUnitArn(const Aws::String& value) { m_organizationalUnitArnHasBeenSet = true; m_organizationalUnitArn = value; }
    inline void SetOrganizationalUnitArn(Aws::String&& value) { m_organizationalUnitArnHasBeenSet = true; m_organizationalUnitArn = std::move(value); }
    inline void SetOrganizationalUnitArn(const char* value) { m_organizationalUnitArnHasBeenSet = true; m_organizationalUnitArn.assign(value); }
    inline LaunchPermission& WithOrganizationalUnitArn(const Aws::String& value) { SetOrganizationalUnitArn(value); return *this;}
    inline LaunchPermission& WithOrganizationalUnitArn(Aws::String&& value) { SetOrganizationalUnitArn(std::move(value)); return *this;}
    inline LaunchPermission& WithOrganizationalUnitArn(const char* value) { SetOrganizationalUnitArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p> <p>Constraints: Up to 10 000 account
     * IDs can be specified in a single request.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline LaunchPermission& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline LaunchPermission& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline LaunchPermission& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const PermissionGroup& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const PermissionGroup& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(PermissionGroup&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline LaunchPermission& WithGroup(const PermissionGroup& value) { SetGroup(value); return *this;}
    inline LaunchPermission& WithGroup(PermissionGroup&& value) { SetGroup(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet = false;

    Aws::String m_organizationalUnitArn;
    bool m_organizationalUnitArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    PermissionGroup m_group;
    bool m_groupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
