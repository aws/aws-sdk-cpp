/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>UpdateSnapshotScheduleInput$Description</a> </p> </li> <li> <p>
   * <a>UpdateSnapshotScheduleInput$RecurrenceInHours</a> </p> </li> <li> <p>
   * <a>UpdateSnapshotScheduleInput$StartAt</a> </p> </li> <li> <p>
   * <a>UpdateSnapshotScheduleInput$VolumeARN</a> </p> </li> </ul>
   */
  class AWS_STORAGEGATEWAY_API UpdateSnapshotScheduleRequest : public StorageGatewayRequest
  {
  public:
    UpdateSnapshotScheduleRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume. Use the <a>ListVolumes</a>
     * operation to return a list of gateway volumes.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline int GetStartAt() const{ return m_startAt; }

    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline void SetStartAt(int value) { m_startAtHasBeenSet = true; m_startAt = value; }

    /**
     * <p>The hour of the day at which the snapshot schedule begins represented as
     * <i>hh</i>, where <i>hh</i> is the hour (0 to 23). The hour of the day is in the
     * time zone of the gateway.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithStartAt(int value) { SetStartAt(value); return *this;}

    /**
     * <p>Frequency of snapshots. Specify the number of hours between snapshots.</p>
     */
    inline int GetRecurrenceInHours() const{ return m_recurrenceInHours; }

    /**
     * <p>Frequency of snapshots. Specify the number of hours between snapshots.</p>
     */
    inline void SetRecurrenceInHours(int value) { m_recurrenceInHoursHasBeenSet = true; m_recurrenceInHours = value; }

    /**
     * <p>Frequency of snapshots. Specify the number of hours between snapshots.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithRecurrenceInHours(int value) { SetRecurrenceInHours(value); return *this;}

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional description of the snapshot that overwrites the existing
     * description.</p>
     */
    inline UpdateSnapshotScheduleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;
    int m_startAt;
    bool m_startAtHasBeenSet;
    int m_recurrenceInHours;
    bool m_recurrenceInHoursHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
