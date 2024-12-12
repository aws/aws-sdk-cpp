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
    AWS_GUARDDUTY_API Scan();
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
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline Scan& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline Scan& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline Scan& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
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
    inline const Aws::String& GetAdminDetectorId() const{ return m_adminDetectorId; }
    inline bool AdminDetectorIdHasBeenSet() const { return m_adminDetectorIdHasBeenSet; }
    inline void SetAdminDetectorId(const Aws::String& value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId = value; }
    inline void SetAdminDetectorId(Aws::String&& value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId = std::move(value); }
    inline void SetAdminDetectorId(const char* value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId.assign(value); }
    inline Scan& WithAdminDetectorId(const Aws::String& value) { SetAdminDetectorId(value); return *this;}
    inline Scan& WithAdminDetectorId(Aws::String&& value) { SetAdminDetectorId(std::move(value)); return *this;}
    inline Scan& WithAdminDetectorId(const char* value) { SetAdminDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline const Aws::String& GetScanId() const{ return m_scanId; }
    inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
    inline void SetScanId(const Aws::String& value) { m_scanIdHasBeenSet = true; m_scanId = value; }
    inline void SetScanId(Aws::String&& value) { m_scanIdHasBeenSet = true; m_scanId = std::move(value); }
    inline void SetScanId(const char* value) { m_scanIdHasBeenSet = true; m_scanId.assign(value); }
    inline Scan& WithScanId(const Aws::String& value) { SetScanId(value); return *this;}
    inline Scan& WithScanId(Aws::String&& value) { SetScanId(std::move(value)); return *this;}
    inline Scan& WithScanId(const char* value) { SetScanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline const ScanStatus& GetScanStatus() const{ return m_scanStatus; }
    inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
    inline void SetScanStatus(const ScanStatus& value) { m_scanStatusHasBeenSet = true; m_scanStatus = value; }
    inline void SetScanStatus(ScanStatus&& value) { m_scanStatusHasBeenSet = true; m_scanStatus = std::move(value); }
    inline Scan& WithScanStatus(const ScanStatus& value) { SetScanStatus(value); return *this;}
    inline Scan& WithScanStatus(ScanStatus&& value) { SetScanStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the reason for <code>FAILED</code> scan status.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline Scan& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline Scan& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline Scan& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline const Aws::Utils::DateTime& GetScanStartTime() const{ return m_scanStartTime; }
    inline bool ScanStartTimeHasBeenSet() const { return m_scanStartTimeHasBeenSet; }
    inline void SetScanStartTime(const Aws::Utils::DateTime& value) { m_scanStartTimeHasBeenSet = true; m_scanStartTime = value; }
    inline void SetScanStartTime(Aws::Utils::DateTime&& value) { m_scanStartTimeHasBeenSet = true; m_scanStartTime = std::move(value); }
    inline Scan& WithScanStartTime(const Aws::Utils::DateTime& value) { SetScanStartTime(value); return *this;}
    inline Scan& WithScanStartTime(Aws::Utils::DateTime&& value) { SetScanStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetScanEndTime() const{ return m_scanEndTime; }
    inline bool ScanEndTimeHasBeenSet() const { return m_scanEndTimeHasBeenSet; }
    inline void SetScanEndTime(const Aws::Utils::DateTime& value) { m_scanEndTimeHasBeenSet = true; m_scanEndTime = value; }
    inline void SetScanEndTime(Aws::Utils::DateTime&& value) { m_scanEndTimeHasBeenSet = true; m_scanEndTime = std::move(value); }
    inline Scan& WithScanEndTime(const Aws::Utils::DateTime& value) { SetScanEndTime(value); return *this;}
    inline Scan& WithScanEndTime(Aws::Utils::DateTime&& value) { SetScanEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline const TriggerDetails& GetTriggerDetails() const{ return m_triggerDetails; }
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
    inline void SetTriggerDetails(const TriggerDetails& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = value; }
    inline void SetTriggerDetails(TriggerDetails&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::move(value); }
    inline Scan& WithTriggerDetails(const TriggerDetails& value) { SetTriggerDetails(value); return *this;}
    inline Scan& WithTriggerDetails(TriggerDetails&& value) { SetTriggerDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }
    inline Scan& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}
    inline Scan& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the result of the scan.</p>
     */
    inline const ScanResultDetails& GetScanResultDetails() const{ return m_scanResultDetails; }
    inline bool ScanResultDetailsHasBeenSet() const { return m_scanResultDetailsHasBeenSet; }
    inline void SetScanResultDetails(const ScanResultDetails& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails = value; }
    inline void SetScanResultDetails(ScanResultDetails&& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails = std::move(value); }
    inline Scan& WithScanResultDetails(const ScanResultDetails& value) { SetScanResultDetails(value); return *this;}
    inline Scan& WithScanResultDetails(ScanResultDetails&& value) { SetScanResultDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Scan& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Scan& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Scan& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents total bytes that were scanned.</p>
     */
    inline long long GetTotalBytes() const{ return m_totalBytes; }
    inline bool TotalBytesHasBeenSet() const { return m_totalBytesHasBeenSet; }
    inline void SetTotalBytes(long long value) { m_totalBytesHasBeenSet = true; m_totalBytes = value; }
    inline Scan& WithTotalBytes(long long value) { SetTotalBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the number of files that were scanned.</p>
     */
    inline long long GetFileCount() const{ return m_fileCount; }
    inline bool FileCountHasBeenSet() const { return m_fileCountHasBeenSet; }
    inline void SetFileCount(long long value) { m_fileCountHasBeenSet = true; m_fileCount = value; }
    inline Scan& WithFileCount(long long value) { SetFileCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetAttachedVolumes() const{ return m_attachedVolumes; }
    inline bool AttachedVolumesHasBeenSet() const { return m_attachedVolumesHasBeenSet; }
    inline void SetAttachedVolumes(const Aws::Vector<VolumeDetail>& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes = value; }
    inline void SetAttachedVolumes(Aws::Vector<VolumeDetail>&& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes = std::move(value); }
    inline Scan& WithAttachedVolumes(const Aws::Vector<VolumeDetail>& value) { SetAttachedVolumes(value); return *this;}
    inline Scan& WithAttachedVolumes(Aws::Vector<VolumeDetail>&& value) { SetAttachedVolumes(std::move(value)); return *this;}
    inline Scan& AddAttachedVolumes(const VolumeDetail& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes.push_back(value); return *this; }
    inline Scan& AddAttachedVolumes(VolumeDetail&& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the scan type that invoked the malware scan.</p>
     */
    inline const ScanType& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline Scan& WithScanType(const ScanType& value) { SetScanType(value); return *this;}
    inline Scan& WithScanType(ScanType&& value) { SetScanType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_adminDetectorId;
    bool m_adminDetectorIdHasBeenSet = false;

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;

    ScanStatus m_scanStatus;
    bool m_scanStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_scanStartTime;
    bool m_scanStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scanEndTime;
    bool m_scanEndTimeHasBeenSet = false;

    TriggerDetails m_triggerDetails;
    bool m_triggerDetailsHasBeenSet = false;

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    ScanResultDetails m_scanResultDetails;
    bool m_scanResultDetailsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    long long m_totalBytes;
    bool m_totalBytesHasBeenSet = false;

    long long m_fileCount;
    bool m_fileCountHasBeenSet = false;

    Aws::Vector<VolumeDetail> m_attachedVolumes;
    bool m_attachedVolumesHasBeenSet = false;

    ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
