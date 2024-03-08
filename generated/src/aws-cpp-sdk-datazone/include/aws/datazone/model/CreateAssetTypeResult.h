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
  class CreateAssetTypeResult
  {
  public:
    AWS_DATAZONE_API CreateAssetTypeResult();
    AWS_DATAZONE_API CreateAssetTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateAssetTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the asset type is to be created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the asset type is to be created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the asset type is to be created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the asset type is to be created.</p>
     */
    inline CreateAssetTypeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the asset type is to be created.</p>
     */
    inline CreateAssetTypeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who creates this custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the custom asset type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the custom asset type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the custom asset type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the custom asset type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline CreateAssetTypeResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline CreateAssetTypeResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the asset type was created.</p>
     */
    inline CreateAssetTypeResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline const Aws::Map<Aws::String, FormEntryOutput>& GetFormsOutput() const{ return m_formsOutput; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline void SetFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { m_formsOutput = value; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline void SetFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { m_formsOutput = std::move(value); }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& WithFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { SetFormsOutput(value); return *this;}

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& WithFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& AddFormsOutput(const Aws::String& key, const FormEntryOutput& value) { m_formsOutput.emplace(key, value); return *this; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& AddFormsOutput(Aws::String&& key, const FormEntryOutput& value) { m_formsOutput.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& AddFormsOutput(const Aws::String& key, FormEntryOutput&& value) { m_formsOutput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& AddFormsOutput(Aws::String&& key, FormEntryOutput&& value) { m_formsOutput.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& AddFormsOutput(const char* key, FormEntryOutput&& value) { m_formsOutput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata forms that are attached to the asset type.</p>
     */
    inline CreateAssetTypeResult& AddFormsOutput(const char* key, const FormEntryOutput& value) { m_formsOutput.emplace(key, value); return *this; }


    /**
     * <p>The name of the asset type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset type.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the asset type.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the asset type.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the asset type.</p>
     */
    inline CreateAssetTypeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset type.</p>
     */
    inline CreateAssetTypeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset type.</p>
     */
    inline CreateAssetTypeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const{ return m_originDomainId; }

    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline void SetOriginDomainId(const Aws::String& value) { m_originDomainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline void SetOriginDomainId(Aws::String&& value) { m_originDomainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline void SetOriginDomainId(const char* value) { m_originDomainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline CreateAssetTypeResult& WithOriginDomainId(const Aws::String& value) { SetOriginDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline CreateAssetTypeResult& WithOriginDomainId(Aws::String&& value) { SetOriginDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where the asset type was originally
     * created.</p>
     */
    inline CreateAssetTypeResult& WithOriginDomainId(const char* value) { SetOriginDomainId(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const{ return m_originProjectId; }

    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline void SetOriginProjectId(const Aws::String& value) { m_originProjectId = value; }

    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline void SetOriginProjectId(Aws::String&& value) { m_originProjectId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline void SetOriginProjectId(const char* value) { m_originProjectId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline CreateAssetTypeResult& WithOriginProjectId(const Aws::String& value) { SetOriginProjectId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline CreateAssetTypeResult& WithOriginProjectId(Aws::String&& value) { SetOriginProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project where the asset type was originally
     * created.</p>
     */
    inline CreateAssetTypeResult& WithOriginProjectId(const char* value) { SetOriginProjectId(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline CreateAssetTypeResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline CreateAssetTypeResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project that currently owns this asset
     * type.</p>
     */
    inline CreateAssetTypeResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revision = value; }

    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }

    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline void SetRevision(const char* value) { m_revision.assign(value); }

    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p>The timestamp of when the custom type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the custom type was created.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the custom type was created.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the custom type was created.</p>
     */
    inline CreateAssetTypeResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the custom type was created.</p>
     */
    inline CreateAssetTypeResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user that created the custom asset type.</p>
     */
    inline CreateAssetTypeResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssetTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssetTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssetTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
