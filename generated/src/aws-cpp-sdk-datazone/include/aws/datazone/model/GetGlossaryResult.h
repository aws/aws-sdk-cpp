/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryStatus.h>
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
  class GetGlossaryResult
  {
  public:
    AWS_DATAZONE_API GetGlossaryResult();
    AWS_DATAZONE_API GetGlossaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetGlossaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when this business glossary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when this business glossary was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when this business glossary was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when this business glossary was created.</p>
     */
    inline GetGlossaryResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when this business glossary was created.</p>
     */
    inline GetGlossaryResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline GetGlossaryResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline GetGlossaryResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created this business glossary.</p>
     */
    inline GetGlossaryResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the business glossary.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the business glossary.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the business glossary.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the business glossary.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the business glossary.</p>
     */
    inline GetGlossaryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the business glossary.</p>
     */
    inline GetGlossaryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the business glossary.</p>
     */
    inline GetGlossaryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline GetGlossaryResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline GetGlossaryResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary
     * exists.</p>
     */
    inline GetGlossaryResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the business glossary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the business glossary.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the business glossary.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the business glossary.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the business glossary.</p>
     */
    inline GetGlossaryResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the business glossary.</p>
     */
    inline GetGlossaryResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the business glossary.</p>
     */
    inline GetGlossaryResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the business glossary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the business glossary.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the business glossary.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the business glossary.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the business glossary.</p>
     */
    inline GetGlossaryResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the business glossary.</p>
     */
    inline GetGlossaryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the business glossary.</p>
     */
    inline GetGlossaryResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline GetGlossaryResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline GetGlossaryResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that owns this business glossary.</p>
     */
    inline GetGlossaryResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The status of the business glossary.</p>
     */
    inline const GlossaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the business glossary.</p>
     */
    inline void SetStatus(const GlossaryStatus& value) { m_status = value; }

    /**
     * <p>The status of the business glossary.</p>
     */
    inline void SetStatus(GlossaryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the business glossary.</p>
     */
    inline GetGlossaryResult& WithStatus(const GlossaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the business glossary.</p>
     */
    inline GetGlossaryResult& WithStatus(GlossaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the business glossary was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the business glossary was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the business glossary was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the business glossary was updated.</p>
     */
    inline GetGlossaryResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the business glossary was updated.</p>
     */
    inline GetGlossaryResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline GetGlossaryResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline GetGlossaryResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the business glossary.</p>
     */
    inline GetGlossaryResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGlossaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGlossaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGlossaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_owningProjectId;

    GlossaryStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
