/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationRunStatus.h>
#include <aws/datazone/model/MetadataGenerationRunTarget.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>
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
  class GetMetadataGenerationRunResult
  {
  public:
    AWS_DATAZONE_API GetMetadataGenerationRunResult();
    AWS_DATAZONE_API GetMetadataGenerationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetMetadataGenerationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the metadata generation run was start.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the metadata generation run was start.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the metadata generation run was start.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the metadata generation run was start.</p>
     */
    inline GetMetadataGenerationRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the metadata generation run was start.</p>
     */
    inline GetMetadataGenerationRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who started the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline GetMetadataGenerationRunResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline GetMetadataGenerationRunResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
     * want to get.</p>
     */
    inline GetMetadataGenerationRunResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline GetMetadataGenerationRunResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline GetMetadataGenerationRunResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that owns the assets for which you're running metadata
     * generation.</p>
     */
    inline GetMetadataGenerationRunResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline const MetadataGenerationRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline void SetStatus(const MetadataGenerationRunStatus& value) { m_status = value; }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline void SetStatus(MetadataGenerationRunStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithStatus(const MetadataGenerationRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithStatus(MetadataGenerationRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The asset for which you're generating metadata.</p>
     */
    inline const MetadataGenerationRunTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The asset for which you're generating metadata.</p>
     */
    inline void SetTarget(const MetadataGenerationRunTarget& value) { m_target = value; }

    /**
     * <p>The asset for which you're generating metadata.</p>
     */
    inline void SetTarget(MetadataGenerationRunTarget&& value) { m_target = std::move(value); }

    /**
     * <p>The asset for which you're generating metadata.</p>
     */
    inline GetMetadataGenerationRunResult& WithTarget(const MetadataGenerationRunTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The asset for which you're generating metadata.</p>
     */
    inline GetMetadataGenerationRunResult& WithTarget(MetadataGenerationRunTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The type of metadata generation run.</p>
     */
    inline const MetadataGenerationRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of metadata generation run.</p>
     */
    inline void SetType(const MetadataGenerationRunType& value) { m_type = value; }

    /**
     * <p>The type of metadata generation run.</p>
     */
    inline void SetType(MetadataGenerationRunType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithType(const MetadataGenerationRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of metadata generation run.</p>
     */
    inline GetMetadataGenerationRunResult& WithType(MetadataGenerationRunType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMetadataGenerationRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMetadataGenerationRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMetadataGenerationRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    Aws::String m_id;

    Aws::String m_owningProjectId;

    MetadataGenerationRunStatus m_status;

    MetadataGenerationRunTarget m_target;

    MetadataGenerationRunType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
