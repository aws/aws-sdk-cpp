/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/ArchiveRetention.h>
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
    AWS_MAILMANAGER_API GetArchiveResult();
    AWS_MAILMANAGER_API GetArchiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the archive.</p>
     */
    inline const Aws::String& GetArchiveArn() const{ return m_archiveArn; }
    inline void SetArchiveArn(const Aws::String& value) { m_archiveArn = value; }
    inline void SetArchiveArn(Aws::String&& value) { m_archiveArn = std::move(value); }
    inline void SetArchiveArn(const char* value) { m_archiveArn.assign(value); }
    inline GetArchiveResult& WithArchiveArn(const Aws::String& value) { SetArchiveArn(value); return *this;}
    inline GetArchiveResult& WithArchiveArn(Aws::String&& value) { SetArchiveArn(std::move(value)); return *this;}
    inline GetArchiveResult& WithArchiveArn(const char* value) { SetArchiveArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the archive.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveId.assign(value); }
    inline GetArchiveResult& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline GetArchiveResult& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline GetArchiveResult& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name assigned to the archive.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }
    inline void SetArchiveName(const Aws::String& value) { m_archiveName = value; }
    inline void SetArchiveName(Aws::String&& value) { m_archiveName = std::move(value); }
    inline void SetArchiveName(const char* value) { m_archiveName.assign(value); }
    inline GetArchiveResult& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}
    inline GetArchiveResult& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}
    inline GetArchiveResult& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the archive:</p> <ul> <li> <p> <code>ACTIVE</code> – The
     * archive is ready and available for use. </p> </li> <li> <p>
     * <code>PENDING_DELETION</code> – The archive has been marked for deletion and
     * will be permanently deleted in 30 days. No further modifications can be made in
     * this state. </p> </li> </ul>
     */
    inline const ArchiveState& GetArchiveState() const{ return m_archiveState; }
    inline void SetArchiveState(const ArchiveState& value) { m_archiveState = value; }
    inline void SetArchiveState(ArchiveState&& value) { m_archiveState = std::move(value); }
    inline GetArchiveResult& WithArchiveState(const ArchiveState& value) { SetArchiveState(value); return *this;}
    inline GetArchiveResult& WithArchiveState(ArchiveState&& value) { SetArchiveState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the archive was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetArchiveResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetArchiveResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the
     * archive.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }
    inline GetArchiveResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline GetArchiveResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline GetArchiveResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the archive was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetArchiveResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetArchiveResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention period for emails in this archive.</p>
     */
    inline const ArchiveRetention& GetRetention() const{ return m_retention; }
    inline void SetRetention(const ArchiveRetention& value) { m_retention = value; }
    inline void SetRetention(ArchiveRetention&& value) { m_retention = std::move(value); }
    inline GetArchiveResult& WithRetention(const ArchiveRetention& value) { SetRetention(value); return *this;}
    inline GetArchiveResult& WithRetention(ArchiveRetention&& value) { SetRetention(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetArchiveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetArchiveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetArchiveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveArn;

    Aws::String m_archiveId;

    Aws::String m_archiveName;

    ArchiveState m_archiveState;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_kmsKeyArn;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    ArchiveRetention m_retention;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
