/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/ReportDeliveryChannel.h>
#include <aws/backup/model/ReportSetting.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateReportPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateReportPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReportPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline const Aws::String& GetReportPlanName() const{ return m_reportPlanName; }

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline bool ReportPlanNameHasBeenSet() const { return m_reportPlanNameHasBeenSet; }

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetReportPlanName(const Aws::String& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = value; }

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetReportPlanName(Aws::String&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::move(value); }

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetReportPlanName(const char* value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName.assign(value); }

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateReportPlanRequest& WithReportPlanName(const Aws::String& value) { SetReportPlanName(value); return *this;}

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateReportPlanRequest& WithReportPlanName(Aws::String&& value) { SetReportPlanName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateReportPlanRequest& WithReportPlanName(const char* value) { SetReportPlanName(value); return *this;}


    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline const Aws::String& GetReportPlanDescription() const{ return m_reportPlanDescription; }

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline bool ReportPlanDescriptionHasBeenSet() const { return m_reportPlanDescriptionHasBeenSet; }

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline void SetReportPlanDescription(const Aws::String& value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription = value; }

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline void SetReportPlanDescription(Aws::String&& value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription = std::move(value); }

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline void SetReportPlanDescription(const char* value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription.assign(value); }

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline CreateReportPlanRequest& WithReportPlanDescription(const Aws::String& value) { SetReportPlanDescription(value); return *this;}

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline CreateReportPlanRequest& WithReportPlanDescription(Aws::String&& value) { SetReportPlanDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline CreateReportPlanRequest& WithReportPlanDescription(const char* value) { SetReportPlanDescription(value); return *this;}


    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline const ReportDeliveryChannel& GetReportDeliveryChannel() const{ return m_reportDeliveryChannel; }

    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline bool ReportDeliveryChannelHasBeenSet() const { return m_reportDeliveryChannelHasBeenSet; }

    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline void SetReportDeliveryChannel(const ReportDeliveryChannel& value) { m_reportDeliveryChannelHasBeenSet = true; m_reportDeliveryChannel = value; }

    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline void SetReportDeliveryChannel(ReportDeliveryChannel&& value) { m_reportDeliveryChannelHasBeenSet = true; m_reportDeliveryChannel = std::move(value); }

    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline CreateReportPlanRequest& WithReportDeliveryChannel(const ReportDeliveryChannel& value) { SetReportDeliveryChannel(value); return *this;}

    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline CreateReportPlanRequest& WithReportDeliveryChannel(ReportDeliveryChannel&& value) { SetReportDeliveryChannel(std::move(value)); return *this;}


    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline const ReportSetting& GetReportSetting() const{ return m_reportSetting; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline bool ReportSettingHasBeenSet() const { return m_reportSettingHasBeenSet; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline void SetReportSetting(const ReportSetting& value) { m_reportSettingHasBeenSet = true; m_reportSetting = value; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline void SetReportSetting(ReportSetting&& value) { m_reportSettingHasBeenSet = true; m_reportSetting = std::move(value); }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline CreateReportPlanRequest& WithReportSetting(const ReportSetting& value) { SetReportSetting(value); return *this;}

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline CreateReportPlanRequest& WithReportSetting(ReportSetting&& value) { SetReportSetting(std::move(value)); return *this;}


    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetReportPlanTags() const{ return m_reportPlanTags; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline bool ReportPlanTagsHasBeenSet() const { return m_reportPlanTagsHasBeenSet; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline void SetReportPlanTags(const Aws::Map<Aws::String, Aws::String>& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags = value; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline void SetReportPlanTags(Aws::Map<Aws::String, Aws::String>&& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags = std::move(value); }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& WithReportPlanTags(const Aws::Map<Aws::String, Aws::String>& value) { SetReportPlanTags(value); return *this;}

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& WithReportPlanTags(Aws::Map<Aws::String, Aws::String>&& value) { SetReportPlanTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(const Aws::String& key, const Aws::String& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(Aws::String&& key, const Aws::String& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(const Aws::String& key, Aws::String&& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(Aws::String&& key, Aws::String&& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(const char* key, Aws::String&& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(Aws::String&& key, const char* value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the report plans that you
     * create. Each tag is a key-value pair.</p>
     */
    inline CreateReportPlanRequest& AddReportPlanTags(const char* key, const char* value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(key, value); return *this; }


    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline CreateReportPlanRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline CreateReportPlanRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline CreateReportPlanRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_reportPlanName;
    bool m_reportPlanNameHasBeenSet = false;

    Aws::String m_reportPlanDescription;
    bool m_reportPlanDescriptionHasBeenSet = false;

    ReportDeliveryChannel m_reportDeliveryChannel;
    bool m_reportDeliveryChannelHasBeenSet = false;

    ReportSetting m_reportSetting;
    bool m_reportSettingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_reportPlanTags;
    bool m_reportPlanTagsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
