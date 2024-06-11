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
#include <aws/guardduty/model/RuntimeDetails.h>
#include <aws/guardduty/model/Detection.h>
#include <aws/guardduty/model/MalwareScanDetails.h>
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


    ///@{
    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline Service& WithAction(const Action& value) { SetAction(value); return *this;}
    inline Service& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline const Evidence& GetEvidence() const{ return m_evidence; }
    inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }
    inline void SetEvidence(const Evidence& value) { m_evidenceHasBeenSet = true; m_evidence = value; }
    inline void SetEvidence(Evidence&& value) { m_evidenceHasBeenSet = true; m_evidence = std::move(value); }
    inline Service& WithEvidence(const Evidence& value) { SetEvidence(value); return *this;}
    inline Service& WithEvidence(Evidence&& value) { SetEvidence(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline bool GetArchived() const{ return m_archived; }
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }
    inline Service& WithArchived(bool value) { SetArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total count of the occurrences of this finding type.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Service& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline Service& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline Service& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline Service& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline const Aws::String& GetEventFirstSeen() const{ return m_eventFirstSeen; }
    inline bool EventFirstSeenHasBeenSet() const { return m_eventFirstSeenHasBeenSet; }
    inline void SetEventFirstSeen(const Aws::String& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = value; }
    inline void SetEventFirstSeen(Aws::String&& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = std::move(value); }
    inline void SetEventFirstSeen(const char* value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen.assign(value); }
    inline Service& WithEventFirstSeen(const Aws::String& value) { SetEventFirstSeen(value); return *this;}
    inline Service& WithEventFirstSeen(Aws::String&& value) { SetEventFirstSeen(std::move(value)); return *this;}
    inline Service& WithEventFirstSeen(const char* value) { SetEventFirstSeen(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline const Aws::String& GetEventLastSeen() const{ return m_eventLastSeen; }
    inline bool EventLastSeenHasBeenSet() const { return m_eventLastSeenHasBeenSet; }
    inline void SetEventLastSeen(const Aws::String& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = value; }
    inline void SetEventLastSeen(Aws::String&& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = std::move(value); }
    inline void SetEventLastSeen(const char* value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen.assign(value); }
    inline Service& WithEventLastSeen(const Aws::String& value) { SetEventLastSeen(value); return *this;}
    inline Service& WithEventLastSeen(Aws::String&& value) { SetEventLastSeen(std::move(value)); return *this;}
    inline Service& WithEventLastSeen(const char* value) { SetEventLastSeen(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource role information for this finding.</p>
     */
    inline const Aws::String& GetResourceRole() const{ return m_resourceRole; }
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }
    inline void SetResourceRole(const Aws::String& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = value; }
    inline void SetResourceRole(Aws::String&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::move(value); }
    inline void SetResourceRole(const char* value) { m_resourceRoleHasBeenSet = true; m_resourceRole.assign(value); }
    inline Service& WithResourceRole(const Aws::String& value) { SetResourceRole(value); return *this;}
    inline Service& WithResourceRole(Aws::String&& value) { SetResourceRole(std::move(value)); return *this;}
    inline Service& WithResourceRole(const char* value) { SetResourceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline const Aws::String& GetUserFeedback() const{ return m_userFeedback; }
    inline bool UserFeedbackHasBeenSet() const { return m_userFeedbackHasBeenSet; }
    inline void SetUserFeedback(const Aws::String& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = value; }
    inline void SetUserFeedback(Aws::String&& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = std::move(value); }
    inline void SetUserFeedback(const char* value) { m_userFeedbackHasBeenSet = true; m_userFeedback.assign(value); }
    inline Service& WithUserFeedback(const Aws::String& value) { SetUserFeedback(value); return *this;}
    inline Service& WithUserFeedback(Aws::String&& value) { SetUserFeedback(std::move(value)); return *this;}
    inline Service& WithUserFeedback(const char* value) { SetUserFeedback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline const ServiceAdditionalInfo& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    inline void SetAdditionalInfo(const ServiceAdditionalInfo& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }
    inline void SetAdditionalInfo(ServiceAdditionalInfo&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }
    inline Service& WithAdditionalInfo(const ServiceAdditionalInfo& value) { SetAdditionalInfo(value); return *this;}
    inline Service& WithAdditionalInfo(ServiceAdditionalInfo&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }
    inline Service& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}
    inline Service& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}
    inline Service& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline const EbsVolumeScanDetails& GetEbsVolumeScanDetails() const{ return m_ebsVolumeScanDetails; }
    inline bool EbsVolumeScanDetailsHasBeenSet() const { return m_ebsVolumeScanDetailsHasBeenSet; }
    inline void SetEbsVolumeScanDetails(const EbsVolumeScanDetails& value) { m_ebsVolumeScanDetailsHasBeenSet = true; m_ebsVolumeScanDetails = value; }
    inline void SetEbsVolumeScanDetails(EbsVolumeScanDetails&& value) { m_ebsVolumeScanDetailsHasBeenSet = true; m_ebsVolumeScanDetails = std::move(value); }
    inline Service& WithEbsVolumeScanDetails(const EbsVolumeScanDetails& value) { SetEbsVolumeScanDetails(value); return *this;}
    inline Service& WithEbsVolumeScanDetails(EbsVolumeScanDetails&& value) { SetEbsVolumeScanDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the process and any required context values for a specific
     * finding</p>
     */
    inline const RuntimeDetails& GetRuntimeDetails() const{ return m_runtimeDetails; }
    inline bool RuntimeDetailsHasBeenSet() const { return m_runtimeDetailsHasBeenSet; }
    inline void SetRuntimeDetails(const RuntimeDetails& value) { m_runtimeDetailsHasBeenSet = true; m_runtimeDetails = value; }
    inline void SetRuntimeDetails(RuntimeDetails&& value) { m_runtimeDetailsHasBeenSet = true; m_runtimeDetails = std::move(value); }
    inline Service& WithRuntimeDetails(const RuntimeDetails& value) { SetRuntimeDetails(value); return *this;}
    inline Service& WithRuntimeDetails(RuntimeDetails&& value) { SetRuntimeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the detected unusual behavior.</p>
     */
    inline const Detection& GetDetection() const{ return m_detection; }
    inline bool DetectionHasBeenSet() const { return m_detectionHasBeenSet; }
    inline void SetDetection(const Detection& value) { m_detectionHasBeenSet = true; m_detection = value; }
    inline void SetDetection(Detection&& value) { m_detectionHasBeenSet = true; m_detection = std::move(value); }
    inline Service& WithDetection(const Detection& value) { SetDetection(value); return *this;}
    inline Service& WithDetection(Detection&& value) { SetDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns details from the malware scan that generated a GuardDuty finding.</p>
     */
    inline const MalwareScanDetails& GetMalwareScanDetails() const{ return m_malwareScanDetails; }
    inline bool MalwareScanDetailsHasBeenSet() const { return m_malwareScanDetailsHasBeenSet; }
    inline void SetMalwareScanDetails(const MalwareScanDetails& value) { m_malwareScanDetailsHasBeenSet = true; m_malwareScanDetails = value; }
    inline void SetMalwareScanDetails(MalwareScanDetails&& value) { m_malwareScanDetailsHasBeenSet = true; m_malwareScanDetails = std::move(value); }
    inline Service& WithMalwareScanDetails(const MalwareScanDetails& value) { SetMalwareScanDetails(value); return *this;}
    inline Service& WithMalwareScanDetails(MalwareScanDetails&& value) { SetMalwareScanDetails(std::move(value)); return *this;}
    ///@}
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

    RuntimeDetails m_runtimeDetails;
    bool m_runtimeDetailsHasBeenSet = false;

    Detection m_detection;
    bool m_detectionHasBeenSet = false;

    MalwareScanDetails m_malwareScanDetails;
    bool m_malwareScanDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
