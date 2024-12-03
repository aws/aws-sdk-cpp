/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnvironmentDeploymentDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/ProjectStatus.h>
#include <aws/datazone/model/ProjectDeletionError.h>
#include <aws/datazone/model/EnvironmentConfigurationUserParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class UpdateProjectResult
  {
  public:
    AWS_DATAZONE_API UpdateProjectResult();
    AWS_DATAZONE_API UpdateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateProjectResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateProjectResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline UpdateProjectResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline UpdateProjectResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline UpdateProjectResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project that is to be updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateProjectResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateProjectResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateProjectResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a project is
     * updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline UpdateProjectResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateProjectResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateProjectResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitId.assign(value); }
    inline UpdateProjectResult& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline UpdateProjectResult& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline UpdateProjectResult& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment deployment details of the project.</p>
     */
    inline const EnvironmentDeploymentDetails& GetEnvironmentDeploymentDetails() const{ return m_environmentDeploymentDetails; }
    inline void SetEnvironmentDeploymentDetails(const EnvironmentDeploymentDetails& value) { m_environmentDeploymentDetails = value; }
    inline void SetEnvironmentDeploymentDetails(EnvironmentDeploymentDetails&& value) { m_environmentDeploymentDetails = std::move(value); }
    inline UpdateProjectResult& WithEnvironmentDeploymentDetails(const EnvironmentDeploymentDetails& value) { SetEnvironmentDeploymentDetails(value); return *this;}
    inline UpdateProjectResult& WithEnvironmentDeploymentDetails(EnvironmentDeploymentDetails&& value) { SetEnvironmentDeploymentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const Aws::Vector<ProjectDeletionError>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { m_failureReasons = std::move(value); }
    inline UpdateProjectResult& WithFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { SetFailureReasons(value); return *this;}
    inline UpdateProjectResult& WithFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline UpdateProjectResult& AddFailureReasons(const ProjectDeletionError& value) { m_failureReasons.push_back(value); return *this; }
    inline UpdateProjectResult& AddFailureReasons(ProjectDeletionError&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the project that are to be updated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }
    inline UpdateProjectResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline UpdateProjectResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline UpdateProjectResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }
    inline UpdateProjectResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline UpdateProjectResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the project that is to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateProjectResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateProjectResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateProjectResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline UpdateProjectResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline UpdateProjectResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project that is to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateProjectResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProjectResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProjectResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project profile.</p>
     */
    inline const Aws::String& GetProjectProfileId() const{ return m_projectProfileId; }
    inline void SetProjectProfileId(const Aws::String& value) { m_projectProfileId = value; }
    inline void SetProjectProfileId(Aws::String&& value) { m_projectProfileId = std::move(value); }
    inline void SetProjectProfileId(const char* value) { m_projectProfileId.assign(value); }
    inline UpdateProjectResult& WithProjectProfileId(const Aws::String& value) { SetProjectProfileId(value); return *this;}
    inline UpdateProjectResult& WithProjectProfileId(Aws::String&& value) { SetProjectProfileId(std::move(value)); return *this;}
    inline UpdateProjectResult& WithProjectProfileId(const char* value) { SetProjectProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatus = value; }
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatus = std::move(value); }
    inline UpdateProjectResult& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}
    inline UpdateProjectResult& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of the project.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationUserParameter>& GetUserParameters() const{ return m_userParameters; }
    inline void SetUserParameters(const Aws::Vector<EnvironmentConfigurationUserParameter>& value) { m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<EnvironmentConfigurationUserParameter>&& value) { m_userParameters = std::move(value); }
    inline UpdateProjectResult& WithUserParameters(const Aws::Vector<EnvironmentConfigurationUserParameter>& value) { SetUserParameters(value); return *this;}
    inline UpdateProjectResult& WithUserParameters(Aws::Vector<EnvironmentConfigurationUserParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline UpdateProjectResult& AddUserParameters(const EnvironmentConfigurationUserParameter& value) { m_userParameters.push_back(value); return *this; }
    inline UpdateProjectResult& AddUserParameters(EnvironmentConfigurationUserParameter&& value) { m_userParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_domainUnitId;

    EnvironmentDeploymentDetails m_environmentDeploymentDetails;

    Aws::Vector<ProjectDeletionError> m_failureReasons;

    Aws::Vector<Aws::String> m_glossaryTerms;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    Aws::String m_projectProfileId;

    ProjectStatus m_projectStatus;

    Aws::Vector<EnvironmentConfigurationUserParameter> m_userParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
