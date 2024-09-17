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
    AWS_DATAZONE_API ProjectPolicyGrantPrincipal();
    AWS_DATAZONE_API ProjectPolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectPolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The project designation of the project policy grant principal.</p>
     */
    inline const ProjectDesignation& GetProjectDesignation() const{ return m_projectDesignation; }
    inline bool ProjectDesignationHasBeenSet() const { return m_projectDesignationHasBeenSet; }
    inline void SetProjectDesignation(const ProjectDesignation& value) { m_projectDesignationHasBeenSet = true; m_projectDesignation = value; }
    inline void SetProjectDesignation(ProjectDesignation&& value) { m_projectDesignationHasBeenSet = true; m_projectDesignation = std::move(value); }
    inline ProjectPolicyGrantPrincipal& WithProjectDesignation(const ProjectDesignation& value) { SetProjectDesignation(value); return *this;}
    inline ProjectPolicyGrantPrincipal& WithProjectDesignation(ProjectDesignation&& value) { SetProjectDesignation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project grant filter of the project policy grant principal.</p>
     */
    inline const ProjectGrantFilter& GetProjectGrantFilter() const{ return m_projectGrantFilter; }
    inline bool ProjectGrantFilterHasBeenSet() const { return m_projectGrantFilterHasBeenSet; }
    inline void SetProjectGrantFilter(const ProjectGrantFilter& value) { m_projectGrantFilterHasBeenSet = true; m_projectGrantFilter = value; }
    inline void SetProjectGrantFilter(ProjectGrantFilter&& value) { m_projectGrantFilterHasBeenSet = true; m_projectGrantFilter = std::move(value); }
    inline ProjectPolicyGrantPrincipal& WithProjectGrantFilter(const ProjectGrantFilter& value) { SetProjectGrantFilter(value); return *this;}
    inline ProjectPolicyGrantPrincipal& WithProjectGrantFilter(ProjectGrantFilter&& value) { SetProjectGrantFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project ID of the project policy grant principal.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }
    inline ProjectPolicyGrantPrincipal& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}
    inline ProjectPolicyGrantPrincipal& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}
    inline ProjectPolicyGrantPrincipal& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}
    ///@}
  private:

    ProjectDesignation m_projectDesignation;
    bool m_projectDesignationHasBeenSet = false;

    ProjectGrantFilter m_projectGrantFilter;
    bool m_projectGrantFilterHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
