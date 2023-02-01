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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The SyncJob summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SyncJobSummary">AWS
   * API Reference</a></p>
   */
  class SyncJobSummary
  {
  public:
    AWS_IOTTWINMAKER_API SyncJobSummary();
    AWS_IOTTWINMAKER_API SyncJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SyncJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline SyncJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline SyncJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The SyncJob summary ARN.</p>
     */
    inline SyncJobSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline SyncJobSummary& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline SyncJobSummary& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline SyncJobSummary& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The sync source.</p>
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>The sync source.</p>
     */
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }

    /**
     * <p>The sync source.</p>
     */
    inline void SetSyncSource(const Aws::String& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }

    /**
     * <p>The sync source.</p>
     */
    inline void SetSyncSource(Aws::String&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }

    /**
     * <p>The sync source.</p>
     */
    inline void SetSyncSource(const char* value) { m_syncSourceHasBeenSet = true; m_syncSource.assign(value); }

    /**
     * <p>The sync source.</p>
     */
    inline SyncJobSummary& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}

    /**
     * <p>The sync source.</p>
     */
    inline SyncJobSummary& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}

    /**
     * <p>The sync source.</p>
     */
    inline SyncJobSummary& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}


    /**
     * <p>The SyncJob summaries status.</p>
     */
    inline const SyncJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The SyncJob summaries status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The SyncJob summaries status.</p>
     */
    inline void SetStatus(const SyncJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The SyncJob summaries status.</p>
     */
    inline void SetStatus(SyncJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The SyncJob summaries status.</p>
     */
    inline SyncJobSummary& WithStatus(const SyncJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The SyncJob summaries status.</p>
     */
    inline SyncJobSummary& WithStatus(SyncJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time.</p>
     */
    inline SyncJobSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time.</p>
     */
    inline SyncJobSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The update date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The update date and time.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The update date and time.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The update date and time.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The update date and time.</p>
     */
    inline SyncJobSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The update date and time.</p>
     */
    inline SyncJobSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    SyncJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
