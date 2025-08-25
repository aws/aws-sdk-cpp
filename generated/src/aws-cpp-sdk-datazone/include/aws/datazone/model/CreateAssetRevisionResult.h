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
#include <aws/datazone/model/TimeSeriesDataPointSummaryFormOutput.h>
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
    AWS_DATAZONE_API CreateAssetRevisionResult() = default;
    AWS_DATAZONE_API CreateAssetRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateAssetRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the asset revision occured.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateAssetRevisionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who performed the asset revision.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    CreateAssetRevisionResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revised asset description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAssetRevisionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon DataZone domain where the asset was
     * revised.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateAssetRevisionResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external identifier of the asset.</p>
     */
    inline const Aws::String& GetExternalIdentifier() const { return m_externalIdentifier; }
    template<typename ExternalIdentifierT = Aws::String>
    void SetExternalIdentifier(ExternalIdentifierT&& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = std::forward<ExternalIdentifierT>(value); }
    template<typename ExternalIdentifierT = Aws::String>
    CreateAssetRevisionResult& WithExternalIdentifier(ExternalIdentifierT&& value) { SetExternalIdentifier(std::forward<ExternalIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the first asset revision occured.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstRevisionCreatedAt() const { return m_firstRevisionCreatedAt; }
    template<typename FirstRevisionCreatedAtT = Aws::Utils::DateTime>
    void SetFirstRevisionCreatedAt(FirstRevisionCreatedAtT&& value) { m_firstRevisionCreatedAtHasBeenSet = true; m_firstRevisionCreatedAt = std::forward<FirstRevisionCreatedAtT>(value); }
    template<typename FirstRevisionCreatedAtT = Aws::Utils::DateTime>
    CreateAssetRevisionResult& WithFirstRevisionCreatedAt(FirstRevisionCreatedAtT&& value) { SetFirstRevisionCreatedAt(std::forward<FirstRevisionCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who performed the first asset revision.</p>
     */
    inline const Aws::String& GetFirstRevisionCreatedBy() const { return m_firstRevisionCreatedBy; }
    template<typename FirstRevisionCreatedByT = Aws::String>
    void SetFirstRevisionCreatedBy(FirstRevisionCreatedByT&& value) { m_firstRevisionCreatedByHasBeenSet = true; m_firstRevisionCreatedBy = std::forward<FirstRevisionCreatedByT>(value); }
    template<typename FirstRevisionCreatedByT = Aws::String>
    CreateAssetRevisionResult& WithFirstRevisionCreatedBy(FirstRevisionCreatedByT&& value) { SetFirstRevisionCreatedBy(std::forward<FirstRevisionCreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms that were attached to the asset as part of the asset
     * revision.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const { return m_formsOutput; }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    void SetFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::forward<FormsOutputT>(value); }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    CreateAssetRevisionResult& WithFormsOutput(FormsOutputT&& value) { SetFormsOutput(std::forward<FormsOutputT>(value)); return *this;}
    template<typename FormsOutputT = FormOutput>
    CreateAssetRevisionResult& AddFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace_back(std::forward<FormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The glossary terms that were attached to the asset as part of asset
     * revision.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    CreateAssetRevisionResult& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    CreateAssetRevisionResult& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The glossary terms in a restricted glossary.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGovernedGlossaryTerms() const { return m_governedGlossaryTerms; }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms = std::forward<GovernedGlossaryTermsT>(value); }
    template<typename GovernedGlossaryTermsT = Aws::Vector<Aws::String>>
    CreateAssetRevisionResult& WithGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { SetGovernedGlossaryTerms(std::forward<GovernedGlossaryTermsT>(value)); return *this;}
    template<typename GovernedGlossaryTermsT = Aws::String>
    CreateAssetRevisionResult& AddGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms.emplace_back(std::forward<GovernedGlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the asset revision.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateAssetRevisionResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest data point that was imported into the time series form for the
     * asset. </p>
     */
    inline const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& GetLatestTimeSeriesDataPointFormsOutput() const { return m_latestTimeSeriesDataPointFormsOutput; }
    template<typename LatestTimeSeriesDataPointFormsOutputT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    void SetLatestTimeSeriesDataPointFormsOutput(LatestTimeSeriesDataPointFormsOutputT&& value) { m_latestTimeSeriesDataPointFormsOutputHasBeenSet = true; m_latestTimeSeriesDataPointFormsOutput = std::forward<LatestTimeSeriesDataPointFormsOutputT>(value); }
    template<typename LatestTimeSeriesDataPointFormsOutputT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    CreateAssetRevisionResult& WithLatestTimeSeriesDataPointFormsOutput(LatestTimeSeriesDataPointFormsOutputT&& value) { SetLatestTimeSeriesDataPointFormsOutput(std::forward<LatestTimeSeriesDataPointFormsOutputT>(value)); return *this;}
    template<typename LatestTimeSeriesDataPointFormsOutputT = TimeSeriesDataPointSummaryFormOutput>
    CreateAssetRevisionResult& AddLatestTimeSeriesDataPointFormsOutput(LatestTimeSeriesDataPointFormsOutputT&& value) { m_latestTimeSeriesDataPointFormsOutputHasBeenSet = true; m_latestTimeSeriesDataPointFormsOutput.emplace_back(std::forward<LatestTimeSeriesDataPointFormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const AssetListingDetails& GetListing() const { return m_listing; }
    template<typename ListingT = AssetListingDetails>
    void SetListing(ListingT&& value) { m_listingHasBeenSet = true; m_listing = std::forward<ListingT>(value); }
    template<typename ListingT = AssetListingDetails>
    CreateAssetRevisionResult& WithListing(ListingT&& value) { SetListing(std::forward<ListingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revised name of the asset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAssetRevisionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the revised project that owns the asset.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    CreateAssetRevisionResult& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline const PredictionConfiguration& GetPredictionConfiguration() const { return m_predictionConfiguration; }
    template<typename PredictionConfigurationT = PredictionConfiguration>
    void SetPredictionConfiguration(PredictionConfigurationT&& value) { m_predictionConfigurationHasBeenSet = true; m_predictionConfiguration = std::forward<PredictionConfigurationT>(value); }
    template<typename PredictionConfigurationT = PredictionConfiguration>
    CreateAssetRevisionResult& WithPredictionConfiguration(PredictionConfigurationT&& value) { SetPredictionConfiguration(std::forward<PredictionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read-only metadata forms that were attached to the asset as part of the
     * asset revision.</p>
     */
    inline const Aws::Vector<FormOutput>& GetReadOnlyFormsOutput() const { return m_readOnlyFormsOutput; }
    template<typename ReadOnlyFormsOutputT = Aws::Vector<FormOutput>>
    void SetReadOnlyFormsOutput(ReadOnlyFormsOutputT&& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput = std::forward<ReadOnlyFormsOutputT>(value); }
    template<typename ReadOnlyFormsOutputT = Aws::Vector<FormOutput>>
    CreateAssetRevisionResult& WithReadOnlyFormsOutput(ReadOnlyFormsOutputT&& value) { SetReadOnlyFormsOutput(std::forward<ReadOnlyFormsOutputT>(value)); return *this;}
    template<typename ReadOnlyFormsOutputT = FormOutput>
    CreateAssetRevisionResult& AddReadOnlyFormsOutput(ReadOnlyFormsOutputT&& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput.emplace_back(std::forward<ReadOnlyFormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The revision of the asset.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    CreateAssetRevisionResult& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the revision type.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const { return m_typeIdentifier; }
    template<typename TypeIdentifierT = Aws::String>
    void SetTypeIdentifier(TypeIdentifierT&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::forward<TypeIdentifierT>(value); }
    template<typename TypeIdentifierT = Aws::String>
    CreateAssetRevisionResult& WithTypeIdentifier(TypeIdentifierT&& value) { SetTypeIdentifier(std::forward<TypeIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision type of the asset.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    CreateAssetRevisionResult& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssetRevisionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_externalIdentifier;
    bool m_externalIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_firstRevisionCreatedAt{};
    bool m_firstRevisionCreatedAtHasBeenSet = false;

    Aws::String m_firstRevisionCreatedBy;
    bool m_firstRevisionCreatedByHasBeenSet = false;

    Aws::Vector<FormOutput> m_formsOutput;
    bool m_formsOutputHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<Aws::String> m_governedGlossaryTerms;
    bool m_governedGlossaryTermsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointSummaryFormOutput> m_latestTimeSeriesDataPointFormsOutput;
    bool m_latestTimeSeriesDataPointFormsOutputHasBeenSet = false;

    AssetListingDetails m_listing;
    bool m_listingHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    PredictionConfiguration m_predictionConfiguration;
    bool m_predictionConfigurationHasBeenSet = false;

    Aws::Vector<FormOutput> m_readOnlyFormsOutput;
    bool m_readOnlyFormsOutputHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
