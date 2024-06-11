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
    AWS_DATAZONE_API GetProjectResult();
    AWS_DATAZONE_API GetProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetProjectResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetProjectResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetProjectResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetProjectResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetProjectResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetProjectResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetProjectResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetProjectResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the project exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetProjectResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetProjectResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetProjectResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const Aws::Vector<ProjectDeletionError>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { m_failureReasons = std::move(value); }
    inline GetProjectResult& WithFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { SetFailureReasons(value); return *this;}
    inline GetProjectResult& WithFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline GetProjectResult& AddFailureReasons(const ProjectDeletionError& value) { m_failureReasons.push_back(value); return *this; }
    inline GetProjectResult& AddFailureReasons(ProjectDeletionError&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The business glossary terms that can be used in the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }
    inline GetProjectResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline GetProjectResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline GetProjectResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }
    inline GetProjectResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline GetProjectResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>&gt;The ID of the project.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetProjectResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetProjectResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetProjectResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetProjectResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetProjectResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetProjectResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetProjectResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetProjectResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project.</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatus = value; }
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatus = std::move(value); }
    inline GetProjectResult& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}
    inline GetProjectResult& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Vector<ProjectDeletionError> m_failureReasons;

    Aws::Vector<Aws::String> m_glossaryTerms;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    ProjectStatus m_projectStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
