/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxVolumeType.h>
#include <aws/finspace/model/KxVolumeStatus.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> The structure that contains the metadata of the volume. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxVolume">AWS
   * API Reference</a></p>
   */
  class KxVolume
  {
  public:
    AWS_FINSPACE_API KxVolume();
    AWS_FINSPACE_API KxVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }
    inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
    inline void SetVolumeName(const Aws::String& value) { m_volumeNameHasBeenSet = true; m_volumeName = value; }
    inline void SetVolumeName(Aws::String&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::move(value); }
    inline void SetVolumeName(const char* value) { m_volumeNameHasBeenSet = true; m_volumeName.assign(value); }
    inline KxVolume& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}
    inline KxVolume& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}
    inline KxVolume& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline const KxVolumeType& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const KxVolumeType& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(KxVolumeType&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline KxVolume& WithVolumeType(const KxVolumeType& value) { SetVolumeType(value); return *this;}
    inline KxVolume& WithVolumeType(KxVolumeType&& value) { SetVolumeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of volume.</p> <ul> <li> <p>CREATING – The volume creation is in
     * progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation has failed.</p>
     * </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li> <p>UPDATING – The
     * volume is in the process of being updated.</p> </li> <li> <p>UPDATE_FAILED – The
     * update action failed.</p> </li> <li> <p>UPDATED – The volume is successfully
     * updated.</p> </li> <li> <p>DELETING – The volume is in the process of being
     * deleted.</p> </li> <li> <p>DELETE_FAILED – The system failed to delete the
     * volume.</p> </li> <li> <p>DELETED – The volume is successfully deleted.</p>
     * </li> </ul>
     */
    inline const KxVolumeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const KxVolumeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(KxVolumeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline KxVolume& WithStatus(const KxVolumeStatus& value) { SetStatus(value); return *this;}
    inline KxVolume& WithStatus(KxVolumeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the volume. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline KxVolume& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline KxVolume& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline KxVolume& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline KxVolume& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline KxVolume& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline KxVolume& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }
    inline KxVolume& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}
    inline KxVolume& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const{ return m_availabilityZoneIds; }
    inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
    inline void SetAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = value; }
    inline void SetAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::move(value); }
    inline KxVolume& WithAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIds(value); return *this;}
    inline KxVolume& WithAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIds(std::move(value)); return *this;}
    inline KxVolume& AddAvailabilityZoneIds(const Aws::String& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(value); return *this; }
    inline KxVolume& AddAvailabilityZoneIds(Aws::String&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(std::move(value)); return *this; }
    inline KxVolume& AddAvailabilityZoneIds(const char* value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline KxVolume& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline KxVolume& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }
    inline KxVolume& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline KxVolume& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    KxVolumeType m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    KxVolumeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    KxAzMode m_azMode;
    bool m_azModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
