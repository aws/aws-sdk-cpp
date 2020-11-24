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
#include <utility>
#include <memory>

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

  /**
   * <p>Describes a specific Amazon FSx administrative action for the current Windows
   * or Lustre file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AdministrativeAction">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API AdministrativeAction
  {
  public:
    AdministrativeAction();
    AdministrativeAction(Aws::Utils::Json::JsonView jsonValue);
    AdministrativeAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AdministrativeActionType& GetAdministrativeActionType() const{ return m_administrativeActionType; }

    
    inline bool AdministrativeActionTypeHasBeenSet() const { return m_administrativeActionTypeHasBeenSet; }

    
    inline void SetAdministrativeActionType(const AdministrativeActionType& value) { m_administrativeActionTypeHasBeenSet = true; m_administrativeActionType = value; }

    
    inline void SetAdministrativeActionType(AdministrativeActionType&& value) { m_administrativeActionTypeHasBeenSet = true; m_administrativeActionType = std::move(value); }

    
    inline AdministrativeAction& WithAdministrativeActionType(const AdministrativeActionType& value) { SetAdministrativeActionType(value); return *this;}

    
    inline AdministrativeAction& WithAdministrativeActionType(AdministrativeActionType&& value) { SetAdministrativeActionType(std::move(value)); return *this;}


    /**
     * <p>Provides the percent complete of a <code>STORAGE_OPTIMIZATION</code>
     * administrative action. Does not apply to any other administrative action
     * type.</p>
     */
    inline int GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>Provides the percent complete of a <code>STORAGE_OPTIMIZATION</code>
     * administrative action. Does not apply to any other administrative action
     * type.</p>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p>Provides the percent complete of a <code>STORAGE_OPTIMIZATION</code>
     * administrative action. Does not apply to any other administrative action
     * type.</p>
     */
    inline void SetProgressPercent(int value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p>Provides the percent complete of a <code>STORAGE_OPTIMIZATION</code>
     * administrative action. Does not apply to any other administrative action
     * type.</p>
     */
    inline AdministrativeAction& WithProgressPercent(int value) { SetProgressPercent(value); return *this;}


    /**
     * <p>Time that the administrative action request was received.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }

    /**
     * <p>Time that the administrative action request was received.</p>
     */
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }

    /**
     * <p>Time that the administrative action request was received.</p>
     */
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }

    /**
     * <p>Time that the administrative action request was received.</p>
     */
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }

    /**
     * <p>Time that the administrative action request was received.</p>
     */
    inline AdministrativeAction& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}

    /**
     * <p>Time that the administrative action request was received.</p>
     */
    inline AdministrativeAction& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}


    /**
     * <p>Describes the status of the administrative action, as follows:</p> <ul> <li>
     * <p> <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> </li> <li> <p> <code>UPDATED_OPTIMIZING</code> - For a storage
     * capacity increase update, Amazon FSx has updated the file system with the new
     * storage capacity, and is now performing the storage optimization process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSx for Windows File Server User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p> </li> </ul>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the status of the administrative action, as follows:</p> <ul> <li>
     * <p> <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> </li> <li> <p> <code>UPDATED_OPTIMIZING</code> - For a storage
     * capacity increase update, Amazon FSx has updated the file system with the new
     * storage capacity, and is now performing the storage optimization process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSx for Windows File Server User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the status of the administrative action, as follows:</p> <ul> <li>
     * <p> <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> </li> <li> <p> <code>UPDATED_OPTIMIZING</code> - For a storage
     * capacity increase update, Amazon FSx has updated the file system with the new
     * storage capacity, and is now performing the storage optimization process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSx for Windows File Server User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p> </li> </ul>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the status of the administrative action, as follows:</p> <ul> <li>
     * <p> <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> </li> <li> <p> <code>UPDATED_OPTIMIZING</code> - For a storage
     * capacity increase update, Amazon FSx has updated the file system with the new
     * storage capacity, and is now performing the storage optimization process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSx for Windows File Server User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p> </li> </ul>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the status of the administrative action, as follows:</p> <ul> <li>
     * <p> <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> </li> <li> <p> <code>UPDATED_OPTIMIZING</code> - For a storage
     * capacity increase update, Amazon FSx has updated the file system with the new
     * storage capacity, and is now performing the storage optimization process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSx for Windows File Server User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p> </li> </ul>
     */
    inline AdministrativeAction& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the status of the administrative action, as follows:</p> <ul> <li>
     * <p> <code>FAILED</code> - Amazon FSx failed to process the administrative action
     * successfully.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon FSx is
     * processing the administrative action.</p> </li> <li> <p> <code>PENDING</code> -
     * Amazon FSx is waiting to process the administrative action.</p> </li> <li> <p>
     * <code>COMPLETED</code> - Amazon FSx has finished processing the administrative
     * task.</p> </li> <li> <p> <code>UPDATED_OPTIMIZING</code> - For a storage
     * capacity increase update, Amazon FSx has updated the file system with the new
     * storage capacity, and is now performing the storage optimization process. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-storage-capacity.html">Managing
     * storage capacity</a> in the <i>Amazon FSx for Windows File Server User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/managing-storage-capacity.html">Managing
     * storage and throughput capacity</a> in the <i>Amazon FSx for Lustre User
     * Guide</i>.</p> </li> </ul>
     */
    inline AdministrativeAction& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Describes the target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    const FileSystem& GetTargetFileSystemValues() const;

    /**
     * <p>Describes the target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    bool TargetFileSystemValuesHasBeenSet() const;

    /**
     * <p>Describes the target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    void SetTargetFileSystemValues(const FileSystem& value);

    /**
     * <p>Describes the target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    void SetTargetFileSystemValues(FileSystem&& value);

    /**
     * <p>Describes the target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    AdministrativeAction& WithTargetFileSystemValues(const FileSystem& value);

    /**
     * <p>Describes the target value for the administration action, provided in the
     * <code>UpdateFileSystem</code> operation. Returned for
     * <code>FILE_SYSTEM_UPDATE</code> administrative actions. </p>
     */
    AdministrativeAction& WithTargetFileSystemValues(FileSystem&& value);


    
    inline const AdministrativeActionFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    
    inline void SetFailureDetails(const AdministrativeActionFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    
    inline void SetFailureDetails(AdministrativeActionFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    
    inline AdministrativeAction& WithFailureDetails(const AdministrativeActionFailureDetails& value) { SetFailureDetails(value); return *this;}

    
    inline AdministrativeAction& WithFailureDetails(AdministrativeActionFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}

  private:

    AdministrativeActionType m_administrativeActionType;
    bool m_administrativeActionTypeHasBeenSet;

    int m_progressPercent;
    bool m_progressPercentHasBeenSet;

    Aws::Utils::DateTime m_requestTime;
    bool m_requestTimeHasBeenSet;

    Status m_status;
    bool m_statusHasBeenSet;

    std::shared_ptr<FileSystem> m_targetFileSystemValues;
    bool m_targetFileSystemValuesHasBeenSet;

    AdministrativeActionFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
