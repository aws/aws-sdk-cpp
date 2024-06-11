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
    AWS_DATAZONE_API AssetListing();
    AWS_DATAZONE_API AssetListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AssetListing& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AssetListing& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AssetListing& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetRevision() const{ return m_assetRevision; }
    inline bool AssetRevisionHasBeenSet() const { return m_assetRevisionHasBeenSet; }
    inline void SetAssetRevision(const Aws::String& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = value; }
    inline void SetAssetRevision(Aws::String&& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = std::move(value); }
    inline void SetAssetRevision(const char* value) { m_assetRevisionHasBeenSet = true; m_assetRevision.assign(value); }
    inline AssetListing& WithAssetRevision(const Aws::String& value) { SetAssetRevision(value); return *this;}
    inline AssetListing& WithAssetRevision(Aws::String&& value) { SetAssetRevision(std::move(value)); return *this;}
    inline AssetListing& WithAssetRevision(const char* value) { SetAssetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of an asset published in an Amazon DataZone catalog. </p>
     */
    inline const Aws::String& GetAssetType() const{ return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(const Aws::String& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline void SetAssetType(Aws::String&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }
    inline void SetAssetType(const char* value) { m_assetTypeHasBeenSet = true; m_assetType.assign(value); }
    inline AssetListing& WithAssetType(const Aws::String& value) { SetAssetType(value); return *this;}
    inline AssetListing& WithAssetType(Aws::String&& value) { SetAssetType(std::move(value)); return *this;}
    inline AssetListing& WithAssetType(const char* value) { SetAssetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when an asset published in an Amazon DataZone catalog was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AssetListing& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AssetListing& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline const Aws::String& GetForms() const{ return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    inline void SetForms(const Aws::String& value) { m_formsHasBeenSet = true; m_forms = value; }
    inline void SetForms(Aws::String&& value) { m_formsHasBeenSet = true; m_forms = std::move(value); }
    inline void SetForms(const char* value) { m_formsHasBeenSet = true; m_forms.assign(value); }
    inline AssetListing& WithForms(const Aws::String& value) { SetForms(value); return *this;}
    inline AssetListing& WithForms(Aws::String&& value) { SetForms(std::move(value)); return *this;}
    inline AssetListing& WithForms(const char* value) { SetForms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms attached to an asset published in an Amazon DataZone
     * catalog. </p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline AssetListing& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}
    inline AssetListing& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline AssetListing& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline AssetListing& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& GetLatestTimeSeriesDataPointForms() const{ return m_latestTimeSeriesDataPointForms; }
    inline bool LatestTimeSeriesDataPointFormsHasBeenSet() const { return m_latestTimeSeriesDataPointFormsHasBeenSet; }
    inline void SetLatestTimeSeriesDataPointForms(const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms = value; }
    inline void SetLatestTimeSeriesDataPointForms(Aws::Vector<TimeSeriesDataPointSummaryFormOutput>&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms = std::move(value); }
    inline AssetListing& WithLatestTimeSeriesDataPointForms(const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& value) { SetLatestTimeSeriesDataPointForms(value); return *this;}
    inline AssetListing& WithLatestTimeSeriesDataPointForms(Aws::Vector<TimeSeriesDataPointSummaryFormOutput>&& value) { SetLatestTimeSeriesDataPointForms(std::move(value)); return *this;}
    inline AssetListing& AddLatestTimeSeriesDataPointForms(const TimeSeriesDataPointSummaryFormOutput& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms.push_back(value); return *this; }
    inline AssetListing& AddLatestTimeSeriesDataPointForms(TimeSeriesDataPointSummaryFormOutput&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the project where an asset published in an Amazon DataZone
     * catalog exists. </p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline AssetListing& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline AssetListing& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline AssetListing& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetRevision;
    bool m_assetRevisionHasBeenSet = false;

    Aws::String m_assetType;
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointSummaryFormOutput> m_latestTimeSeriesDataPointForms;
    bool m_latestTimeSeriesDataPointFormsHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
