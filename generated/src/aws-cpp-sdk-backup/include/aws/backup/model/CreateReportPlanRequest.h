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
    AWS_BACKUP_API CreateReportPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReportPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the report plan. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline const Aws::String& GetReportPlanName() const { return m_reportPlanName; }
    inline bool ReportPlanNameHasBeenSet() const { return m_reportPlanNameHasBeenSet; }
    template<typename ReportPlanNameT = Aws::String>
    void SetReportPlanName(ReportPlanNameT&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::forward<ReportPlanNameT>(value); }
    template<typename ReportPlanNameT = Aws::String>
    CreateReportPlanRequest& WithReportPlanName(ReportPlanNameT&& value) { SetReportPlanName(std::forward<ReportPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the report plan with a maximum of 1,024
     * characters.</p>
     */
    inline const Aws::String& GetReportPlanDescription() const { return m_reportPlanDescription; }
    inline bool ReportPlanDescriptionHasBeenSet() const { return m_reportPlanDescriptionHasBeenSet; }
    template<typename ReportPlanDescriptionT = Aws::String>
    void SetReportPlanDescription(ReportPlanDescriptionT&& value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription = std::forward<ReportPlanDescriptionT>(value); }
    template<typename ReportPlanDescriptionT = Aws::String>
    CreateReportPlanRequest& WithReportPlanDescription(ReportPlanDescriptionT&& value) { SetReportPlanDescription(std::forward<ReportPlanDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about where and how to deliver your
     * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
     * of your reports.</p>
     */
    inline const ReportDeliveryChannel& GetReportDeliveryChannel() const { return m_reportDeliveryChannel; }
    inline bool ReportDeliveryChannelHasBeenSet() const { return m_reportDeliveryChannelHasBeenSet; }
    template<typename ReportDeliveryChannelT = ReportDeliveryChannel>
    void SetReportDeliveryChannel(ReportDeliveryChannelT&& value) { m_reportDeliveryChannelHasBeenSet = true; m_reportDeliveryChannel = std::forward<ReportDeliveryChannelT>(value); }
    template<typename ReportDeliveryChannelT = ReportDeliveryChannel>
    CreateReportPlanRequest& WithReportDeliveryChannel(ReportDeliveryChannelT&& value) { SetReportDeliveryChannel(std::forward<ReportDeliveryChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline const ReportSetting& GetReportSetting() const { return m_reportSetting; }
    inline bool ReportSettingHasBeenSet() const { return m_reportSettingHasBeenSet; }
    template<typename ReportSettingT = ReportSetting>
    void SetReportSetting(ReportSettingT&& value) { m_reportSettingHasBeenSet = true; m_reportSetting = std::forward<ReportSettingT>(value); }
    template<typename ReportSettingT = ReportSetting>
    CreateReportPlanRequest& WithReportSetting(ReportSettingT&& value) { SetReportSetting(std::forward<ReportSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the report plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetReportPlanTags() const { return m_reportPlanTags; }
    inline bool ReportPlanTagsHasBeenSet() const { return m_reportPlanTagsHasBeenSet; }
    template<typename ReportPlanTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetReportPlanTags(ReportPlanTagsT&& value) { m_reportPlanTagsHasBeenSet = true; m_reportPlanTags = std::forward<ReportPlanTagsT>(value); }
    template<typename ReportPlanTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateReportPlanRequest& WithReportPlanTags(ReportPlanTagsT&& value) { SetReportPlanTags(std::forward<ReportPlanTagsT>(value)); return *this;}
    template<typename ReportPlanTagsKeyT = Aws::String, typename ReportPlanTagsValueT = Aws::String>
    CreateReportPlanRequest& AddReportPlanTags(ReportPlanTagsKeyT&& key, ReportPlanTagsValueT&& value) {
      m_reportPlanTagsHasBeenSet = true; m_reportPlanTags.emplace(std::forward<ReportPlanTagsKeyT>(key), std::forward<ReportPlanTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateReportPlanInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateReportPlanRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
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

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
