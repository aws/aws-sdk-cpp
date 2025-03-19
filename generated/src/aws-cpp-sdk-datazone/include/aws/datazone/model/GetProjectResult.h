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
  class GetProjectResult
  {
  public:
    AWS_DATAZONE_API GetProjectResult() = default;
    AWS_DATAZONE_API GetProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetProjectResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetProjectResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetProjectResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the project exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetProjectResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
    template<typename DomainUnitIdT = Aws::String>
    void SetDomainUnitId(DomainUnitIdT&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::forward<DomainUnitIdT>(value); }
    template<typename DomainUnitIdT = Aws::String>
    GetProjectResult& WithDomainUnitId(DomainUnitIdT&& value) { SetDomainUnitId(std::forward<DomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment deployment status of a project.</p>
     */
    inline const EnvironmentDeploymentDetails& GetEnvironmentDeploymentDetails() const { return m_environmentDeploymentDetails; }
    template<typename EnvironmentDeploymentDetailsT = EnvironmentDeploymentDetails>
    void SetEnvironmentDeploymentDetails(EnvironmentDeploymentDetailsT&& value) { m_environmentDeploymentDetailsHasBeenSet = true; m_environmentDeploymentDetails = std::forward<EnvironmentDeploymentDetailsT>(value); }
    template<typename EnvironmentDeploymentDetailsT = EnvironmentDeploymentDetails>
    GetProjectResult& WithEnvironmentDeploymentDetails(EnvironmentDeploymentDetailsT&& value) { SetEnvironmentDeploymentDetails(std::forward<EnvironmentDeploymentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const Aws::Vector<ProjectDeletionError>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<ProjectDeletionError>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<ProjectDeletionError>>
    GetProjectResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = ProjectDeletionError>
    GetProjectResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The business glossary terms that can be used in the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    GetProjectResult& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    GetProjectResult& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>&gt;The ID of the project.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetProjectResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetProjectResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetProjectResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project profile of a project.</p>
     */
    inline const Aws::String& GetProjectProfileId() const { return m_projectProfileId; }
    template<typename ProjectProfileIdT = Aws::String>
    void SetProjectProfileId(ProjectProfileIdT&& value) { m_projectProfileIdHasBeenSet = true; m_projectProfileId = std::forward<ProjectProfileIdT>(value); }
    template<typename ProjectProfileIdT = Aws::String>
    GetProjectResult& WithProjectProfileId(ProjectProfileIdT&& value) { SetProjectProfileId(std::forward<ProjectProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline ProjectStatus GetProjectStatus() const { return m_projectStatus; }
    inline void SetProjectStatus(ProjectStatus value) { m_projectStatusHasBeenSet = true; m_projectStatus = value; }
    inline GetProjectResult& WithProjectStatus(ProjectStatus value) { SetProjectStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of a project.</p>
     */
    inline const Aws::Vector<EnvironmentConfigurationUserParameter>& GetUserParameters() const { return m_userParameters; }
    template<typename UserParametersT = Aws::Vector<EnvironmentConfigurationUserParameter>>
    void SetUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::forward<UserParametersT>(value); }
    template<typename UserParametersT = Aws::Vector<EnvironmentConfigurationUserParameter>>
    GetProjectResult& WithUserParameters(UserParametersT&& value) { SetUserParameters(std::forward<UserParametersT>(value)); return *this;}
    template<typename UserParametersT = EnvironmentConfigurationUserParameter>
    GetProjectResult& AddUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters.emplace_back(std::forward<UserParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;

    EnvironmentDeploymentDetails m_environmentDeploymentDetails;
    bool m_environmentDeploymentDetailsHasBeenSet = false;

    Aws::Vector<ProjectDeletionError> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectProfileId;
    bool m_projectProfileIdHasBeenSet = false;

    ProjectStatus m_projectStatus{ProjectStatus::NOT_SET};
    bool m_projectStatusHasBeenSet = false;

    Aws::Vector<EnvironmentConfigurationUserParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
