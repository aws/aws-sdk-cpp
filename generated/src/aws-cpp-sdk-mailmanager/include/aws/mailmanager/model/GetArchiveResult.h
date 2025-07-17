/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveState.h>
#include <aws/mailmanager/model/ArchiveRetention.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing details of the requested archive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveResult
  {
  public:
    AWS_MAILMANAGER_API GetArchiveResult() = default;
    AWS_MAILMANAGER_API GetArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the archive.</p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    GetArchiveResult& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name assigned to the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const { return m_archiveName; }
    template<typename ArchiveNameT = Aws::String>
    void SetArchiveName(ArchiveNameT&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::forward<ArchiveNameT>(value); }
    template<typename ArchiveNameT = Aws::String>
    GetArchiveResult& WithArchiveName(ArchiveNameT&& value) { SetArchiveName(std::forward<ArchiveNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const { return m_archiveArn; }
    template<typename ArchiveArnT = Aws::String>
    void SetArchiveArn(ArchiveArnT&& value) { m_archiveArnHasBeenSet = true; m_archiveArn = std::forward<ArchiveArnT>(value); }
    template<typename ArchiveArnT = Aws::String>
    GetArchiveResult& WithArchiveArn(ArchiveArnT&& value) { SetArchiveArn(std::forward<ArchiveArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the archive:</p> <ul> <li> <p> <code>ACTIVE</code> – The
     * archive is ready and available for use. </p> </li> <li> <p>
     * <code>PENDING_DELETION</code> – The archive has been marked for deletion and
     * will be permanently deleted in 30 days. No further modifications can be made in
     * this state. </p> </li> </ul>
     */
    inline ArchiveState GetArchiveState() const { return m_archiveState; }
    inline void SetArchiveState(ArchiveState value) { m_archiveStateHasBeenSet = true; m_archiveState = value; }
    inline GetArchiveResult& WithArchiveState(ArchiveState value) { SetArchiveState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period for emails in this archive.</p>
     */
    inline const ArchiveRetention& GetRetention() const { return m_retention; }
    template<typename RetentionT = ArchiveRetention>
    void SetRetention(RetentionT&& value) { m_retentionHasBeenSet = true; m_retention = std::forward<RetentionT>(value); }
    template<typename RetentionT = ArchiveRetention>
    GetArchiveResult& WithRetention(RetentionT&& value) { SetRetention(std::forward<RetentionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the archive was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetArchiveResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the archive was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    GetArchiveResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the
     * archive.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    GetArchiveResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArchiveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_archiveArn;
    bool m_archiveArnHasBeenSet = false;

    ArchiveState m_archiveState{ArchiveState::NOT_SET};
    bool m_archiveStateHasBeenSet = false;

    ArchiveRetention m_retention;
    bool m_retentionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
