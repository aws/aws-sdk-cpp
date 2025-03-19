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
    AWS_FINSPACE_API GetKxVolumeResult() = default;
    AWS_FINSPACE_API GetKxVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the kdb environment, whose clusters can attach to the
     * volume. </p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetKxVolumeResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the volume.</p>
     */
    inline const Aws::String& GetVolumeName() const { return m_volumeName; }
    template<typename VolumeNameT = Aws::String>
    void SetVolumeName(VolumeNameT&& value) { m_volumeNameHasBeenSet = true; m_volumeName = std::forward<VolumeNameT>(value); }
    template<typename VolumeNameT = Aws::String>
    GetKxVolumeResult& WithVolumeName(VolumeNameT&& value) { SetVolumeName(std::forward<VolumeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of file system volume. Currently, FinSpace only supports
     * <code>NAS_1</code> volume type. </p>
     */
    inline KxVolumeType GetVolumeType() const { return m_volumeType; }
    inline void SetVolumeType(KxVolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline GetKxVolumeResult& WithVolumeType(KxVolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN identifier of the volume. </p>
     */
    inline const Aws::String& GetVolumeArn() const { return m_volumeArn; }
    template<typename VolumeArnT = Aws::String>
    void SetVolumeArn(VolumeArnT&& value) { m_volumeArnHasBeenSet = true; m_volumeArn = std::forward<VolumeArnT>(value); }
    template<typename VolumeArnT = Aws::String>
    GetKxVolumeResult& WithVolumeArn(VolumeArnT&& value) { SetVolumeArn(std::forward<VolumeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configuration for the Network attached storage (NAS_1) file
     * system volume.</p>
     */
    inline const KxNAS1Configuration& GetNas1Configuration() const { return m_nas1Configuration; }
    template<typename Nas1ConfigurationT = KxNAS1Configuration>
    void SetNas1Configuration(Nas1ConfigurationT&& value) { m_nas1ConfigurationHasBeenSet = true; m_nas1Configuration = std::forward<Nas1ConfigurationT>(value); }
    template<typename Nas1ConfigurationT = KxNAS1Configuration>
    GetKxVolumeResult& WithNas1Configuration(Nas1ConfigurationT&& value) { SetNas1Configuration(std::forward<Nas1ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of volume creation.</p> <ul> <li> <p>CREATING – The volume
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The volume creation
     * has failed.</p> </li> <li> <p>ACTIVE – The volume is active.</p> </li> <li>
     * <p>UPDATING – The volume is in the process of being updated.</p> </li> <li>
     * <p>UPDATE_FAILED – The update action failed.</p> </li> <li> <p>UPDATED – The
     * volume is successfully updated.</p> </li> <li> <p>DELETING – The volume is in
     * the process of being deleted.</p> </li> <li> <p>DELETE_FAILED – The system
     * failed to delete the volume.</p> </li> <li> <p>DELETED – The volume is
     * successfully deleted.</p> </li> </ul>
     */
    inline KxVolumeStatus GetStatus() const { return m_status; }
    inline void SetStatus(KxVolumeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetKxVolumeResult& WithStatus(KxVolumeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetKxVolumeResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the volume was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetKxVolumeResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the volume. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetKxVolumeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per volume. Currently,
     * FinSpace only supports <code>SINGLE</code> for volumes. This places dataview in
     * a single AZ.</p>
     */
    inline KxAzMode GetAzMode() const { return m_azMode; }
    inline void SetAzMode(KxAzMode value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline GetKxVolumeResult& WithAzMode(KxAzMode value) { SetAzMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value); }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    GetKxVolumeResult& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value)); return *this;}
    template<typename AvailabilityZoneIdsT = Aws::String>
    GetKxVolumeResult& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that the volume was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    GetKxVolumeResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of cluster identifiers that a volume is attached to. </p>
     */
    inline const Aws::Vector<KxAttachedCluster>& GetAttachedClusters() const { return m_attachedClusters; }
    template<typename AttachedClustersT = Aws::Vector<KxAttachedCluster>>
    void SetAttachedClusters(AttachedClustersT&& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters = std::forward<AttachedClustersT>(value); }
    template<typename AttachedClustersT = Aws::Vector<KxAttachedCluster>>
    GetKxVolumeResult& WithAttachedClusters(AttachedClustersT&& value) { SetAttachedClusters(std::forward<AttachedClustersT>(value)); return *this;}
    template<typename AttachedClustersT = KxAttachedCluster>
    GetKxVolumeResult& AddAttachedClusters(AttachedClustersT&& value) { m_attachedClustersHasBeenSet = true; m_attachedClusters.emplace_back(std::forward<AttachedClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKxVolumeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_volumeName;
    bool m_volumeNameHasBeenSet = false;

    KxVolumeType m_volumeType{KxVolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_volumeArn;
    bool m_volumeArnHasBeenSet = false;

    KxNAS1Configuration m_nas1Configuration;
    bool m_nas1ConfigurationHasBeenSet = false;

    KxVolumeStatus m_status{KxVolumeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    KxAzMode m_azMode{KxAzMode::NOT_SET};
    bool m_azModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::Vector<KxAttachedCluster> m_attachedClusters;
    bool m_attachedClustersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
