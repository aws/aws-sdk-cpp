/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/FormEntryOutput.h>
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
  class GetAssetTypeResult
  {
  public:
    AWS_DATAZONE_API GetAssetTypeResult();
    AWS_DATAZONE_API GetAssetTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetAssetTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAssetTypeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAssetTypeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetAssetTypeResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetAssetTypeResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetAssetTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetAssetTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetAssetTypeResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetAssetTypeResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms attached to the asset type.</p>
     */
    inline const Aws::Map<Aws::String, FormEntryOutput>& GetFormsOutput() const{ return m_formsOutput; }
    inline void SetFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { m_formsOutput = value; }
    inline void SetFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { m_formsOutput = std::move(value); }
    inline GetAssetTypeResult& WithFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { SetFormsOutput(value); return *this;}
    inline GetAssetTypeResult& WithFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}
    inline GetAssetTypeResult& AddFormsOutput(const Aws::String& key, const FormEntryOutput& value) { m_formsOutput.emplace(key, value); return *this; }
    inline GetAssetTypeResult& AddFormsOutput(Aws::String&& key, const FormEntryOutput& value) { m_formsOutput.emplace(std::move(key), value); return *this; }
    inline GetAssetTypeResult& AddFormsOutput(const Aws::String& key, FormEntryOutput&& value) { m_formsOutput.emplace(key, std::move(value)); return *this; }
    inline GetAssetTypeResult& AddFormsOutput(Aws::String&& key, FormEntryOutput&& value) { m_formsOutput.emplace(std::move(key), std::move(value)); return *this; }
    inline GetAssetTypeResult& AddFormsOutput(const char* key, FormEntryOutput&& value) { m_formsOutput.emplace(key, std::move(value)); return *this; }
    inline GetAssetTypeResult& AddFormsOutput(const char* key, const FormEntryOutput& value) { m_formsOutput.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the asset type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetAssetTypeResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAssetTypeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const{ return m_originDomainId; }
    inline void SetOriginDomainId(const Aws::String& value) { m_originDomainId = value; }
    inline void SetOriginDomainId(Aws::String&& value) { m_originDomainId = std::move(value); }
    inline void SetOriginDomainId(const char* value) { m_originDomainId.assign(value); }
    inline GetAssetTypeResult& WithOriginDomainId(const Aws::String& value) { SetOriginDomainId(value); return *this;}
    inline GetAssetTypeResult& WithOriginDomainId(Aws::String&& value) { SetOriginDomainId(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithOriginDomainId(const char* value) { SetOriginDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone project in which the asset type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const{ return m_originProjectId; }
    inline void SetOriginProjectId(const Aws::String& value) { m_originProjectId = value; }
    inline void SetOriginProjectId(Aws::String&& value) { m_originProjectId = std::move(value); }
    inline void SetOriginProjectId(const char* value) { m_originProjectId.assign(value); }
    inline GetAssetTypeResult& WithOriginProjectId(const Aws::String& value) { SetOriginProjectId(value); return *this;}
    inline GetAssetTypeResult& WithOriginProjectId(Aws::String&& value) { SetOriginProjectId(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithOriginProjectId(const char* value) { SetOriginProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone project that owns the asset type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }
    inline GetAssetTypeResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline GetAssetTypeResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the asset type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline void SetRevision(const Aws::String& value) { m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revision.assign(value); }
    inline GetAssetTypeResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline GetAssetTypeResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetAssetTypeResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetAssetTypeResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user that updated the asset type.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetAssetTypeResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetAssetTypeResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAssetTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAssetTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAssetTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Map<Aws::String, FormEntryOutput> m_formsOutput;

    Aws::String m_name;

    Aws::String m_originDomainId;

    Aws::String m_originProjectId;

    Aws::String m_owningProjectId;

    Aws::String m_revision;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
