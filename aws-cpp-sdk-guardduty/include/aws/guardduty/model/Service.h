/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Action.h>
#include <aws/guardduty/model/Evidence.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/ServiceAdditionalInfo.h>
#include <aws/guardduty/model/EbsVolumeScanDetails.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains additional information about the generated finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Service">AWS
   * API Reference</a></p>
   */
  class Service
  {
  public:
    AWS_GUARDDUTY_API Service();
    AWS_GUARDDUTY_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline Service& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline Service& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline const Evidence& GetEvidence() const{ return m_evidence; }

    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }

    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline void SetEvidence(const Evidence& value) { m_evidenceHasBeenSet = true; m_evidence = value; }

    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline void SetEvidence(Evidence&& value) { m_evidenceHasBeenSet = true; m_evidence = std::move(value); }

    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline Service& WithEvidence(const Evidence& value) { SetEvidence(value); return *this;}

    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline Service& WithEvidence(Evidence&& value) { SetEvidence(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline bool GetArchived() const{ return m_archived; }

    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }

    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }

    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline Service& WithArchived(bool value) { SetArchived(value); return *this;}


    /**
     * <p>The total count of the occurrences of this finding type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The total count of the occurrences of this finding type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total count of the occurrences of this finding type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total count of the occurrences of this finding type.</p>
     */
    inline Service& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline Service& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline Service& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline Service& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline const Aws::String& GetEventFirstSeen() const{ return m_eventFirstSeen; }

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline bool EventFirstSeenHasBeenSet() const { return m_eventFirstSeenHasBeenSet; }

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline void SetEventFirstSeen(const Aws::String& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = value; }

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline void SetEventFirstSeen(Aws::String&& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = std::move(value); }

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline void SetEventFirstSeen(const char* value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen.assign(value); }

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline Service& WithEventFirstSeen(const Aws::String& value) { SetEventFirstSeen(value); return *this;}

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline Service& WithEventFirstSeen(Aws::String&& value) { SetEventFirstSeen(std::move(value)); return *this;}

    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline Service& WithEventFirstSeen(const char* value) { SetEventFirstSeen(value); return *this;}


    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline const Aws::String& GetEventLastSeen() const{ return m_eventLastSeen; }

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline bool EventLastSeenHasBeenSet() const { return m_eventLastSeenHasBeenSet; }

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline void SetEventLastSeen(const Aws::String& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = value; }

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline void SetEventLastSeen(Aws::String&& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = std::move(value); }

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline void SetEventLastSeen(const char* value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen.assign(value); }

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline Service& WithEventLastSeen(const Aws::String& value) { SetEventLastSeen(value); return *this;}

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline Service& WithEventLastSeen(Aws::String&& value) { SetEventLastSeen(std::move(value)); return *this;}

    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline Service& WithEventLastSeen(const char* value) { SetEventLastSeen(value); return *this;}


    /**
     * <p>The resource role information for this finding.</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline Service& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline Service& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}

    /**
     * <p>The resource role information for this finding.</p>
     */
    inline Service& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}


    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline const Aws::String& GetUserFeedback() const{ return m_userFeedback; }

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline bool UserFeedbackHasBeenSet() const { return m_userFeedbackHasBeenSet; }

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline void SetUserFeedback(const Aws::String& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = value; }

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline void SetUserFeedback(Aws::String&& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = std::move(value); }

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline void SetUserFeedback(const char* value) { m_userFeedbackHasBeenSet = true; m_userFeedback.assign(value); }

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline Service& WithUserFeedback(const Aws::String& value) { SetUserFeedback(value); return *this;}

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline Service& WithUserFeedback(Aws::String&& value) { SetUserFeedback(std::move(value)); return *this;}

    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline Service& WithUserFeedback(const char* value) { SetUserFeedback(value); return *this;}


    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline const ServiceAdditionalInfo& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline void SetAdditionalInfo(const ServiceAdditionalInfo& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline void SetAdditionalInfo(ServiceAdditionalInfo&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline Service& WithAdditionalInfo(const ServiceAdditionalInfo& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline Service& WithAdditionalInfo(ServiceAdditionalInfo&& value) { SetAdditionalInfo(std::move(value)); return *this;}


    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline Service& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline Service& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline Service& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}


    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline const EbsVolumeScanDetails& GetEbsVolumeScanDetails() const{ return m_ebsVolumeScanDetails; }

    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline bool EbsVolumeScanDetailsHasBeenSet() const { return m_ebsVolumeScanDetailsHasBeenSet; }

    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline void SetEbsVolumeScanDetails(const EbsVolumeScanDetails& value) { m_ebsVolumeScanDetailsHasBeenSet = true; m_ebsVolumeScanDetails = value; }

    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline void SetEbsVolumeScanDetails(EbsVolumeScanDetails&& value) { m_ebsVolumeScanDetailsHasBeenSet = true; m_ebsVolumeScanDetails = std::move(value); }

    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline Service& WithEbsVolumeScanDetails(const EbsVolumeScanDetails& value) { SetEbsVolumeScanDetails(value); return *this;}

    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline Service& WithEbsVolumeScanDetails(EbsVolumeScanDetails&& value) { SetEbsVolumeScanDetails(std::move(value)); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Evidence m_evidence;
    bool m_evidenceHasBeenSet = false;

    bool m_archived;
    bool m_archivedHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_eventFirstSeen;
    bool m_eventFirstSeenHasBeenSet = false;

    Aws::String m_eventLastSeen;
    bool m_eventLastSeenHasBeenSet = false;

    Aws::String m_resourceRole;
    bool m_resourceRoleHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_userFeedback;
    bool m_userFeedbackHasBeenSet = false;

    ServiceAdditionalInfo m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet = false;

    EbsVolumeScanDetails m_ebsVolumeScanDetails;
    bool m_ebsVolumeScanDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
