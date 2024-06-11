/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxVolumeType.h>
#include <aws/finspace/model/KxNAS1Configuration.h>
#include <aws/finspace/model/KxVolumeStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxAttachedCluster.h>
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
namespace finspace
{
namespace Model
{
  class UpdateKxVolumeResult
  {
  public:
    AWS_FINSPACE_API UpdateKxVolumeResult();
    AWS_FINSPACE_API UpdateKxVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API UpdateKxVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the kdb environment where you want to update the
     * volume. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline UpdateKxVolumeResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateKxVolumeResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the volume that you want to update.</p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }
    inline void SetVolumeName(const Aws::String& value) { m_volumeName = value; }
    inline void SetVolumeName(Aws::String&& value) { m_volumeName = std::move(value); }
    inline void SetVolumeName(const char* value) { m_volumeName.assign(value); }
    inline UpdateKxVolumeResult& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}
    inline UpdateKxVolumeResult& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline const KxVolumeType& GetVolumeType() const{ return m_volumeType; }
    inline void SetVolumeType(const KxVolumeType& value) { m_volumeType = value; }
    inline void SetVolumeType(KxVolumeType&& value) { m_volumeType = std::move(value); }
    inline UpdateKxVolumeResult& WithVolumeType(const KxVolumeType& value) { SetVolumeType(value); return *this;}
    inline UpdateKxVolumeResult& WithVolumeType(KxVolumeType&& value) { SetVolumeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline const Aws::String& GetVolumeArn() const{ return m_volumeArn; }
    inline void SetVolumeArn(const Aws::String& value) { m_volumeArn = value; }
    inline void SetVolumeArn(Aws::String&& value) { m_volumeArn = std::move(value); }
    inline void SetVolumeArn(const char* value) { m_volumeArn.assign(value); }
    inline UpdateKxVolumeResult& WithVolumeArn(const Aws::String& value) { SetVolumeArn(value); return *this;}
    inline UpdateKxVolumeResult& WithVolumeArn(Aws::String&& value) { SetVolumeArn(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& WithVolumeArn(const char* value) { SetVolumeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline const KxNAS1Configuration& GetNas1Configuration() const{ return m_nas1Configuration; }
    inline void SetNas1Configuration(const KxNAS1Configuration& value) { m_nas1Configuration = value; }
    inline void SetNas1Configuration(KxNAS1Configuration&& value) { m_nas1Configuration = std::move(value); }
    inline UpdateKxVolumeResult& WithNas1Configuration(const KxNAS1Configuration& value) { SetNas1Configuration(value); return *this;}
    inline UpdateKxVolumeResult& WithNas1Configuration(KxNAS1Configuration&& value) { SetNas1Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the volume.</p> <ul> <li> <p>CREATING – The volume creation is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation has
     * failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED – The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline const KxVolumeStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const KxVolumeStatus& value) { m_status = value; }
    inline void SetStatus(KxVolumeStatus&& value) { m_status = std::move(value); }
    inline UpdateKxVolumeResult& WithStatus(const KxVolumeStatus& value) { SetStatus(value); return *this;}
    inline UpdateKxVolumeResult& WithStatus(KxVolumeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for the volume. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateKxVolumeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateKxVolumeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline UpdateKxVolumeResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline UpdateKxVolumeResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline UpdateKxVolumeResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline UpdateKxVolumeResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }
    inline void SetAzMode(const KxAzMode& value) { m_azMode = value; }
    inline void SetAzMode(KxAzMode&& value) { m_azMode = std::move(value); }
    inline UpdateKxVolumeResult& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}
    inline UpdateKxVolumeResult& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const{ return m_availabilityZoneIds; }
    inline void SetAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIds = value; }
    inline void SetAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIds = std::move(value); }
    inline UpdateKxVolumeResult& WithAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIds(value); return *this;}
    inline UpdateKxVolumeResult& WithAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIds(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& AddAvailabilityZoneIds(const Aws::String& value) { m_availabilityZoneIds.push_back(value); return *this; }
    inline UpdateKxVolumeResult& AddAvailabilityZoneIds(Aws::String&& value) { m_availabilityZoneIds.push_back(std::move(value)); return *this; }
    inline UpdateKxVolumeResult& AddAvailabilityZoneIds(const char* value) { m_availabilityZoneIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline UpdateKxVolumeResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline UpdateKxVolumeResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the clusters that a volume is attached to. </p>
     */
    inline const Aws::Vector<KxAttachedCluster>& GetAttachedClusters() const{ return m_attachedClusters; }
    inline void SetAttachedClusters(const Aws::Vector<KxAttachedCluster>& value) { m_attachedClusters = value; }
    inline void SetAttachedClusters(Aws::Vector<KxAttachedCluster>&& value) { m_attachedClusters = std::move(value); }
    inline UpdateKxVolumeResult& WithAttachedClusters(const Aws::Vector<KxAttachedCluster>& value) { SetAttachedClusters(value); return *this;}
    inline UpdateKxVolumeResult& WithAttachedClusters(Aws::Vector<KxAttachedCluster>&& value) { SetAttachedClusters(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& AddAttachedClusters(const KxAttachedCluster& value) { m_attachedClusters.push_back(value); return *this; }
    inline UpdateKxVolumeResult& AddAttachedClusters(KxAttachedCluster&& value) { m_attachedClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateKxVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateKxVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateKxVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;

    Aws::String m_volumeName;

    KxVolumeType m_volumeType;

    Aws::String m_volumeArn;

    KxNAS1Configuration m_nas1Configuration;

    KxVolumeStatus m_status;

    Aws::String m_description;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_createdTimestamp;

    KxAzMode m_azMode;

    Aws::Vector<Aws::String> m_availabilityZoneIds;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::Vector<KxAttachedCluster> m_attachedClusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
