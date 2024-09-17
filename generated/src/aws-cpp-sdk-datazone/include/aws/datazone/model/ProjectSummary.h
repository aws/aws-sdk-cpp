/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/ProjectStatus.h>
#include <aws/datazone/model/ProjectDeletionError.h>
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
   * <p>The details of a Amazon DataZone project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class ProjectSummary
  {
  public:
    AWS_DATAZONE_API ProjectSummary();
    AWS_DATAZONE_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when a project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ProjectSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ProjectSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline ProjectSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline ProjectSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ProjectSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProjectSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProjectSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProjectSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Amazon DataZone domain where the project exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline ProjectSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline ProjectSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline ProjectSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId.assign(value); }
    inline ProjectSummary& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline ProjectSummary& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline ProjectSummary& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const Aws::Vector<ProjectDeletionError>& GetFailureReasons() const{ return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    inline void SetFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }
    inline ProjectSummary& WithFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { SetFailureReasons(value); return *this;}
    inline ProjectSummary& WithFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline ProjectSummary& AddFailureReasons(const ProjectDeletionError& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }
    inline ProjectSummary& AddFailureReasons(ProjectDeletionError&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a project.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProjectSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProjectSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProjectSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProjectSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProjectSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProjectSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }
    inline bool ProjectStatusHasBeenSet() const { return m_projectStatusHasBeenSet; }
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatusHasBeenSet = true; m_projectStatus = value; }
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatusHasBeenSet = true; m_projectStatus = std::move(value); }
    inline ProjectSummary& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}
    inline ProjectSummary& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the project was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ProjectSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ProjectSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;

    Aws::Vector<ProjectDeletionError> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProjectStatus m_projectStatus;
    bool m_projectStatusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
