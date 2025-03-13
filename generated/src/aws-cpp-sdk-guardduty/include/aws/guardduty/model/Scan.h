/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/ScanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/TriggerDetails.h>
#include <aws/guardduty/model/ResourceDetails.h>
#include <aws/guardduty/model/ScanResultDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ScanType.h>
#include <aws/guardduty/model/VolumeDetail.h>
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
   * <p>Contains information about malware scans associated with GuardDuty Malware
   * Protection for EC2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Scan">AWS API
   * Reference</a></p>
   */
  class Scan
  {
  public:
    AWS_GUARDDUTY_API Scan() = default;
    AWS_GUARDDUTY_API Scan(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Scan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the detector that is associated with the request.</p> <p>To
     * find the <code>detectorId</code> in the current Region, see the Settings page in
     * the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    Scan& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. If the account is an administrator, the
     * <code>AdminDetectorId</code> will be the same as the one used for
     * <code>DetectorId</code>.</p> <p>To find the <code>detectorId</code> in the
     * current Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetAdminDetectorId() const { return m_adminDetectorId; }
    inline bool AdminDetectorIdHasBeenSet() const { return m_adminDetectorIdHasBeenSet; }
    template<typename AdminDetectorIdT = Aws::String>
    void SetAdminDetectorId(AdminDetectorIdT&& value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId = std::forward<AdminDetectorIdT>(value); }
    template<typename AdminDetectorIdT = Aws::String>
    Scan& WithAdminDetectorId(AdminDetectorIdT&& value) { SetAdminDetectorId(std::forward<AdminDetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline const Aws::String& GetScanId() const { return m_scanId; }
    inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
    template<typename ScanIdT = Aws::String>
    void SetScanId(ScanIdT&& value) { m_scanIdHasBeenSet = true; m_scanId = std::forward<ScanIdT>(value); }
    template<typename ScanIdT = Aws::String>
    Scan& WithScanId(ScanIdT&& value) { SetScanId(std::forward<ScanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline ScanStatus GetScanStatus() const { return m_scanStatus; }
    inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
    inline void SetScanStatus(ScanStatus value) { m_scanStatusHasBeenSet = true; m_scanStatus = value; }
    inline Scan& WithScanStatus(ScanStatus value) { SetScanStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the reason for <code>FAILED</code> scan status.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    Scan& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline const Aws::Utils::DateTime& GetScanStartTime() const { return m_scanStartTime; }
    inline bool ScanStartTimeHasBeenSet() const { return m_scanStartTimeHasBeenSet; }
    template<typename ScanStartTimeT = Aws::Utils::DateTime>
    void SetScanStartTime(ScanStartTimeT&& value) { m_scanStartTimeHasBeenSet = true; m_scanStartTime = std::forward<ScanStartTimeT>(value); }
    template<typename ScanStartTimeT = Aws::Utils::DateTime>
    Scan& WithScanStartTime(ScanStartTimeT&& value) { SetScanStartTime(std::forward<ScanStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetScanEndTime() const { return m_scanEndTime; }
    inline bool ScanEndTimeHasBeenSet() const { return m_scanEndTimeHasBeenSet; }
    template<typename ScanEndTimeT = Aws::Utils::DateTime>
    void SetScanEndTime(ScanEndTimeT&& value) { m_scanEndTimeHasBeenSet = true; m_scanEndTime = std::forward<ScanEndTimeT>(value); }
    template<typename ScanEndTimeT = Aws::Utils::DateTime>
    Scan& WithScanEndTime(ScanEndTimeT&& value) { SetScanEndTime(std::forward<ScanEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline const TriggerDetails& GetTriggerDetails() const { return m_triggerDetails; }
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
    template<typename TriggerDetailsT = TriggerDetails>
    void SetTriggerDetails(TriggerDetailsT&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::forward<TriggerDetailsT>(value); }
    template<typename TriggerDetailsT = TriggerDetails>
    Scan& WithTriggerDetails(TriggerDetailsT&& value) { SetTriggerDetails(std::forward<TriggerDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    template<typename ResourceDetailsT = ResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = ResourceDetails>
    Scan& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the result of the scan.</p>
     */
    inline const ScanResultDetails& GetScanResultDetails() const { return m_scanResultDetails; }
    inline bool ScanResultDetailsHasBeenSet() const { return m_scanResultDetailsHasBeenSet; }
    template<typename ScanResultDetailsT = ScanResultDetails>
    void SetScanResultDetails(ScanResultDetailsT&& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails = std::forward<ScanResultDetailsT>(value); }
    template<typename ScanResultDetailsT = ScanResultDetails>
    Scan& WithScanResultDetails(ScanResultDetailsT&& value) { SetScanResultDetails(std::forward<ScanResultDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Scan& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents total bytes that were scanned.</p>
     */
    inline long long GetTotalBytes() const { return m_totalBytes; }
    inline bool TotalBytesHasBeenSet() const { return m_totalBytesHasBeenSet; }
    inline void SetTotalBytes(long long value) { m_totalBytesHasBeenSet = true; m_totalBytes = value; }
    inline Scan& WithTotalBytes(long long value) { SetTotalBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the number of files that were scanned.</p>
     */
    inline long long GetFileCount() const { return m_fileCount; }
    inline bool FileCountHasBeenSet() const { return m_fileCountHasBeenSet; }
    inline void SetFileCount(long long value) { m_fileCountHasBeenSet = true; m_fileCount = value; }
    inline Scan& WithFileCount(long long value) { SetFileCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetAttachedVolumes() const { return m_attachedVolumes; }
    inline bool AttachedVolumesHasBeenSet() const { return m_attachedVolumesHasBeenSet; }
    template<typename AttachedVolumesT = Aws::Vector<VolumeDetail>>
    void SetAttachedVolumes(AttachedVolumesT&& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes = std::forward<AttachedVolumesT>(value); }
    template<typename AttachedVolumesT = Aws::Vector<VolumeDetail>>
    Scan& WithAttachedVolumes(AttachedVolumesT&& value) { SetAttachedVolumes(std::forward<AttachedVolumesT>(value)); return *this;}
    template<typename AttachedVolumesT = VolumeDetail>
    Scan& AddAttachedVolumes(AttachedVolumesT&& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes.emplace_back(std::forward<AttachedVolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the scan type that invoked the malware scan.</p>
     */
    inline ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline Scan& WithScanType(ScanType value) { SetScanType(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_adminDetectorId;
    bool m_adminDetectorIdHasBeenSet = false;

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;

    ScanStatus m_scanStatus{ScanStatus::NOT_SET};
    bool m_scanStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_scanStartTime{};
    bool m_scanStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scanEndTime{};
    bool m_scanEndTimeHasBeenSet = false;

    TriggerDetails m_triggerDetails;
    bool m_triggerDetailsHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    ScanResultDetails m_scanResultDetails;
    bool m_scanResultDetailsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    long long m_totalBytes{0};
    bool m_totalBytesHasBeenSet = false;

    long long m_fileCount{0};
    bool m_fileCountHasBeenSet = false;

    Aws::Vector<VolumeDetail> m_attachedVolumes;
    bool m_attachedVolumesHasBeenSet = false;

    ScanType m_scanType{ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
