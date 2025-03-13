/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainUnitPolicyGrantPrincipal.h>
#include <aws/datazone/model/GroupPolicyGrantPrincipal.h>
#include <aws/datazone/model/ProjectPolicyGrantPrincipal.h>
#include <aws/datazone/model/UserPolicyGrantPrincipal.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The policy grant principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/PolicyGrantPrincipal">AWS
   * API Reference</a></p>
   */
  class PolicyGrantPrincipal
  {
  public:
    AWS_DATAZONE_API PolicyGrantPrincipal() = default;
    AWS_DATAZONE_API PolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain unit of the policy grant principal.</p>
     */
    inline const DomainUnitPolicyGrantPrincipal& GetDomainUnit() const { return m_domainUnit; }
    inline bool DomainUnitHasBeenSet() const { return m_domainUnitHasBeenSet; }
    template<typename DomainUnitT = DomainUnitPolicyGrantPrincipal>
    void SetDomainUnit(DomainUnitT&& value) { m_domainUnitHasBeenSet = true; m_domainUnit = std::forward<DomainUnitT>(value); }
    template<typename DomainUnitT = DomainUnitPolicyGrantPrincipal>
    PolicyGrantPrincipal& WithDomainUnit(DomainUnitT&& value) { SetDomainUnit(std::forward<DomainUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group of the policy grant principal.</p>
     */
    inline const GroupPolicyGrantPrincipal& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = GroupPolicyGrantPrincipal>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = GroupPolicyGrantPrincipal>
    PolicyGrantPrincipal& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project of the policy grant principal.</p>
     */
    inline const ProjectPolicyGrantPrincipal& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = ProjectPolicyGrantPrincipal>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = ProjectPolicyGrantPrincipal>
    PolicyGrantPrincipal& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user of the policy grant principal.</p>
     */
    inline const UserPolicyGrantPrincipal& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = UserPolicyGrantPrincipal>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = UserPolicyGrantPrincipal>
    PolicyGrantPrincipal& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    DomainUnitPolicyGrantPrincipal m_domainUnit;
    bool m_domainUnitHasBeenSet = false;

    GroupPolicyGrantPrincipal m_group;
    bool m_groupHasBeenSet = false;

    ProjectPolicyGrantPrincipal m_project;
    bool m_projectHasBeenSet = false;

    UserPolicyGrantPrincipal m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
