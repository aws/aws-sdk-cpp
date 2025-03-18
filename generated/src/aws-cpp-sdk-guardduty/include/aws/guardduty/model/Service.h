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
    AWS_GUARDDUTY_API Service() = default;
    AWS_GUARDDUTY_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the activity that is described in a finding.</p>
     */
    inline const Action& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Action>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Action>
    Service& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An evidence object associated with the service.</p>
     */
    inline const Evidence& GetEvidence() const { return m_evidence; }
    inline bool EvidenceHasBeenSet() const { return m_evidenceHasBeenSet; }
    template<typename EvidenceT = Evidence>
    void SetEvidence(EvidenceT&& value) { m_evidenceHasBeenSet = true; m_evidence = std::forward<EvidenceT>(value); }
    template<typename EvidenceT = Evidence>
    Service& WithEvidence(EvidenceT&& value) { SetEvidence(std::forward<EvidenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this finding is archived.</p>
     */
    inline bool GetArchived() const { return m_archived; }
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }
    inline Service& WithArchived(bool value) { SetArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total count of the occurrences of this finding type.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Service& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector ID for the GuardDuty service.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    Service& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline const Aws::String& GetEventFirstSeen() const { return m_eventFirstSeen; }
    inline bool EventFirstSeenHasBeenSet() const { return m_eventFirstSeenHasBeenSet; }
    template<typename EventFirstSeenT = Aws::String>
    void SetEventFirstSeen(EventFirstSeenT&& value) { m_eventFirstSeenHasBeenSet = true; m_eventFirstSeen = std::forward<EventFirstSeenT>(value); }
    template<typename EventFirstSeenT = Aws::String>
    Service& WithEventFirstSeen(EventFirstSeenT&& value) { SetEventFirstSeen(std::forward<EventFirstSeenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last-seen timestamp of the activity that prompted GuardDuty to generate
     * this finding.</p>
     */
    inline const Aws::String& GetEventLastSeen() const { return m_eventLastSeen; }
    inline bool EventLastSeenHasBeenSet() const { return m_eventLastSeenHasBeenSet; }
    template<typename EventLastSeenT = Aws::String>
    void SetEventLastSeen(EventLastSeenT&& value) { m_eventLastSeenHasBeenSet = true; m_eventLastSeen = std::forward<EventLastSeenT>(value); }
    template<typename EventLastSeenT = Aws::String>
    Service& WithEventLastSeen(EventLastSeenT&& value) { SetEventLastSeen(std::forward<EventLastSeenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource role information for this finding.</p>
     */
    inline const Aws::String& GetResourceRole() const { return m_resourceRole; }
    inline bool ResourceRoleHasBeenSet() const { return m_resourceRoleHasBeenSet; }
    template<typename ResourceRoleT = Aws::String>
    void SetResourceRole(ResourceRoleT&& value) { m_resourceRoleHasBeenSet = true; m_resourceRole = std::forward<ResourceRoleT>(value); }
    template<typename ResourceRoleT = Aws::String>
    Service& WithResourceRole(ResourceRoleT&& value) { SetResourceRole(std::forward<ResourceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service (GuardDuty) that generated a
     * finding.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    Service& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feedback that was submitted about the finding.</p>
     */
    inline const Aws::String& GetUserFeedback() const { return m_userFeedback; }
    inline bool UserFeedbackHasBeenSet() const { return m_userFeedbackHasBeenSet; }
    template<typename UserFeedbackT = Aws::String>
    void SetUserFeedback(UserFeedbackT&& value) { m_userFeedbackHasBeenSet = true; m_userFeedback = std::forward<UserFeedbackT>(value); }
    template<typename UserFeedbackT = Aws::String>
    Service& WithUserFeedback(UserFeedbackT&& value) { SetUserFeedback(std::forward<UserFeedbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional information about the generated finding.</p>
     */
    inline const ServiceAdditionalInfo& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = ServiceAdditionalInfo>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = ServiceAdditionalInfo>
    Service& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that generated a finding.</p>
     */
    inline const Aws::String& GetFeatureName() const { return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    template<typename FeatureNameT = Aws::String>
    void SetFeatureName(FeatureNameT&& value) { m_featureNameHasBeenSet = true; m_featureName = std::forward<FeatureNameT>(value); }
    template<typename FeatureNameT = Aws::String>
    Service& WithFeatureName(FeatureNameT&& value) { SetFeatureName(std::forward<FeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns details from the malware scan that created a finding.</p>
     */
    inline const EbsVolumeScanDetails& GetEbsVolumeScanDetails() const { return m_ebsVolumeScanDetails; }
    inline bool EbsVolumeScanDetailsHasBeenSet() const { return m_ebsVolumeScanDetailsHasBeenSet; }
    template<typename EbsVolumeScanDetailsT = EbsVolumeScanDetails>
    void SetEbsVolumeScanDetails(EbsVolumeScanDetailsT&& value) { m_ebsVolumeScanDetailsHasBeenSet = true; m_ebsVolumeScanDetails = std::forward<EbsVolumeScanDetailsT>(value); }
    template<typename EbsVolumeScanDetailsT = EbsVolumeScanDetails>
    Service& WithEbsVolumeScanDetails(EbsVolumeScanDetailsT&& value) { SetEbsVolumeScanDetails(std::forward<EbsVolumeScanDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the process and any required context values for a specific
     * finding</p>
     */
    inline const RuntimeDetails& GetRuntimeDetails() const { return m_runtimeDetails; }
    inline bool RuntimeDetailsHasBeenSet() const { return m_runtimeDetailsHasBeenSet; }
    template<typename RuntimeDetailsT = RuntimeDetails>
    void SetRuntimeDetails(RuntimeDetailsT&& value) { m_runtimeDetailsHasBeenSet = true; m_runtimeDetails = std::forward<RuntimeDetailsT>(value); }
    template<typename RuntimeDetailsT = RuntimeDetails>
    Service& WithRuntimeDetails(RuntimeDetailsT&& value) { SetRuntimeDetails(std::forward<RuntimeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the detected unusual behavior.</p>
     */
    inline const Detection& GetDetection() const { return m_detection; }
    inline bool DetectionHasBeenSet() const { return m_detectionHasBeenSet; }
    template<typename DetectionT = Detection>
    void SetDetection(DetectionT&& value) { m_detectionHasBeenSet = true; m_detection = std::forward<DetectionT>(value); }
    template<typename DetectionT = Detection>
    Service& WithDetection(DetectionT&& value) { SetDetection(std::forward<DetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns details from the malware scan that generated a GuardDuty finding.</p>
     */
    inline const MalwareScanDetails& GetMalwareScanDetails() const { return m_malwareScanDetails; }
    inline bool MalwareScanDetailsHasBeenSet() const { return m_malwareScanDetailsHasBeenSet; }
    template<typename MalwareScanDetailsT = MalwareScanDetails>
    void SetMalwareScanDetails(MalwareScanDetailsT&& value) { m_malwareScanDetailsHasBeenSet = true; m_malwareScanDetails = std::forward<MalwareScanDetailsT>(value); }
    template<typename MalwareScanDetailsT = MalwareScanDetails>
    Service& WithMalwareScanDetails(MalwareScanDetailsT&& value) { SetMalwareScanDetails(std::forward<MalwareScanDetailsT>(value)); return *this;}
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Evidence m_evidence;
    bool m_evidenceHasBeenSet = false;

    bool m_archived{false};
    bool m_archivedHasBeenSet = false;

    int m_count{0};
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
