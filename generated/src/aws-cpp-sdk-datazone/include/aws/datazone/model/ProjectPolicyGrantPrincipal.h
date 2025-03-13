/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ProjectDesignation.h>
#include <aws/datazone/model/ProjectGrantFilter.h>
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
   * <p>The project policy grant principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectPolicyGrantPrincipal">AWS
   * API Reference</a></p>
   */
  class ProjectPolicyGrantPrincipal
  {
  public:
    AWS_DATAZONE_API ProjectPolicyGrantPrincipal() = default;
    AWS_DATAZONE_API ProjectPolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectPolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The project designation of the project policy grant principal.</p>
     */
    inline ProjectDesignation GetProjectDesignation() const { return m_projectDesignation; }
    inline bool ProjectDesignationHasBeenSet() const { return m_projectDesignationHasBeenSet; }
    inline void SetProjectDesignation(ProjectDesignation value) { m_projectDesignationHasBeenSet = true; m_projectDesignation = value; }
    inline ProjectPolicyGrantPrincipal& WithProjectDesignation(ProjectDesignation value) { SetProjectDesignation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project grant filter of the project policy grant principal.</p>
     */
    inline const ProjectGrantFilter& GetProjectGrantFilter() const { return m_projectGrantFilter; }
    inline bool ProjectGrantFilterHasBeenSet() const { return m_projectGrantFilterHasBeenSet; }
    template<typename ProjectGrantFilterT = ProjectGrantFilter>
    void SetProjectGrantFilter(ProjectGrantFilterT&& value) { m_projectGrantFilterHasBeenSet = true; m_projectGrantFilter = std::forward<ProjectGrantFilterT>(value); }
    template<typename ProjectGrantFilterT = ProjectGrantFilter>
    ProjectPolicyGrantPrincipal& WithProjectGrantFilter(ProjectGrantFilterT&& value) { SetProjectGrantFilter(std::forward<ProjectGrantFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project ID of the project policy grant principal.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    template<typename ProjectIdentifierT = Aws::String>
    void SetProjectIdentifier(ProjectIdentifierT&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::forward<ProjectIdentifierT>(value); }
    template<typename ProjectIdentifierT = Aws::String>
    ProjectPolicyGrantPrincipal& WithProjectIdentifier(ProjectIdentifierT&& value) { SetProjectIdentifier(std::forward<ProjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    ProjectDesignation m_projectDesignation{ProjectDesignation::NOT_SET};
    bool m_projectDesignationHasBeenSet = false;

    ProjectGrantFilter m_projectGrantFilter;
    bool m_projectGrantFilterHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
