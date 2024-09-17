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
    AWS_DATAZONE_API PolicyGrantPrincipal();
    AWS_DATAZONE_API PolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API PolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain unit of the policy grant principal.</p>
     */
    inline const DomainUnitPolicyGrantPrincipal& GetDomainUnit() const{ return m_domainUnit; }
    inline bool DomainUnitHasBeenSet() const { return m_domainUnitHasBeenSet; }
    inline void SetDomainUnit(const DomainUnitPolicyGrantPrincipal& value) { m_domainUnitHasBeenSet = true; m_domainUnit = value; }
    inline void SetDomainUnit(DomainUnitPolicyGrantPrincipal&& value) { m_domainUnitHasBeenSet = true; m_domainUnit = std::move(value); }
    inline PolicyGrantPrincipal& WithDomainUnit(const DomainUnitPolicyGrantPrincipal& value) { SetDomainUnit(value); return *this;}
    inline PolicyGrantPrincipal& WithDomainUnit(DomainUnitPolicyGrantPrincipal&& value) { SetDomainUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group of the policy grant principal.</p>
     */
    inline const GroupPolicyGrantPrincipal& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const GroupPolicyGrantPrincipal& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(GroupPolicyGrantPrincipal&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline PolicyGrantPrincipal& WithGroup(const GroupPolicyGrantPrincipal& value) { SetGroup(value); return *this;}
    inline PolicyGrantPrincipal& WithGroup(GroupPolicyGrantPrincipal&& value) { SetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project of the policy grant principal.</p>
     */
    inline const ProjectPolicyGrantPrincipal& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const ProjectPolicyGrantPrincipal& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(ProjectPolicyGrantPrincipal&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline PolicyGrantPrincipal& WithProject(const ProjectPolicyGrantPrincipal& value) { SetProject(value); return *this;}
    inline PolicyGrantPrincipal& WithProject(ProjectPolicyGrantPrincipal&& value) { SetProject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user of the policy grant principal.</p>
     */
    inline const UserPolicyGrantPrincipal& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const UserPolicyGrantPrincipal& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(UserPolicyGrantPrincipal&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline PolicyGrantPrincipal& WithUser(const UserPolicyGrantPrincipal& value) { SetUser(value); return *this;}
    inline PolicyGrantPrincipal& WithUser(UserPolicyGrantPrincipal&& value) { SetUser(std::move(value)); return *this;}
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
