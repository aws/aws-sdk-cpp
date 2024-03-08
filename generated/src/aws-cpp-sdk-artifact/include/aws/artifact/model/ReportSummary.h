/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/artifact/model/PublishedState.h>
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


    /**
     * <p>ARN for the report resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN for the report resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>ARN for the report resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>ARN for the report resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>ARN for the report resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>ARN for the report resource.</p>
     */
    inline ReportSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN for the report resource.</p>
     */
    inline ReportSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN for the report resource.</p>
     */
    inline ReportSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Category for the report resource.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>Category for the report resource.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>Category for the report resource.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>Category for the report resource.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>Category for the report resource.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>Category for the report resource.</p>
     */
    inline ReportSummary& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>Category for the report resource.</p>
     */
    inline ReportSummary& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>Category for the report resource.</p>
     */
    inline ReportSummary& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline const Aws::String& GetCompanyName() const{ return m_companyName; }

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline void SetCompanyName(const Aws::String& value) { m_companyNameHasBeenSet = true; m_companyName = value; }

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline void SetCompanyName(Aws::String&& value) { m_companyNameHasBeenSet = true; m_companyName = std::move(value); }

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline void SetCompanyName(const char* value) { m_companyNameHasBeenSet = true; m_companyName.assign(value); }

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline ReportSummary& WithCompanyName(const Aws::String& value) { SetCompanyName(value); return *this;}

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline ReportSummary& WithCompanyName(Aws::String&& value) { SetCompanyName(std::move(value)); return *this;}

    /**
     * <p>Associated company name for the report resource.</p>
     */
    inline ReportSummary& WithCompanyName(const char* value) { SetCompanyName(value); return *this;}


    /**
     * <p>Description for the report resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description for the report resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description for the report resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description for the report resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description for the report resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description for the report resource.</p>
     */
    inline ReportSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description for the report resource.</p>
     */
    inline ReportSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description for the report resource.</p>
     */
    inline ReportSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline ReportSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline ReportSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline ReportSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Name for the report resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name for the report resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name for the report resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name for the report resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name for the report resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name for the report resource.</p>
     */
    inline ReportSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name for the report resource.</p>
     */
    inline ReportSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name for the report resource.</p>
     */
    inline ReportSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodEnd() const{ return m_periodEnd; }

    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline bool PeriodEndHasBeenSet() const { return m_periodEndHasBeenSet; }

    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline void SetPeriodEnd(const Aws::Utils::DateTime& value) { m_periodEndHasBeenSet = true; m_periodEnd = value; }

    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline void SetPeriodEnd(Aws::Utils::DateTime&& value) { m_periodEndHasBeenSet = true; m_periodEnd = std::move(value); }

    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline ReportSummary& WithPeriodEnd(const Aws::Utils::DateTime& value) { SetPeriodEnd(value); return *this;}

    /**
     * <p>Timestamp indicating the report resource effective end.</p>
     */
    inline ReportSummary& WithPeriodEnd(Aws::Utils::DateTime&& value) { SetPeriodEnd(std::move(value)); return *this;}


    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline const Aws::Utils::DateTime& GetPeriodStart() const{ return m_periodStart; }

    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline bool PeriodStartHasBeenSet() const { return m_periodStartHasBeenSet; }

    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline void SetPeriodStart(const Aws::Utils::DateTime& value) { m_periodStartHasBeenSet = true; m_periodStart = value; }

    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline void SetPeriodStart(Aws::Utils::DateTime&& value) { m_periodStartHasBeenSet = true; m_periodStart = std::move(value); }

    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline ReportSummary& WithPeriodStart(const Aws::Utils::DateTime& value) { SetPeriodStart(value); return *this;}

    /**
     * <p>Timestamp indicating the report resource effective start.</p>
     */
    inline ReportSummary& WithPeriodStart(Aws::Utils::DateTime&& value) { SetPeriodStart(std::move(value)); return *this;}


    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline ReportSummary& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline ReportSummary& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>Associated product name for the report resource.</p>
     */
    inline ReportSummary& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>Series for the report resource.</p>
     */
    inline const Aws::String& GetSeries() const{ return m_series; }

    /**
     * <p>Series for the report resource.</p>
     */
    inline bool SeriesHasBeenSet() const { return m_seriesHasBeenSet; }

    /**
     * <p>Series for the report resource.</p>
     */
    inline void SetSeries(const Aws::String& value) { m_seriesHasBeenSet = true; m_series = value; }

    /**
     * <p>Series for the report resource.</p>
     */
    inline void SetSeries(Aws::String&& value) { m_seriesHasBeenSet = true; m_series = std::move(value); }

    /**
     * <p>Series for the report resource.</p>
     */
    inline void SetSeries(const char* value) { m_seriesHasBeenSet = true; m_series.assign(value); }

    /**
     * <p>Series for the report resource.</p>
     */
    inline ReportSummary& WithSeries(const Aws::String& value) { SetSeries(value); return *this;}

    /**
     * <p>Series for the report resource.</p>
     */
    inline ReportSummary& WithSeries(Aws::String&& value) { SetSeries(std::move(value)); return *this;}

    /**
     * <p>Series for the report resource.</p>
     */
    inline ReportSummary& WithSeries(const char* value) { SetSeries(value); return *this;}


    /**
     * <p>Current state of the report resource.</p>
     */
    inline const PublishedState& GetState() const{ return m_state; }

    /**
     * <p>Current state of the report resource.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Current state of the report resource.</p>
     */
    inline void SetState(const PublishedState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Current state of the report resource.</p>
     */
    inline void SetState(PublishedState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Current state of the report resource.</p>
     */
    inline ReportSummary& WithState(const PublishedState& value) { SetState(value); return *this;}

    /**
     * <p>Current state of the report resource.</p>
     */
    inline ReportSummary& WithState(PublishedState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline ReportSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline ReportSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the current upload state.</p>
     */
    inline ReportSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The current state of the document upload.</p>
     */
    inline const UploadState& GetUploadState() const{ return m_uploadState; }

    /**
     * <p>The current state of the document upload.</p>
     */
    inline bool UploadStateHasBeenSet() const { return m_uploadStateHasBeenSet; }

    /**
     * <p>The current state of the document upload.</p>
     */
    inline void SetUploadState(const UploadState& value) { m_uploadStateHasBeenSet = true; m_uploadState = value; }

    /**
     * <p>The current state of the document upload.</p>
     */
    inline void SetUploadState(UploadState&& value) { m_uploadStateHasBeenSet = true; m_uploadState = std::move(value); }

    /**
     * <p>The current state of the document upload.</p>
     */
    inline ReportSummary& WithUploadState(const UploadState& value) { SetUploadState(value); return *this;}

    /**
     * <p>The current state of the document upload.</p>
     */
    inline ReportSummary& WithUploadState(UploadState&& value) { SetUploadState(std::move(value)); return *this;}


    /**
     * <p>Version for the report resource.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>Version for the report resource.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version for the report resource.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version for the report resource.</p>
     */
    inline ReportSummary& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_periodEnd;
    bool m_periodEndHasBeenSet = false;

    Aws::Utils::DateTime m_periodStart;
    bool m_periodStartHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_series;
    bool m_seriesHasBeenSet = false;

    PublishedState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    UploadState m_uploadState;
    bool m_uploadStateHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
