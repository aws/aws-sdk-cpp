/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>Specifies whether to create a project from project profile policy grant
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/CreateProjectFromProjectProfilePolicyGrantDetail">AWS
   * API Reference</a></p>
   */
  class CreateProjectFromProjectProfilePolicyGrantDetail
  {
  public:
    AWS_DATAZONE_API CreateProjectFromProjectProfilePolicyGrantDetail() = default;
    AWS_DATAZONE_API CreateProjectFromProjectProfilePolicyGrantDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API CreateProjectFromProjectProfilePolicyGrantDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to include child domain units when creating a project from
     * project profile policy grant details</p>
     */
    inline bool GetIncludeChildDomainUnits() const { return m_includeChildDomainUnits; }
    inline bool IncludeChildDomainUnitsHasBeenSet() const { return m_includeChildDomainUnitsHasBeenSet; }
    inline void SetIncludeChildDomainUnits(bool value) { m_includeChildDomainUnitsHasBeenSet = true; m_includeChildDomainUnits = value; }
    inline CreateProjectFromProjectProfilePolicyGrantDetail& WithIncludeChildDomainUnits(bool value) { SetIncludeChildDomainUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies project profiles when creating a project from project profile
     * policy grant details</p>
     */
    inline const Aws::Vector<Aws::String>& GetProjectProfiles() const { return m_projectProfiles; }
    inline bool ProjectProfilesHasBeenSet() const { return m_projectProfilesHasBeenSet; }
    template<typename ProjectProfilesT = Aws::Vector<Aws::String>>
    void SetProjectProfiles(ProjectProfilesT&& value) { m_projectProfilesHasBeenSet = true; m_projectProfiles = std::forward<ProjectProfilesT>(value); }
    template<typename ProjectProfilesT = Aws::Vector<Aws::String>>
    CreateProjectFromProjectProfilePolicyGrantDetail& WithProjectProfiles(ProjectProfilesT&& value) { SetProjectProfiles(std::forward<ProjectProfilesT>(value)); return *this;}
    template<typename ProjectProfilesT = Aws::String>
    CreateProjectFromProjectProfilePolicyGrantDetail& AddProjectProfiles(ProjectProfilesT&& value) { m_projectProfilesHasBeenSet = true; m_projectProfiles.emplace_back(std::forward<ProjectProfilesT>(value)); return *this; }
    ///@}
  private:

    bool m_includeChildDomainUnits{false};
    bool m_includeChildDomainUnitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_projectProfiles;
    bool m_projectProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
