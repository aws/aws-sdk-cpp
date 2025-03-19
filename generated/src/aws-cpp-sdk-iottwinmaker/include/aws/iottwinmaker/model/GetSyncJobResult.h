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
    AWS_IOTTWINMAKER_API GetSyncJobResult() = default;
    AWS_IOTTWINMAKER_API GetSyncJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetSyncJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sync job ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSyncJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    GetSyncJobResult& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSource is
     * <code>SITEWISE </code>.</p> 
     */
    inline const Aws::String& GetSyncSource() const { return m_syncSource; }
    template<typename SyncSourceT = Aws::String>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = Aws::String>
    GetSyncJobResult& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync IAM role.</p>
     */
    inline const Aws::String& GetSyncRole() const { return m_syncRole; }
    template<typename SyncRoleT = Aws::String>
    void SetSyncRole(SyncRoleT&& value) { m_syncRoleHasBeenSet = true; m_syncRole = std::forward<SyncRoleT>(value); }
    template<typename SyncRoleT = Aws::String>
    GetSyncJobResult& WithSyncRole(SyncRoleT&& value) { SetSyncRole(std::forward<SyncRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SyncJob response status.</p>
     */
    inline const SyncJobStatus& GetStatus() const { return m_status; }
    template<typename StatusT = SyncJobStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SyncJobStatus>
    GetSyncJobResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    GetSyncJobResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    GetSyncJobResult& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSyncJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    Aws::String m_syncRole;
    bool m_syncRoleHasBeenSet = false;

    SyncJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
