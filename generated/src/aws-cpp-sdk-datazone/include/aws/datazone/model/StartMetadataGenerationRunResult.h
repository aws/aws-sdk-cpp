/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationRunStatus.h>
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
  class StartMetadataGenerationRunResult
  {
  public:
    AWS_DATAZONE_API StartMetadataGenerationRunResult();
    AWS_DATAZONE_API StartMetadataGenerationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API StartMetadataGenerationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp at which the metadata generation run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp at which the metadata generation run was started.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp at which the metadata generation run was started.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp at which the metadata generation run was started.</p>
     */
    inline StartMetadataGenerationRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the metadata generation run was started.</p>
     */
    inline StartMetadataGenerationRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The ID of the user who started the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline StartMetadataGenerationRunResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline StartMetadataGenerationRunResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * started.</p>
     */
    inline StartMetadataGenerationRunResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


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
    inline StartMetadataGenerationRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline StartMetadataGenerationRunResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline StartMetadataGenerationRunResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * run was started.</p>
     */
    inline StartMetadataGenerationRunResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


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
    inline StartMetadataGenerationRunResult& WithStatus(const MetadataGenerationRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithStatus(MetadataGenerationRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline const MetadataGenerationRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline void SetType(const MetadataGenerationRunType& value) { m_type = value; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline void SetType(MetadataGenerationRunType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithType(const MetadataGenerationRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline StartMetadataGenerationRunResult& WithType(MetadataGenerationRunType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMetadataGenerationRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMetadataGenerationRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMetadataGenerationRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_domainId;

    Aws::String m_id;

    Aws::String m_owningProjectId;

    MetadataGenerationRunStatus m_status;

    MetadataGenerationRunType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
