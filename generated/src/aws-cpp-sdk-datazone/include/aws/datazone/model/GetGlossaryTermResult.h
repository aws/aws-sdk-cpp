/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryTermStatus.h>
#include <aws/datazone/model/TermRelations.h>
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
  class GetGlossaryTermResult
  {
  public:
    AWS_DATAZONE_API GetGlossaryTermResult();
    AWS_DATAZONE_API GetGlossaryTermResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetGlossaryTermResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the business glossary term was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetGlossaryTermResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetGlossaryTermResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetGlossaryTermResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetGlossaryTermResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary term
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetGlossaryTermResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetGlossaryTermResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the business glossary to which this term belongs.</p>
     */
    inline const Aws::String& GetGlossaryId() const{ return m_glossaryId; }
    inline void SetGlossaryId(const Aws::String& value) { m_glossaryId = value; }
    inline void SetGlossaryId(Aws::String&& value) { m_glossaryId = std::move(value); }
    inline void SetGlossaryId(const char* value) { m_glossaryId.assign(value); }
    inline GetGlossaryTermResult& WithGlossaryId(const Aws::String& value) { SetGlossaryId(value); return *this;}
    inline GetGlossaryTermResult& WithGlossaryId(Aws::String&& value) { SetGlossaryId(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithGlossaryId(const char* value) { SetGlossaryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the business glossary term.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetGlossaryTermResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetGlossaryTermResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }
    inline void SetLongDescription(const Aws::String& value) { m_longDescription = value; }
    inline void SetLongDescription(Aws::String&& value) { m_longDescription = std::move(value); }
    inline void SetLongDescription(const char* value) { m_longDescription.assign(value); }
    inline GetGlossaryTermResult& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}
    inline GetGlossaryTermResult& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the business glossary term.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetGlossaryTermResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetGlossaryTermResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short decription of the business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }
    inline void SetShortDescription(const Aws::String& value) { m_shortDescription = value; }
    inline void SetShortDescription(Aws::String&& value) { m_shortDescription = std::move(value); }
    inline void SetShortDescription(const char* value) { m_shortDescription.assign(value); }
    inline GetGlossaryTermResult& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}
    inline GetGlossaryTermResult& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the business glossary term.</p>
     */
    inline const GlossaryTermStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const GlossaryTermStatus& value) { m_status = value; }
    inline void SetStatus(GlossaryTermStatus&& value) { m_status = std::move(value); }
    inline GetGlossaryTermResult& WithStatus(const GlossaryTermStatus& value) { SetStatus(value); return *this;}
    inline GetGlossaryTermResult& WithStatus(GlossaryTermStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const{ return m_termRelations; }
    inline void SetTermRelations(const TermRelations& value) { m_termRelations = value; }
    inline void SetTermRelations(TermRelations&& value) { m_termRelations = std::move(value); }
    inline GetGlossaryTermResult& WithTermRelations(const TermRelations& value) { SetTermRelations(value); return *this;}
    inline GetGlossaryTermResult& WithTermRelations(TermRelations&& value) { SetTermRelations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the business glossary term was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetGlossaryTermResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetGlossaryTermResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetGlossaryTermResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetGlossaryTermResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGlossaryTermResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGlossaryTermResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGlossaryTermResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    Aws::String m_glossaryId;

    Aws::String m_id;

    Aws::String m_longDescription;

    Aws::String m_name;

    Aws::String m_shortDescription;

    GlossaryTermStatus m_status;

    TermRelations m_termRelations;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
