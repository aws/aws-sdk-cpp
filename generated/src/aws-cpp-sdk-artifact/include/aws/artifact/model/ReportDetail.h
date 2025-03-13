/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/artifact/model/PublishedState.h>
#include <aws/artifact/model/AcceptanceType.h>
#include <aws/artifact/model/UploadState.h>
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
namespace Artifact
{
namespace Model
{

  /**
   * <p>Full detail for report resource metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ReportDetail">AWS
   * API Reference</a></p>
   */
  class ReportDetail
  {
  public:
    AWS_ARTIFACT_API ReportDetail() = default;
    AWS_ARTIFACT_API ReportDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API ReportDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ReportDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the report resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReportDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the report resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReportDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodStart() const { return m_periodStart; }
    inline bool PeriodStartHasBeenSet() const { return m_periodStartHasBeenSet; }
    template<typename PeriodStartT = Aws::Utils::DateTime>
    void SetPeriodStart(PeriodStartT&& value) { m_periodStartHasBeenSet = true; m_periodStart = std::forward<PeriodStartT>(value); }
    template<typename PeriodStartT = Aws::Utils::DateTime>
    ReportDetail& WithPeriodStart(PeriodStartT&& value) { SetPeriodStart(std::forward<PeriodStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodEnd() const { return m_periodEnd; }
    inline bool PeriodEndHasBeenSet() const { return m_periodEndHasBeenSet; }
    template<typename PeriodEndT = Aws::Utils::DateTime>
    void SetPeriodEnd(PeriodEndT&& value) { m_periodEndHasBeenSet = true; m_periodEnd = std::forward<PeriodEndT>(value); }
    template<typename PeriodEndT = Aws::Utils::DateTime>
    ReportDetail& WithPeriodEnd(PeriodEndT&& value) { SetPeriodEnd(std::forward<PeriodEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the report resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ReportDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the report resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    ReportDetail& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the report resource was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    ReportDetail& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current state of the report resource</p>
     */
    inline PublishedState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(PublishedState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ReportDetail& WithState(PublishedState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN for the report resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ReportDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Series for the report resource.</p>
     */
    inline const Aws::String& GetSeries() const { return m_series; }
    inline bool SeriesHasBeenSet() const { return m_seriesHasBeenSet; }
    template<typename SeriesT = Aws::String>
    void SetSeries(SeriesT&& value) { m_seriesHasBeenSet = true; m_series = std::forward<SeriesT>(value); }
    template<typename SeriesT = Aws::String>
    ReportDetail& WithSeries(SeriesT&& value) { SetSeries(std::forward<SeriesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category for the report resource.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    ReportDetail& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline const Aws::String& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::String>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::String>
    ReportDetail& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    ReportDetail& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique resource ARN for term resource.</p>
     */
    inline const Aws::String& GetTermArn() const { return m_termArn; }
    inline bool TermArnHasBeenSet() const { return m_termArnHasBeenSet; }
    template<typename TermArnT = Aws::String>
    void SetTermArn(TermArnT&& value) { m_termArnHasBeenSet = true; m_termArn = std::forward<TermArnT>(value); }
    template<typename TermArnT = Aws::String>
    ReportDetail& WithTermArn(TermArnT&& value) { SetTermArn(std::forward<TermArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version for the report resource.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ReportDetail& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Acceptance type for report.</p>
     */
    inline AcceptanceType GetAcceptanceType() const { return m_acceptanceType; }
    inline bool AcceptanceTypeHasBeenSet() const { return m_acceptanceTypeHasBeenSet; }
    inline void SetAcceptanceType(AcceptanceType value) { m_acceptanceTypeHasBeenSet = true; m_acceptanceType = value; }
    inline ReportDetail& WithAcceptanceType(AcceptanceType value) { SetAcceptanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sequence number to enforce optimistic locking.</p>
     */
    inline long long GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    inline void SetSequenceNumber(long long value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }
    inline ReportDetail& WithSequenceNumber(long long value) { SetSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the document upload.</p>
     */
    inline UploadState GetUploadState() const { return m_uploadState; }
    inline bool UploadStateHasBeenSet() const { return m_uploadStateHasBeenSet; }
    inline void SetUploadState(UploadState value) { m_uploadStateHasBeenSet = true; m_uploadState = value; }
    inline ReportDetail& WithUploadState(UploadState value) { SetUploadState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReportDetail& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_periodStart{};
    bool m_periodStartHasBeenSet = false;

    Aws::Utils::DateTime m_periodEnd{};
    bool m_periodEndHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;

    PublishedState m_state{PublishedState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_series;
    bool m_seriesHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_termArn;
    bool m_termArnHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    AcceptanceType m_acceptanceType{AcceptanceType::NOT_SET};
    bool m_acceptanceTypeHasBeenSet = false;

    long long m_sequenceNumber{0};
    bool m_sequenceNumberHasBeenSet = false;

    UploadState m_uploadState{UploadState::NOT_SET};
    bool m_uploadStateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
