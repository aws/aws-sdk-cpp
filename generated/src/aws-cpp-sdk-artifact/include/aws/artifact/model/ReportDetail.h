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
    AWS_ARTIFACT_API ReportDetail();
    AWS_ARTIFACT_API ReportDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API ReportDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ReportDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReportDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReportDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the report resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReportDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReportDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReportDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the report resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReportDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReportDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReportDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodStart() const{ return m_periodStart; }
    inline bool PeriodStartHasBeenSet() const { return m_periodStartHasBeenSet; }
    inline void SetPeriodStart(const Aws::Utils::DateTime& value) { m_periodStartHasBeenSet = true; m_periodStart = value; }
    inline void SetPeriodStart(Aws::Utils::DateTime&& value) { m_periodStartHasBeenSet = true; m_periodStart = std::move(value); }
    inline ReportDetail& WithPeriodStart(const Aws::Utils::DateTime& value) { SetPeriodStart(value); return *this;}
    inline ReportDetail& WithPeriodStart(Aws::Utils::DateTime&& value) { SetPeriodStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodEnd() const{ return m_periodEnd; }
    inline bool PeriodEndHasBeenSet() const { return m_periodEndHasBeenSet; }
    inline void SetPeriodEnd(const Aws::Utils::DateTime& value) { m_periodEndHasBeenSet = true; m_periodEnd = value; }
    inline void SetPeriodEnd(Aws::Utils::DateTime&& value) { m_periodEndHasBeenSet = true; m_periodEnd = std::move(value); }
    inline ReportDetail& WithPeriodEnd(const Aws::Utils::DateTime& value) { SetPeriodEnd(value); return *this;}
    inline ReportDetail& WithPeriodEnd(Aws::Utils::DateTime&& value) { SetPeriodEnd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the report resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ReportDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ReportDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the report resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }
    inline ReportDetail& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline ReportDetail& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the report resource was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }
    inline ReportDetail& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}
    inline ReportDetail& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current state of the report resource</p>
     */
    inline const PublishedState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const PublishedState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(PublishedState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ReportDetail& WithState(const PublishedState& value) { SetState(value); return *this;}
    inline ReportDetail& WithState(PublishedState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN for the report resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ReportDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReportDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReportDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Series for the report resource.</p>
     */
    inline const Aws::String& GetSeries() const{ return m_series; }
    inline bool SeriesHasBeenSet() const { return m_seriesHasBeenSet; }
    inline void SetSeries(const Aws::String& value) { m_seriesHasBeenSet = true; m_series = value; }
    inline void SetSeries(Aws::String&& value) { m_seriesHasBeenSet = true; m_series = std::move(value); }
    inline void SetSeries(const char* value) { m_seriesHasBeenSet = true; m_series.assign(value); }
    inline ReportDetail& WithSeries(const Aws::String& value) { SetSeries(value); return *this;}
    inline ReportDetail& WithSeries(Aws::String&& value) { SetSeries(std::move(value)); return *this;}
    inline ReportDetail& WithSeries(const char* value) { SetSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category for the report resource.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline ReportDetail& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline ReportDetail& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline ReportDetail& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }
    inline ReportDetail& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline ReportDetail& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline ReportDetail& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }
    inline ReportDetail& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline ReportDetail& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline ReportDetail& WithProductName(const char* value) { SetProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique resource ARN for term resource.</p>
     */
    inline const Aws::String& GetTermArn() const{ return m_termArn; }
    inline bool TermArnHasBeenSet() const { return m_termArnHasBeenSet; }
    inline void SetTermArn(const Aws::String& value) { m_termArnHasBeenSet = true; m_termArn = value; }
    inline void SetTermArn(Aws::String&& value) { m_termArnHasBeenSet = true; m_termArn = std::move(value); }
    inline void SetTermArn(const char* value) { m_termArnHasBeenSet = true; m_termArn.assign(value); }
    inline ReportDetail& WithTermArn(const Aws::String& value) { SetTermArn(value); return *this;}
    inline ReportDetail& WithTermArn(Aws::String&& value) { SetTermArn(std::move(value)); return *this;}
    inline ReportDetail& WithTermArn(const char* value) { SetTermArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version for the report resource.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ReportDetail& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Acceptance type for report.</p>
     */
    inline const AcceptanceType& GetAcceptanceType() const{ return m_acceptanceType; }
    inline bool AcceptanceTypeHasBeenSet() const { return m_acceptanceTypeHasBeenSet; }
    inline void SetAcceptanceType(const AcceptanceType& value) { m_acceptanceTypeHasBeenSet = true; m_acceptanceType = value; }
    inline void SetAcceptanceType(AcceptanceType&& value) { m_acceptanceTypeHasBeenSet = true; m_acceptanceType = std::move(value); }
    inline ReportDetail& WithAcceptanceType(const AcceptanceType& value) { SetAcceptanceType(value); return *this;}
    inline ReportDetail& WithAcceptanceType(AcceptanceType&& value) { SetAcceptanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sequence number to enforce optimistic locking.</p>
     */
    inline long long GetSequenceNumber() const{ return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    inline void SetSequenceNumber(long long value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }
    inline ReportDetail& WithSequenceNumber(long long value) { SetSequenceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the document upload.</p>
     */
    inline const UploadState& GetUploadState() const{ return m_uploadState; }
    inline bool UploadStateHasBeenSet() const { return m_uploadStateHasBeenSet; }
    inline void SetUploadState(const UploadState& value) { m_uploadStateHasBeenSet = true; m_uploadState = value; }
    inline void SetUploadState(UploadState&& value) { m_uploadStateHasBeenSet = true; m_uploadState = std::move(value); }
    inline ReportDetail& WithUploadState(const UploadState& value) { SetUploadState(value); return *this;}
    inline ReportDetail& WithUploadState(UploadState&& value) { SetUploadState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ReportDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ReportDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ReportDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_periodStart;
    bool m_periodStartHasBeenSet = false;

    Aws::Utils::DateTime m_periodEnd;
    bool m_periodEndHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;

    PublishedState m_state;
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

    long long m_version;
    bool m_versionHasBeenSet = false;

    AcceptanceType m_acceptanceType;
    bool m_acceptanceTypeHasBeenSet = false;

    long long m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    UploadState m_uploadState;
    bool m_uploadStateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
