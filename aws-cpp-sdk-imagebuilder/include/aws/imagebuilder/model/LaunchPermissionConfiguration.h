/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for a launch permission. The launch permission
   * modification request is sent to the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyImageAttribute.html">Amazon
   * EC2 ModifyImageAttribute</a> API on behalf of the user for each Region they have
   * selected to distribute the AMI. To make an AMI public, set the launch permission
   * authorized accounts to <code>all</code>. See the examples for making an AMI
   * public at <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyImageAttribute.html">Amazon
   * EC2 ModifyImageAttribute</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LaunchPermissionConfiguration">AWS
   * API Reference</a></p>
   */
  class LaunchPermissionConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API LaunchPermissionConfiguration();
    AWS_IMAGEBUILDER_API LaunchPermissionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LaunchPermissionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline LaunchPermissionConfiguration& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline LaunchPermissionConfiguration& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline LaunchPermissionConfiguration& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline LaunchPermissionConfiguration& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline LaunchPermissionConfiguration& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }


    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }

    /**
     * <p>The name of the group.</p>
     */
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermissionConfiguration& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermissionConfiguration& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermissionConfiguration& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermissionConfiguration& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the group.</p>
     */
    inline LaunchPermissionConfiguration& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }


    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationArns() const{ return m_organizationArns; }

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline bool OrganizationArnsHasBeenSet() const { return m_organizationArnsHasBeenSet; }

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline void SetOrganizationArns(const Aws::Vector<Aws::String>& value) { m_organizationArnsHasBeenSet = true; m_organizationArns = value; }

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline void SetOrganizationArns(Aws::Vector<Aws::String>&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns = std::move(value); }

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline LaunchPermissionConfiguration& WithOrganizationArns(const Aws::Vector<Aws::String>& value) { SetOrganizationArns(value); return *this;}

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline LaunchPermissionConfiguration& WithOrganizationArns(Aws::Vector<Aws::String>&& value) { SetOrganizationArns(std::move(value)); return *this;}

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline LaunchPermissionConfiguration& AddOrganizationArns(const Aws::String& value) { m_organizationArnsHasBeenSet = true; m_organizationArns.push_back(value); return *this; }

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline LaunchPermissionConfiguration& AddOrganizationArns(Aws::String&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline LaunchPermissionConfiguration& AddOrganizationArns(const char* value) { m_organizationArnsHasBeenSet = true; m_organizationArns.push_back(value); return *this; }


    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitArns() const{ return m_organizationalUnitArns; }

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline bool OrganizationalUnitArnsHasBeenSet() const { return m_organizationalUnitArnsHasBeenSet; }

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline void SetOrganizationalUnitArns(const Aws::Vector<Aws::String>& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns = value; }

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline void SetOrganizationalUnitArns(Aws::Vector<Aws::String>&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns = std::move(value); }

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline LaunchPermissionConfiguration& WithOrganizationalUnitArns(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitArns(value); return *this;}

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline LaunchPermissionConfiguration& WithOrganizationalUnitArns(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitArns(std::move(value)); return *this;}

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline LaunchPermissionConfiguration& AddOrganizationalUnitArns(const Aws::String& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.push_back(value); return *this; }

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline LaunchPermissionConfiguration& AddOrganizationalUnitArns(Aws::String&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline LaunchPermissionConfiguration& AddOrganizationalUnitArns(const char* value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationArns;
    bool m_organizationArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitArns;
    bool m_organizationalUnitArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
