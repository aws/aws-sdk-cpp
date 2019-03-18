/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncS3Destination.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/LastResourceDataSyncStatus.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about a Resource Data Sync configuration, including its current
   * status and last successful sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncItem">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResourceDataSyncItem
  {
  public:
    ResourceDataSyncItem();
    ResourceDataSyncItem(Aws::Utils::Json::JsonView jsonValue);
    ResourceDataSyncItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline ResourceDataSyncItem& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline ResourceDataSyncItem& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    /**
     * <p>The name of the Resource Data Sync.</p>
     */
    inline ResourceDataSyncItem& WithSyncName(const char* value) { SetSyncName(value); return *this;}


    /**
     * <p>Configuration information for the target Amazon S3 bucket.</p>
     */
    inline const ResourceDataSyncS3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>Configuration information for the target Amazon S3 bucket.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>Configuration information for the target Amazon S3 bucket.</p>
     */
    inline void SetS3Destination(const ResourceDataSyncS3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>Configuration information for the target Amazon S3 bucket.</p>
     */
    inline void SetS3Destination(ResourceDataSyncS3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>Configuration information for the target Amazon S3 bucket.</p>
     */
    inline ResourceDataSyncItem& WithS3Destination(const ResourceDataSyncS3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>Configuration information for the target Amazon S3 bucket.</p>
     */
    inline ResourceDataSyncItem& WithS3Destination(ResourceDataSyncS3Destination&& value) { SetS3Destination(std::move(value)); return *this;}


    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncTime() const{ return m_lastSyncTime; }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline bool LastSyncTimeHasBeenSet() const { return m_lastSyncTimeHasBeenSet; }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline void SetLastSyncTime(const Aws::Utils::DateTime& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = value; }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline void SetLastSyncTime(Aws::Utils::DateTime&& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = std::move(value); }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSyncTime(const Aws::Utils::DateTime& value) { SetLastSyncTime(value); return *this;}

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSyncTime(Aws::Utils::DateTime&& value) { SetLastSyncTime(std::move(value)); return *this;}


    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulSyncTime() const{ return m_lastSuccessfulSyncTime; }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline bool LastSuccessfulSyncTimeHasBeenSet() const { return m_lastSuccessfulSyncTimeHasBeenSet; }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline void SetLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = value; }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline void SetLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = std::move(value); }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulSyncTime(value); return *this;}

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulSyncTime(std::move(value)); return *this;}


    /**
     * <p>The status reported by the last sync.</p>
     */
    inline const LastResourceDataSyncStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline void SetLastStatus(const LastResourceDataSyncStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline void SetLastStatus(LastResourceDataSyncStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastStatus(const LastResourceDataSyncStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastStatus(LastResourceDataSyncStatus&& value) { SetLastStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSyncCreatedTime() const{ return m_syncCreatedTime; }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline bool SyncCreatedTimeHasBeenSet() const { return m_syncCreatedTimeHasBeenSet; }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline void SetSyncCreatedTime(const Aws::Utils::DateTime& value) { m_syncCreatedTimeHasBeenSet = true; m_syncCreatedTime = value; }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline void SetSyncCreatedTime(Aws::Utils::DateTime&& value) { m_syncCreatedTimeHasBeenSet = true; m_syncCreatedTime = std::move(value); }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline ResourceDataSyncItem& WithSyncCreatedTime(const Aws::Utils::DateTime& value) { SetSyncCreatedTime(value); return *this;}

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline ResourceDataSyncItem& WithSyncCreatedTime(Aws::Utils::DateTime&& value) { SetSyncCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline const Aws::String& GetLastSyncStatusMessage() const{ return m_lastSyncStatusMessage; }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline bool LastSyncStatusMessageHasBeenSet() const { return m_lastSyncStatusMessageHasBeenSet; }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline void SetLastSyncStatusMessage(const Aws::String& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = value; }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline void SetLastSyncStatusMessage(Aws::String&& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = std::move(value); }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline void SetLastSyncStatusMessage(const char* value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage.assign(value); }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastSyncStatusMessage(const Aws::String& value) { SetLastSyncStatusMessage(value); return *this;}

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastSyncStatusMessage(Aws::String&& value) { SetLastSyncStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastSyncStatusMessage(const char* value) { SetLastSyncStatusMessage(value); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet;

    ResourceDataSyncS3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet;

    Aws::Utils::DateTime m_lastSyncTime;
    bool m_lastSyncTimeHasBeenSet;

    Aws::Utils::DateTime m_lastSuccessfulSyncTime;
    bool m_lastSuccessfulSyncTimeHasBeenSet;

    LastResourceDataSyncStatus m_lastStatus;
    bool m_lastStatusHasBeenSet;

    Aws::Utils::DateTime m_syncCreatedTime;
    bool m_syncCreatedTimeHasBeenSet;

    Aws::String m_lastSyncStatusMessage;
    bool m_lastSyncStatusMessageHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
