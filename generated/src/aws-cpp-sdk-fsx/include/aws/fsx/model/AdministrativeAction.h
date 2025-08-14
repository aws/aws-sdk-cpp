/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/AdministrativeActionType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/Status.h>
#include <aws/fsx/model/AdministrativeActionFailureDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace FSx
{
namespace Model
{
  class FileSystem;
  class Volume;
  class Snapshot;

  /**
   * <p>Describes a specific Amazon FSx administrative action for the current
   * Windows, Lustre, OpenZFS, or ONTAP file system or volume.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AdministrativeAction">AWS
   * API Reference</a></p>
   */
  class AdministrativeAction
  {
  public:
    AWS_FSX_API AdministrativeAction() = default;
    AWS_FSX_API AdministrativeAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API AdministrativeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline AdministrativeActionType GetAdministrativeActionType() const { return m_administrativeActionType; }
    inline bool AdministrativeActionTypeHasBeenSet() const { return m_administrativeActionTypeHasBeenSet; }
    inline void SetAdministrativeActionType(AdministrativeActionType value) { m_administrativeActionTypeHasBeenSet = true; m_administrativeActionType = value; }
    inline AdministrativeAction& WithAdministrativeActionType(AdministrativeActionType value) { SetAdministrativeActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage-complete status of a <code>STORAGE_OPTIMIZATION</code> or
     * <code>DOWNLOAD_DATA_FROM_BACKUP</code> administrative action. Does not apply to
     * any other administrative action type.</p>
     */
    inline int GetProgressPercent() const { return m_progressPercent; }
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline AdministrativeAction& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the administrative action request was received.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const { return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    void SetRequestTime(RequestTimeT&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::forward<RequestTimeT>(value); }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    AdministrativeAction& WithRequestTime(RequestTimeT&& value) { SetRequestTime(std::forward<RequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the administrative action, as follows:</p> <ul> <li> <p>
     * <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> <p>For a backup restore to a second-generation FSx for ONTAP file
     * system, indicates that all data has been downloaded to the volume, and clients
     * now have read-write access to volume.</p> </li> <li> <p>
     * <code>UPDATED_OPTIMIZING</code> - For a storage-capacity increase update, Amazon
     * FSx has updated the file system with the new storage capacity, and is now
     * performing the storage-optimization process.</p> </li> <li> <p>
     * <code>PENDING</code> - For a backup restore to a second-generation FSx for ONTAP
     * file system, indicates that the file metadata is being downloaded onto the
     * volume. The volume's Lifecycle state is CREATING.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - For a backup restore to a second-generation FSx for
     * ONTAP file system, indicates that all metadata has been downloaded to the new
     * volume and client can access data with read-only access while Amazon FSx
     * downloads the file data to the volume. Track the progress of this process with
     * the <code>ProgressPercent</code> element.</p> </li> </ul>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline AdministrativeAction& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    inline const FileSystem& GetTargetFileSystemValues() const{
      return *m_targetFileSystemValues;
    }
    inline bool TargetFileSystemValuesHasBeenSet() const { return m_targetFileSystemValuesHasBeenSet; }
    template<typename TargetFileSystemValuesT = FileSystem>
    void SetTargetFileSystemValues(TargetFileSystemValuesT&& value) {
      m_targetFileSystemValuesHasBeenSet = true; 
      m_targetFileSystemValues = Aws::MakeShared<FileSystem>("AdministrativeAction", std::forward<TargetFileSystemValuesT>(value));
    }
    template<typename TargetFileSystemValuesT = FileSystem>
    AdministrativeAction& WithTargetFileSystemValues(TargetFileSystemValuesT&& value) { SetTargetFileSystemValues(std::forward<TargetFileSystemValuesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AdministrativeActionFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = AdministrativeActionFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = AdministrativeActionFailureDetails>
    AdministrativeAction& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Volume& GetTargetVolumeValues() const{
      return *m_targetVolumeValues;
    }
    inline bool TargetVolumeValuesHasBeenSet() const { return m_targetVolumeValuesHasBeenSet; }
    template<typename TargetVolumeValuesT = Volume>
    void SetTargetVolumeValues(TargetVolumeValuesT&& value) {
      m_targetVolumeValuesHasBeenSet = true; 
      m_targetVolumeValues = Aws::MakeShared<Volume>("AdministrativeAction", std::forward<TargetVolumeValuesT>(value));
    }
    template<typename TargetVolumeValuesT = Volume>
    AdministrativeAction& WithTargetVolumeValues(TargetVolumeValuesT&& value) { SetTargetVolumeValues(std::forward<TargetVolumeValuesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Snapshot& GetTargetSnapshotValues() const{
      return *m_targetSnapshotValues;
    }
    inline bool TargetSnapshotValuesHasBeenSet() const { return m_targetSnapshotValuesHasBeenSet; }
    template<typename TargetSnapshotValuesT = Snapshot>
    void SetTargetSnapshotValues(TargetSnapshotValuesT&& value) {
      m_targetSnapshotValuesHasBeenSet = true; 
      m_targetSnapshotValues = Aws::MakeShared<Snapshot>("AdministrativeAction", std::forward<TargetSnapshotValuesT>(value));
    }
    template<typename TargetSnapshotValuesT = Snapshot>
    AdministrativeAction& WithTargetSnapshotValues(TargetSnapshotValuesT&& value) { SetTargetSnapshotValues(std::forward<TargetSnapshotValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes that have transferred for the FSx for OpenZFS snapshot
     * that you're copying.</p>
     */
    inline long long GetTotalTransferBytes() const { return m_totalTransferBytes; }
    inline bool TotalTransferBytesHasBeenSet() const { return m_totalTransferBytesHasBeenSet; }
    inline void SetTotalTransferBytes(long long value) { m_totalTransferBytesHasBeenSet = true; m_totalTransferBytes = value; }
    inline AdministrativeAction& WithTotalTransferBytes(long long value) { SetTotalTransferBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining bytes to transfer for the FSx for OpenZFS snapshot that you're
     * copying.</p>
     */
    inline long long GetRemainingTransferBytes() const { return m_remainingTransferBytes; }
    inline bool RemainingTransferBytesHasBeenSet() const { return m_remainingTransferBytesHasBeenSet; }
    inline void SetRemainingTransferBytes(long long value) { m_remainingTransferBytesHasBeenSet = true; m_remainingTransferBytes = value; }
    inline AdministrativeAction& WithRemainingTransferBytes(long long value) { SetRemainingTransferBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AdministrativeAction& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    AdministrativeActionType m_administrativeActionType{AdministrativeActionType::NOT_SET};
    bool m_administrativeActionTypeHasBeenSet = false;

    int m_progressPercent{0};
    bool m_progressPercentHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    std::shared_ptr<FileSystem> m_targetFileSystemValues;
    bool m_targetFileSystemValuesHasBeenSet = false;

    AdministrativeActionFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    std::shared_ptr<Volume> m_targetVolumeValues;
    bool m_targetVolumeValuesHasBeenSet = false;

    std::shared_ptr<Snapshot> m_targetSnapshotValues;
    bool m_targetSnapshotValuesHasBeenSet = false;

    long long m_totalTransferBytes{0};
    bool m_totalTransferBytesHasBeenSet = false;

    long long m_remainingTransferBytes{0};
    bool m_remainingTransferBytesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
