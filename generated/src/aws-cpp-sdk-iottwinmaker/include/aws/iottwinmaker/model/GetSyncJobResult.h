/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SyncJobStatus.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class GetSyncJobResult
  {
  public:
    AWS_IOTTWINMAKER_API GetSyncJobResult();
    AWS_IOTTWINMAKER_API GetSyncJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetSyncJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The sync job ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The sync job ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The sync job ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The sync job ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The sync job ARN.</p>
     */
    inline GetSyncJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The sync job ARN.</p>
     */
    inline GetSyncJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The sync job ARN.</p>
     */
    inline GetSyncJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline GetSyncJobResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline GetSyncJobResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline GetSyncJobResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(const Aws::String& value) { m_syncSource = value; }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(Aws::String&& value) { m_syncSource = std::move(value); }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(const char* value) { m_syncSource.assign(value); }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline GetSyncJobResult& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline GetSyncJobResult& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline GetSyncJobResult& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}


    /**
     * <p>The sync IAM role.</p>
     */
    inline const Aws::String& GetSyncRole() const{ return m_syncRole; }

    /**
     * <p>The sync IAM role.</p>
     */
    inline void SetSyncRole(const Aws::String& value) { m_syncRole = value; }

    /**
     * <p>The sync IAM role.</p>
     */
    inline void SetSyncRole(Aws::String&& value) { m_syncRole = std::move(value); }

    /**
     * <p>The sync IAM role.</p>
     */
    inline void SetSyncRole(const char* value) { m_syncRole.assign(value); }

    /**
     * <p>The sync IAM role.</p>
     */
    inline GetSyncJobResult& WithSyncRole(const Aws::String& value) { SetSyncRole(value); return *this;}

    /**
     * <p>The sync IAM role.</p>
     */
    inline GetSyncJobResult& WithSyncRole(Aws::String&& value) { SetSyncRole(std::move(value)); return *this;}

    /**
     * <p>The sync IAM role.</p>
     */
    inline GetSyncJobResult& WithSyncRole(const char* value) { SetSyncRole(value); return *this;}


    /**
     * <p>The SyncJob response status.</p>
     */
    inline const SyncJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The SyncJob response status.</p>
     */
    inline void SetStatus(const SyncJobStatus& value) { m_status = value; }

    /**
     * <p>The SyncJob response status.</p>
     */
    inline void SetStatus(SyncJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The SyncJob response status.</p>
     */
    inline GetSyncJobResult& WithStatus(const SyncJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The SyncJob response status.</p>
     */
    inline GetSyncJobResult& WithStatus(SyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The creation date and time.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time.</p>
     */
    inline GetSyncJobResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time.</p>
     */
    inline GetSyncJobResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The update date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The update date and time.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTime = value; }

    /**
     * <p>The update date and time.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTime = std::move(value); }

    /**
     * <p>The update date and time.</p>
     */
    inline GetSyncJobResult& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The update date and time.</p>
     */
    inline GetSyncJobResult& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_workspaceId;

    Aws::String m_syncSource;

    Aws::String m_syncRole;

    SyncJobStatus m_status;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_updateDateTime;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
