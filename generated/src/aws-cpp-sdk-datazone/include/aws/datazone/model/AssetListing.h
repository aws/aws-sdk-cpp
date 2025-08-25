/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DetailedGlossaryTerm.h>
#include <aws/datazone/model/TimeSeriesDataPointSummaryFormOutput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>An asset published in an Amazon DataZone catalog.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetListing">AWS
   * API Reference</a></p>
   */
  class AssetListing
  {
  public:
    AWS_DATAZONE_API AssetListing() = default;
    AWS_DATAZONE_API AssetListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    AssetListing& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetRevision() const { return m_assetRevision; }
    inline bool AssetRevisionHasBeenSet() const { return m_assetRevisionHasBeenSet; }
    template<typename AssetRevisionT = Aws::String>
    void SetAssetRevision(AssetRevisionT&& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = std::forward<AssetRevisionT>(value); }
    template<typename AssetRevisionT = Aws::String>
    AssetListing& WithAssetRevision(AssetRevisionT&& value) { SetAssetRevision(std::forward<AssetRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetType() const { return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    template<typename AssetTypeT = Aws::String>
    void SetAssetType(AssetTypeT&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::forward<AssetTypeT>(value); }
    template<typename AssetTypeT = Aws::String>
    AssetListing& WithAssetType(AssetTypeT&& value) { SetAssetType(std::forward<AssetTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AssetListing& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline const Aws::String& GetForms() const { return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    template<typename FormsT = Aws::String>
    void SetForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms = std::forward<FormsT>(value); }
    template<typename FormsT = Aws::String>
    AssetListing& WithForms(FormsT&& value) { SetForms(std::forward<FormsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    AssetListing& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = DetailedGlossaryTerm>
    AssetListing& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The restricted glossary terms associated with an asset.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGovernedGlossaryTerms() const { return m_governedGlossaryTerms; }
    inline bool GovernedGlossaryTermsHasBeenSet() const { return m_governedGlossaryTermsHasBeenSet; }
    template<typename GovernedGlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms = std::forward<GovernedGlossaryTermsT>(value); }
    template<typename GovernedGlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    AssetListing& WithGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { SetGovernedGlossaryTerms(std::forward<GovernedGlossaryTermsT>(value)); return *this;}
    template<typename GovernedGlossaryTermsT = DetailedGlossaryTerm>
    AssetListing& AddGovernedGlossaryTerms(GovernedGlossaryTermsT&& value) { m_governedGlossaryTermsHasBeenSet = true; m_governedGlossaryTerms.emplace_back(std::forward<GovernedGlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& GetLatestTimeSeriesDataPointForms() const { return m_latestTimeSeriesDataPointForms; }
    inline bool LatestTimeSeriesDataPointFormsHasBeenSet() const { return m_latestTimeSeriesDataPointFormsHasBeenSet; }
    template<typename LatestTimeSeriesDataPointFormsT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    void SetLatestTimeSeriesDataPointForms(LatestTimeSeriesDataPointFormsT&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms = std::forward<LatestTimeSeriesDataPointFormsT>(value); }
    template<typename LatestTimeSeriesDataPointFormsT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    AssetListing& WithLatestTimeSeriesDataPointForms(LatestTimeSeriesDataPointFormsT&& value) { SetLatestTimeSeriesDataPointForms(std::forward<LatestTimeSeriesDataPointFormsT>(value)); return *this;}
    template<typename LatestTimeSeriesDataPointFormsT = TimeSeriesDataPointSummaryFormOutput>
    AssetListing& AddLatestTimeSeriesDataPointForms(LatestTimeSeriesDataPointFormsT&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms.emplace_back(std::forward<LatestTimeSeriesDataPointFormsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    AssetListing& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetRevision;
    bool m_assetRevisionHasBeenSet = false;

    Aws::String m_assetType;
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_governedGlossaryTerms;
    bool m_governedGlossaryTermsHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointSummaryFormOutput> m_latestTimeSeriesDataPointForms;
    bool m_latestTimeSeriesDataPointFormsHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
