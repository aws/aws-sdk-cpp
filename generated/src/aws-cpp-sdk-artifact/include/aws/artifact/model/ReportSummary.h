/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/artifact/model/PublishedState.h>
#include <aws/artifact/model/UploadState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/artifact/model/AcceptanceType.h>
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
   * <p>Summary for report resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ReportSummary">AWS
   * API Reference</a></p>
   */
  class ReportSummary
  {
  public:
    AWS_ARTIFACT_API ReportSummary();
    AWS_ARTIFACT_API ReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API ReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ReportSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReportSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReportSummary& WithId(const char* value) { SetId(value); return *this;}
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
    inline ReportSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReportSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReportSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current state of the report resource.</p>
     */
    inline const PublishedState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const PublishedState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(PublishedState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ReportSummary& WithState(const PublishedState& value) { SetState(value); return *this;}
    inline ReportSummary& WithState(PublishedState&& value) { SetState(std::move(value)); return *this;}
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
    inline ReportSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReportSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReportSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version for the report resource.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ReportSummary& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the document upload.</p>
     */
    inline const UploadState& GetUploadState() const{ return m_uploadState; }
    inline bool UploadStateHasBeenSet() const { return m_uploadStateHasBeenSet; }
    inline void SetUploadState(const UploadState& value) { m_uploadStateHasBeenSet = true; m_uploadState = value; }
    inline void SetUploadState(UploadState&& value) { m_uploadStateHasBeenSet = true; m_uploadState = std::move(value); }
    inline ReportSummary& WithUploadState(const UploadState& value) { SetUploadState(value); return *this;}
    inline ReportSummary& WithUploadState(UploadState&& value) { SetUploadState(std::move(value)); return *this;}
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
    inline ReportSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReportSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReportSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodStart() const{ return m_periodStart; }
    inline bool PeriodStartHasBeenSet() const { return m_periodStartHasBeenSet; }
    inline void SetPeriodStart(const Aws::Utils::DateTime& value) { m_periodStartHasBeenSet = true; m_periodStart = value; }
    inline void SetPeriodStart(Aws::Utils::DateTime&& value) { m_periodStartHasBeenSet = true; m_periodStart = std::move(value); }
    inline ReportSummary& WithPeriodStart(const Aws::Utils::DateTime& value) { SetPeriodStart(value); return *this;}
    inline ReportSummary& WithPeriodStart(Aws::Utils::DateTime&& value) { SetPeriodStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodEnd() const{ return m_periodEnd; }
    inline bool PeriodEndHasBeenSet() const { return m_periodEndHasBeenSet; }
    inline void SetPeriodEnd(const Aws::Utils::DateTime& value) { m_periodEndHasBeenSet = true; m_periodEnd = value; }
    inline void SetPeriodEnd(Aws::Utils::DateTime&& value) { m_periodEndHasBeenSet = true; m_periodEnd = std::move(value); }
    inline ReportSummary& WithPeriodEnd(const Aws::Utils::DateTime& value) { SetPeriodEnd(value); return *this;}
    inline ReportSummary& WithPeriodEnd(Aws::Utils::DateTime&& value) { SetPeriodEnd(std::move(value)); return *this;}
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
    inline ReportSummary& WithSeries(const Aws::String& value) { SetSeries(value); return *this;}
    inline ReportSummary& WithSeries(Aws::String&& value) { SetSeries(std::move(value)); return *this;}
    inline ReportSummary& WithSeries(const char* value) { SetSeries(value); return *this;}
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
    inline ReportSummary& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline ReportSummary& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline ReportSummary& WithCategory(const char* value) { SetCategory(value); return *this;}
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
    inline ReportSummary& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}
    inline ReportSummary& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}
    inline ReportSummary& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}
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
    inline ReportSummary& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline ReportSummary& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline ReportSummary& WithProductName(const char* value) { SetProductName(value); return *this;}
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
    inline ReportSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ReportSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ReportSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Acceptance type for report.</p>
     */
    inline const AcceptanceType& GetAcceptanceType() const{ return m_acceptanceType; }
    inline bool AcceptanceTypeHasBeenSet() const { return m_acceptanceTypeHasBeenSet; }
    inline void SetAcceptanceType(const AcceptanceType& value) { m_acceptanceTypeHasBeenSet = true; m_acceptanceType = value; }
    inline void SetAcceptanceType(AcceptanceType&& value) { m_acceptanceTypeHasBeenSet = true; m_acceptanceType = std::move(value); }
    inline ReportSummary& WithAcceptanceType(const AcceptanceType& value) { SetAcceptanceType(value); return *this;}
    inline ReportSummary& WithAcceptanceType(AcceptanceType&& value) { SetAcceptanceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PublishedState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;

    UploadState m_uploadState;
    bool m_uploadStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_periodStart;
    bool m_periodStartHasBeenSet = false;

    Aws::Utils::DateTime m_periodEnd;
    bool m_periodEndHasBeenSet = false;

    Aws::String m_series;
    bool m_seriesHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AcceptanceType m_acceptanceType;
    bool m_acceptanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
