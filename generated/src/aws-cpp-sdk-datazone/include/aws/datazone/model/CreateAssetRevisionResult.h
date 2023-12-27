/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/AssetListingDetails.h>
#include <aws/datazone/model/PredictionConfiguration.h>
#include <aws/datazone/model/FormOutput.h>
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
  class CreateAssetRevisionResult
  {
  public:
    AWS_DATAZONE_API CreateAssetRevisionResult();
    AWS_DATAZONE_API CreateAssetRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateAssetRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the asset revision occured.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the asset revision occured.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the asset revision occured.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the asset revision occured.</p>
     */
    inline CreateAssetRevisionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the asset revision occured.</p>
     */
    inline CreateAssetRevisionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The revised asset description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The revised asset description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The revised asset description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The revised asset description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The revised asset description.</p>
     */
    inline CreateAssetRevisionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The revised asset description.</p>
     */
    inline CreateAssetRevisionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The revised asset description.</p>
     */
    inline CreateAssetRevisionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline CreateAssetRevisionResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline CreateAssetRevisionResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline CreateAssetRevisionResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetExternalIdentifier() const{ return m_externalIdentifier; }

    /**
     * <p/>
     */
    inline void SetExternalIdentifier(const Aws::String& value) { m_externalIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetExternalIdentifier(Aws::String&& value) { m_externalIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetExternalIdentifier(const char* value) { m_externalIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline CreateAssetRevisionResult& WithExternalIdentifier(const Aws::String& value) { SetExternalIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline CreateAssetRevisionResult& WithExternalIdentifier(Aws::String&& value) { SetExternalIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateAssetRevisionResult& WithExternalIdentifier(const char* value) { SetExternalIdentifier(value); return *this;}


    /**
     * <p>The timestamp of when the first asset revision occured.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstRevisionCreatedAt() const{ return m_firstRevisionCreatedAt; }

    /**
     * <p>The timestamp of when the first asset revision occured.</p>
     */
    inline void SetFirstRevisionCreatedAt(const Aws::Utils::DateTime& value) { m_firstRevisionCreatedAt = value; }

    /**
     * <p>The timestamp of when the first asset revision occured.</p>
     */
    inline void SetFirstRevisionCreatedAt(Aws::Utils::DateTime&& value) { m_firstRevisionCreatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the first asset revision occured.</p>
     */
    inline CreateAssetRevisionResult& WithFirstRevisionCreatedAt(const Aws::Utils::DateTime& value) { SetFirstRevisionCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the first asset revision occured.</p>
     */
    inline CreateAssetRevisionResult& WithFirstRevisionCreatedAt(Aws::Utils::DateTime&& value) { SetFirstRevisionCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline const Aws::String& GetFirstRevisionCreatedBy() const{ return m_firstRevisionCreatedBy; }

    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline void SetFirstRevisionCreatedBy(const Aws::String& value) { m_firstRevisionCreatedBy = value; }

    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline void SetFirstRevisionCreatedBy(Aws::String&& value) { m_firstRevisionCreatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline void SetFirstRevisionCreatedBy(const char* value) { m_firstRevisionCreatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithFirstRevisionCreatedBy(const Aws::String& value) { SetFirstRevisionCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithFirstRevisionCreatedBy(Aws::String&& value) { SetFirstRevisionCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithFirstRevisionCreatedBy(const char* value) { SetFirstRevisionCreatedBy(value); return *this;}


    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const{ return m_formsOutput; }

    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline void SetFormsOutput(const Aws::Vector<FormOutput>& value) { m_formsOutput = value; }

    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline void SetFormsOutput(Aws::Vector<FormOutput>&& value) { m_formsOutput = std::move(value); }

    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& WithFormsOutput(const Aws::Vector<FormOutput>& value) { SetFormsOutput(value); return *this;}

    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& WithFormsOutput(Aws::Vector<FormOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& AddFormsOutput(const FormOutput& value) { m_formsOutput.push_back(value); return *this; }

    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& AddFormsOutput(FormOutput&& value) { m_formsOutput.push_back(std::move(value)); return *this; }


    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }

    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline CreateAssetRevisionResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }


    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p/>
     */
    inline const AssetListingDetails& GetListing() const{ return m_listing; }

    /**
     * <p/>
     */
    inline void SetListing(const AssetListingDetails& value) { m_listing = value; }

    /**
     * <p/>
     */
    inline void SetListing(AssetListingDetails&& value) { m_listing = std::move(value); }

    /**
     * <p/>
     */
    inline CreateAssetRevisionResult& WithListing(const AssetListingDetails& value) { SetListing(value); return *this;}

    /**
     * <p/>
     */
    inline CreateAssetRevisionResult& WithListing(AssetListingDetails&& value) { SetListing(std::move(value)); return *this;}


    /**
     * <p>The revised name of the asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The revised name of the asset.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The revised name of the asset.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The revised name of the asset.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The revised name of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The revised name of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The revised name of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline CreateAssetRevisionResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline CreateAssetRevisionResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline CreateAssetRevisionResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline const PredictionConfiguration& GetPredictionConfiguration() const{ return m_predictionConfiguration; }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline void SetPredictionConfiguration(const PredictionConfiguration& value) { m_predictionConfiguration = value; }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline void SetPredictionConfiguration(PredictionConfiguration&& value) { m_predictionConfiguration = std::move(value); }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline CreateAssetRevisionResult& WithPredictionConfiguration(const PredictionConfiguration& value) { SetPredictionConfiguration(value); return *this;}

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline CreateAssetRevisionResult& WithPredictionConfiguration(PredictionConfiguration&& value) { SetPredictionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline const Aws::Vector<FormOutput>& GetReadOnlyFormsOutput() const{ return m_readOnlyFormsOutput; }

    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline void SetReadOnlyFormsOutput(const Aws::Vector<FormOutput>& value) { m_readOnlyFormsOutput = value; }

    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline void SetReadOnlyFormsOutput(Aws::Vector<FormOutput>&& value) { m_readOnlyFormsOutput = std::move(value); }

    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithReadOnlyFormsOutput(const Aws::Vector<FormOutput>& value) { SetReadOnlyFormsOutput(value); return *this;}

    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline CreateAssetRevisionResult& WithReadOnlyFormsOutput(Aws::Vector<FormOutput>&& value) { SetReadOnlyFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline CreateAssetRevisionResult& AddReadOnlyFormsOutput(const FormOutput& value) { m_readOnlyFormsOutput.push_back(value); return *this; }

    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline CreateAssetRevisionResult& AddReadOnlyFormsOutput(FormOutput&& value) { m_readOnlyFormsOutput.push_back(std::move(value)); return *this; }


    /**
     * <p>The revision of the asset.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the asset.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revision = value; }

    /**
     * <p>The revision of the asset.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }

    /**
     * <p>The revision of the asset.</p>
     */
    inline void SetRevision(const char* value) { m_revision.assign(value); }

    /**
     * <p>The revision of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The revision of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p>The identifier of the revision type.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }

    /**
     * <p>The identifier of the revision type.</p>
     */
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifier = value; }

    /**
     * <p>The identifier of the revision type.</p>
     */
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifier = std::move(value); }

    /**
     * <p>The identifier of the revision type.</p>
     */
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifier.assign(value); }

    /**
     * <p>The identifier of the revision type.</p>
     */
    inline CreateAssetRevisionResult& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}

    /**
     * <p>The identifier of the revision type.</p>
     */
    inline CreateAssetRevisionResult& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the revision type.</p>
     */
    inline CreateAssetRevisionResult& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}


    /**
     * <p>The revision type of the asset.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevision = value; }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevision = std::move(value); }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline void SetTypeRevision(const char* value) { m_typeRevision.assign(value); }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}

    /**
     * <p>The revision type of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}

    /**
     * <p>The revision type of the asset.</p>
     */
    inline CreateAssetRevisionResult& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssetRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssetRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssetRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_externalIdentifier;

    Aws::Utils::DateTime m_firstRevisionCreatedAt;

    Aws::String m_firstRevisionCreatedBy;

    Aws::Vector<FormOutput> m_formsOutput;

    Aws::Vector<Aws::String> m_glossaryTerms;

    Aws::String m_id;

    AssetListingDetails m_listing;

    Aws::String m_name;

    Aws::String m_owningProjectId;

    PredictionConfiguration m_predictionConfiguration;

    Aws::Vector<FormOutput> m_readOnlyFormsOutput;

    Aws::String m_revision;

    Aws::String m_typeIdentifier;

    Aws::String m_typeRevision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
