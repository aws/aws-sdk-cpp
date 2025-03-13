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
    AWS_IMAGEBUILDER_API LaunchPermissionConfiguration() = default;
    AWS_IMAGEBUILDER_API LaunchPermissionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LaunchPermissionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    LaunchPermissionConfiguration& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    LaunchPermissionConfiguration& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const { return m_userGroups; }
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    void SetUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::forward<UserGroupsT>(value); }
    template<typename UserGroupsT = Aws::Vector<Aws::String>>
    LaunchPermissionConfiguration& WithUserGroups(UserGroupsT&& value) { SetUserGroups(std::forward<UserGroupsT>(value)); return *this;}
    template<typename UserGroupsT = Aws::String>
    LaunchPermissionConfiguration& AddUserGroups(UserGroupsT&& value) { m_userGroupsHasBeenSet = true; m_userGroups.emplace_back(std::forward<UserGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN for an Amazon Web Services Organization that you want to share your
     * AMI with. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">What
     * is Organizations?</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationArns() const { return m_organizationArns; }
    inline bool OrganizationArnsHasBeenSet() const { return m_organizationArnsHasBeenSet; }
    template<typename OrganizationArnsT = Aws::Vector<Aws::String>>
    void SetOrganizationArns(OrganizationArnsT&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns = std::forward<OrganizationArnsT>(value); }
    template<typename OrganizationArnsT = Aws::Vector<Aws::String>>
    LaunchPermissionConfiguration& WithOrganizationArns(OrganizationArnsT&& value) { SetOrganizationArns(std::forward<OrganizationArnsT>(value)); return *this;}
    template<typename OrganizationArnsT = Aws::String>
    LaunchPermissionConfiguration& AddOrganizationArns(OrganizationArnsT&& value) { m_organizationArnsHasBeenSet = true; m_organizationArns.emplace_back(std::forward<OrganizationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN for an Organizations organizational unit (OU) that you want to share
     * your AMI with. For more information about key concepts for Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html">Organizations
     * terminology and concepts</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitArns() const { return m_organizationalUnitArns; }
    inline bool OrganizationalUnitArnsHasBeenSet() const { return m_organizationalUnitArnsHasBeenSet; }
    template<typename OrganizationalUnitArnsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitArns(OrganizationalUnitArnsT&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns = std::forward<OrganizationalUnitArnsT>(value); }
    template<typename OrganizationalUnitArnsT = Aws::Vector<Aws::String>>
    LaunchPermissionConfiguration& WithOrganizationalUnitArns(OrganizationalUnitArnsT&& value) { SetOrganizationalUnitArns(std::forward<OrganizationalUnitArnsT>(value)); return *this;}
    template<typename OrganizationalUnitArnsT = Aws::String>
    LaunchPermissionConfiguration& AddOrganizationalUnitArns(OrganizationalUnitArnsT&& value) { m_organizationalUnitArnsHasBeenSet = true; m_organizationalUnitArns.emplace_back(std::forward<OrganizationalUnitArnsT>(value)); return *this; }
    ///@}
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
