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
   * <p>Contains information about a malware scan.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline Scan& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline Scan& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector that the request is associated with.</p>
     */
    inline Scan& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline const Aws::String& GetAdminDetectorId() const{ return m_adminDetectorId; }

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline bool AdminDetectorIdHasBeenSet() const { return m_adminDetectorIdHasBeenSet; }

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline void SetAdminDetectorId(const Aws::String& value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId = value; }

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline void SetAdminDetectorId(Aws::String&& value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId = std::move(value); }

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline void SetAdminDetectorId(const char* value) { m_adminDetectorIdHasBeenSet = true; m_adminDetectorId.assign(value); }

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline Scan& WithAdminDetectorId(const Aws::String& value) { SetAdminDetectorId(value); return *this;}

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline Scan& WithAdminDetectorId(Aws::String&& value) { SetAdminDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique detector ID of the administrator account that the request is
     * associated with. Note that this value will be the same as the one used for
     * <code>DetectorId</code> if the account is an administrator.</p>
     */
    inline Scan& WithAdminDetectorId(const char* value) { SetAdminDetectorId(value); return *this;}


    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline const Aws::String& GetScanId() const{ return m_scanId; }

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline void SetScanId(const Aws::String& value) { m_scanIdHasBeenSet = true; m_scanId = value; }

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline void SetScanId(Aws::String&& value) { m_scanIdHasBeenSet = true; m_scanId = std::move(value); }

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline void SetScanId(const char* value) { m_scanIdHasBeenSet = true; m_scanId.assign(value); }

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline Scan& WithScanId(const Aws::String& value) { SetScanId(value); return *this;}

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline Scan& WithScanId(Aws::String&& value) { SetScanId(std::move(value)); return *this;}

    /**
     * <p>The unique scan ID associated with a scan entry.</p>
     */
    inline Scan& WithScanId(const char* value) { SetScanId(value); return *this;}


    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline const ScanStatus& GetScanStatus() const{ return m_scanStatus; }

    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }

    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline void SetScanStatus(const ScanStatus& value) { m_scanStatusHasBeenSet = true; m_scanStatus = value; }

    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline void SetScanStatus(ScanStatus&& value) { m_scanStatusHasBeenSet = true; m_scanStatus = std::move(value); }

    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline Scan& WithScanStatus(const ScanStatus& value) { SetScanStatus(value); return *this;}

    /**
     * <p>An enum value representing possible scan statuses.</p>
     */
    inline Scan& WithScanStatus(ScanStatus&& value) { SetScanStatus(std::move(value)); return *this;}


    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline Scan& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline Scan& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>Represents the reason for FAILED scan status.</p>
     */
    inline Scan& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline const Aws::Utils::DateTime& GetScanStartTime() const{ return m_scanStartTime; }

    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline bool ScanStartTimeHasBeenSet() const { return m_scanStartTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline void SetScanStartTime(const Aws::Utils::DateTime& value) { m_scanStartTimeHasBeenSet = true; m_scanStartTime = value; }

    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline void SetScanStartTime(Aws::Utils::DateTime&& value) { m_scanStartTimeHasBeenSet = true; m_scanStartTime = std::move(value); }

    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline Scan& WithScanStartTime(const Aws::Utils::DateTime& value) { SetScanStartTime(value); return *this;}

    /**
     * <p>The timestamp of when the scan was triggered.</p>
     */
    inline Scan& WithScanStartTime(Aws::Utils::DateTime&& value) { SetScanStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetScanEndTime() const{ return m_scanEndTime; }

    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline bool ScanEndTimeHasBeenSet() const { return m_scanEndTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline void SetScanEndTime(const Aws::Utils::DateTime& value) { m_scanEndTimeHasBeenSet = true; m_scanEndTime = value; }

    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline void SetScanEndTime(Aws::Utils::DateTime&& value) { m_scanEndTimeHasBeenSet = true; m_scanEndTime = std::move(value); }

    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline Scan& WithScanEndTime(const Aws::Utils::DateTime& value) { SetScanEndTime(value); return *this;}

    /**
     * <p>The timestamp of when the scan was finished.</p>
     */
    inline Scan& WithScanEndTime(Aws::Utils::DateTime&& value) { SetScanEndTime(std::move(value)); return *this;}


    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline const TriggerDetails& GetTriggerDetails() const{ return m_triggerDetails; }

    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }

    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline void SetTriggerDetails(const TriggerDetails& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = value; }

    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline void SetTriggerDetails(TriggerDetails&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::move(value); }

    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline Scan& WithTriggerDetails(const TriggerDetails& value) { SetTriggerDetails(value); return *this;}

    /**
     * <p>Specifies the reason why the scan was initiated.</p>
     */
    inline Scan& WithTriggerDetails(TriggerDetails&& value) { SetTriggerDetails(std::move(value)); return *this;}


    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }

    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }

    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }

    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline Scan& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>Represents the resources that were scanned in the scan entry.</p>
     */
    inline Scan& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}


    /**
     * <p>Represents the result of the scan.</p>
     */
    inline const ScanResultDetails& GetScanResultDetails() const{ return m_scanResultDetails; }

    /**
     * <p>Represents the result of the scan.</p>
     */
    inline bool ScanResultDetailsHasBeenSet() const { return m_scanResultDetailsHasBeenSet; }

    /**
     * <p>Represents the result of the scan.</p>
     */
    inline void SetScanResultDetails(const ScanResultDetails& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails = value; }

    /**
     * <p>Represents the result of the scan.</p>
     */
    inline void SetScanResultDetails(ScanResultDetails&& value) { m_scanResultDetailsHasBeenSet = true; m_scanResultDetails = std::move(value); }

    /**
     * <p>Represents the result of the scan.</p>
     */
    inline Scan& WithScanResultDetails(const ScanResultDetails& value) { SetScanResultDetails(value); return *this;}

    /**
     * <p>Represents the result of the scan.</p>
     */
    inline Scan& WithScanResultDetails(ScanResultDetails&& value) { SetScanResultDetails(std::move(value)); return *this;}


    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline Scan& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline Scan& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the account that belongs to the scan.</p>
     */
    inline Scan& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Represents total bytes that were scanned.</p>
     */
    inline long long GetTotalBytes() const{ return m_totalBytes; }

    /**
     * <p>Represents total bytes that were scanned.</p>
     */
    inline bool TotalBytesHasBeenSet() const { return m_totalBytesHasBeenSet; }

    /**
     * <p>Represents total bytes that were scanned.</p>
     */
    inline void SetTotalBytes(long long value) { m_totalBytesHasBeenSet = true; m_totalBytes = value; }

    /**
     * <p>Represents total bytes that were scanned.</p>
     */
    inline Scan& WithTotalBytes(long long value) { SetTotalBytes(value); return *this;}


    /**
     * <p>Represents the number of files that were scanned.</p>
     */
    inline long long GetFileCount() const{ return m_fileCount; }

    /**
     * <p>Represents the number of files that were scanned.</p>
     */
    inline bool FileCountHasBeenSet() const { return m_fileCountHasBeenSet; }

    /**
     * <p>Represents the number of files that were scanned.</p>
     */
    inline void SetFileCount(long long value) { m_fileCountHasBeenSet = true; m_fileCount = value; }

    /**
     * <p>Represents the number of files that were scanned.</p>
     */
    inline Scan& WithFileCount(long long value) { SetFileCount(value); return *this;}


    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline const Aws::Vector<VolumeDetail>& GetAttachedVolumes() const{ return m_attachedVolumes; }

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline bool AttachedVolumesHasBeenSet() const { return m_attachedVolumesHasBeenSet; }

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline void SetAttachedVolumes(const Aws::Vector<VolumeDetail>& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes = value; }

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline void SetAttachedVolumes(Aws::Vector<VolumeDetail>&& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes = std::move(value); }

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline Scan& WithAttachedVolumes(const Aws::Vector<VolumeDetail>& value) { SetAttachedVolumes(value); return *this;}

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline Scan& WithAttachedVolumes(Aws::Vector<VolumeDetail>&& value) { SetAttachedVolumes(std::move(value)); return *this;}

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline Scan& AddAttachedVolumes(const VolumeDetail& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes.push_back(value); return *this; }

    /**
     * <p>List of volumes that were attached to the original instance to be
     * scanned.</p>
     */
    inline Scan& AddAttachedVolumes(VolumeDetail&& value) { m_attachedVolumesHasBeenSet = true; m_attachedVolumes.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
