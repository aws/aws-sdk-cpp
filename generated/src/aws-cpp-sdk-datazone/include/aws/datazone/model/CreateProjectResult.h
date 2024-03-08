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
  class CreateProjectResult
  {
  public:
    AWS_DATAZONE_API CreateProjectResult();
    AWS_DATAZONE_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline CreateProjectResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the project was created.</p>
     */
    inline CreateProjectResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline CreateProjectResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline CreateProjectResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the project.</p>
     */
    inline CreateProjectResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline CreateProjectResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline CreateProjectResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline CreateProjectResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline CreateProjectResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline CreateProjectResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the project was
     * created.</p>
     */
    inline CreateProjectResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline const Aws::Vector<ProjectDeletionError>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline void SetFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { m_failureReasons = value; }

    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline void SetFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { m_failureReasons = std::move(value); }

    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline CreateProjectResult& WithFailureReasons(const Aws::Vector<ProjectDeletionError>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline CreateProjectResult& WithFailureReasons(Aws::Vector<ProjectDeletionError>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline CreateProjectResult& AddFailureReasons(const ProjectDeletionError& value) { m_failureReasons.push_back(value); return *this; }

    /**
     * <p>Reasons for failed project deletion</p>
     */
    inline CreateProjectResult& AddFailureReasons(ProjectDeletionError&& value) { m_failureReasons.push_back(std::move(value)); return *this; }


    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline CreateProjectResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline CreateProjectResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline CreateProjectResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline CreateProjectResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }

    /**
     * <p>The glossary terms that can be used in the project.</p>
     */
    inline CreateProjectResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline CreateProjectResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline CreateProjectResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project.</p>
     */
    inline CreateProjectResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline CreateProjectResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the project was last updated.</p>
     */
    inline CreateProjectResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline CreateProjectResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline CreateProjectResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline CreateProjectResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Status of the project</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }

    /**
     * <p>Status of the project</p>
     */
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatus = value; }

    /**
     * <p>Status of the project</p>
     */
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatus = std::move(value); }

    /**
     * <p>Status of the project</p>
     */
    inline CreateProjectResult& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}

    /**
     * <p>Status of the project</p>
     */
    inline CreateProjectResult& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
