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
  class GetKxVolumeResult
  {
  public:
    AWS_FINSPACE_API GetKxVolumeResult();
    AWS_FINSPACE_API GetKxVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline GetKxVolumeResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline GetKxVolumeResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline GetKxVolumeResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const{ return m_volumeName; }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(const Aws::String& value) { m_volumeName = value; }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(Aws::String&& value) { m_volumeName = std::move(value); }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline void SetVolumeName(const char* value) { m_volumeName.assign(value); }

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline GetKxVolumeResult& WithVolumeName(const Aws::String& value) { SetVolumeName(value); return *this;}

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline GetKxVolumeResult& WithVolumeName(Aws::String&& value) { SetVolumeName(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline GetKxVolumeResult& WithVolumeName(const char* value) { SetVolumeName(value); return *this;}


    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline const KxVolumeType& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline void SetVolumeType(const KxVolumeType& value) { m_volumeType = value; }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline void SetVolumeType(KxVolumeType&& value) { m_volumeType = std::move(value); }

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline GetKxVolumeResult& WithVolumeType(const KxVolumeType& value) { SetVolumeType(value); return *this;}

    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline GetKxVolumeResult& WithVolumeType(KxVolumeType&& value) { SetVolumeType(std::move(value)); return *this;}


    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline const Aws::String& GetVolumeArn() const{ return m_volumeArn; }

    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline void SetVolumeArn(const Aws::String& value) { m_volumeArn = value; }

    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline void SetVolumeArn(Aws::String&& value) { m_volumeArn = std::move(value); }

    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline void SetVolumeArn(const char* value) { m_volumeArn.assign(value); }

    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline GetKxVolumeResult& WithVolumeArn(const Aws::String& value) { SetVolumeArn(value); return *this;}

    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline GetKxVolumeResult& WithVolumeArn(Aws::String&& value) { SetVolumeArn(std::move(value)); return *this;}

    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline GetKxVolumeResult& WithVolumeArn(const char* value) { SetVolumeArn(value); return *this;}


    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline const KxNAS1Configuration& GetNas1Configuration() const{ return m_nas1Configuration; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline void SetNas1Configuration(const KxNAS1Configuration& value) { m_nas1Configuration = value; }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline void SetNas1Configuration(KxNAS1Configuration&& value) { m_nas1Configuration = std::move(value); }

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline GetKxVolumeResult& WithNas1Configuration(const KxNAS1Configuration& value) { SetNas1Configuration(value); return *this;}

    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline GetKxVolumeResult& WithNas1Configuration(KxNAS1Configuration&& value) { SetNas1Configuration(std::move(value)); return *this;}


    /**
     * <p>The status of volume creation.</p> <ul> <li> <p>CREATING – The volume
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation
     * has failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED �� The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline const KxVolumeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of volume creation.</p> <ul> <li> <p>CREATING – The volume
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation
     * has failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED �� The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline void SetStatus(const KxVolumeStatus& value) { m_status = value; }

    /**
     * <p>The status of volume creation.</p> <ul> <li> <p>CREATING – The volume
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation
     * has failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED �� The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline void SetStatus(KxVolumeStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of volume creation.</p> <ul> <li> <p>CREATING – The volume
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation
     * has failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED �� The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline GetKxVolumeResult& WithStatus(const KxVolumeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of volume creation.</p> <ul> <li> <p>CREATING – The volume
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation
     * has failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED �� The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline GetKxVolumeResult& WithStatus(KxVolumeStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline GetKxVolumeResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline GetKxVolumeResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline GetKxVolumeResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline GetKxVolumeResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline GetKxVolumeResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p> A description of the volume. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the volume. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> A description of the volume. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> A description of the volume. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> A description of the volume. </p>
     */
    inline GetKxVolumeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the volume. </p>
     */
    inline GetKxVolumeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the volume. </p>
     */
    inline GetKxVolumeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline void SetAzMode(const KxAzMode& value) { m_azMode = value; }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline GetKxVolumeResult& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones you want to assign per cluster. Currently,
     * FinSpace only support <code>SINGLE</code> for volumes.</p>
     */
    inline GetKxVolumeResult& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const{ return m_availabilityZoneIds; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { m_availabilityZoneIds = value; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { m_availabilityZoneIds = std::move(value); }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxVolumeResult& WithAvailabilityZoneIds(const Aws::Vector<Aws::String>& value) { SetAvailabilityZoneIds(value); return *this;}

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxVolumeResult& WithAvailabilityZoneIds(Aws::Vector<Aws::String>&& value) { SetAvailabilityZoneIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxVolumeResult& AddAvailabilityZoneIds(const Aws::String& value) { m_availabilityZoneIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxVolumeResult& AddAvailabilityZoneIds(Aws::String&& value) { m_availabilityZoneIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxVolumeResult& AddAvailabilityZoneIds(const char* value) { m_availabilityZoneIds.push_back(value); return *this; }


    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxVolumeResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxVolumeResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline const Aws::Vector<KxAttachedCluster>& GetAttachedClusters() const{ return m_attachedClusters; }

    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline void SetAttachedClusters(const Aws::Vector<KxAttachedCluster>& value) { m_attachedClusters = value; }

    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline void SetAttachedClusters(Aws::Vector<KxAttachedCluster>&& value) { m_attachedClusters = std::move(value); }

    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline GetKxVolumeResult& WithAttachedClusters(const Aws::Vector<KxAttachedCluster>& value) { SetAttachedClusters(value); return *this;}

    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline GetKxVolumeResult& WithAttachedClusters(Aws::Vector<KxAttachedCluster>&& value) { SetAttachedClusters(std::move(value)); return *this;}

    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline GetKxVolumeResult& AddAttachedClusters(const KxAttachedCluster& value) { m_attachedClusters.push_back(value); return *this; }

    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline GetKxVolumeResult& AddAttachedClusters(KxAttachedCluster&& value) { m_attachedClusters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxVolumeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxVolumeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxVolumeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_environmentId;

    Aws::String m_volumeName;

    KxVolumeType m_volumeType;

    Aws::String m_volumeArn;

    KxNAS1Configuration m_nas1Configuration;

    KxVolumeStatus m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_description;

    KxAzMode m_azMode;

    Aws::Vector<Aws::String> m_availabilityZoneIds;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::Vector<KxAttachedCluster> m_attachedClusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
