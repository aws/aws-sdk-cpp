/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxScalingGroupStatus.h>
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
namespace finspace
{
namespace Model
{
  class GetKxScalingGroupResult
  {
  public:
    AWS_FINSPACE_API GetKxScalingGroupResult() = default;
    AWS_FINSPACE_API GetKxScalingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxScalingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const { return m_scalingGroupName; }
    template<typename ScalingGroupNameT = Aws::String>
    void SetScalingGroupName(ScalingGroupNameT&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::forward<ScalingGroupNameT>(value); }
    template<typename ScalingGroupNameT = Aws::String>
    GetKxScalingGroupResult& WithScalingGroupName(ScalingGroupNameT&& value) { SetScalingGroupName(std::forward<ScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupArn() const { return m_scalingGroupArn; }
    template<typename ScalingGroupArnT = Aws::String>
    void SetScalingGroupArn(ScalingGroupArnT&& value) { m_scalingGroupArnHasBeenSet = true; m_scalingGroupArn = std::forward<ScalingGroupArnT>(value); }
    template<typename ScalingGroupArnT = Aws::String>
    GetKxScalingGroupResult& WithScalingGroupArn(ScalingGroupArnT&& value) { SetScalingGroupArn(std::forward<ScalingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed.</p> <p>It can have one of the following
     * values:</p> <ul> <li> <p> <code>kx.sg.large</code> – The host type with a
     * configuration of 16 GiB memory and 2 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg.xlarge</code> – The host type with a configuration of 32 GiB memory
     * and 4 vCPUs.</p> </li> <li> <p> <code>kx.sg.2xlarge</code> – The host type with
     * a configuration of 64 GiB memory and 8 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg.4xlarge</code> – The host type with a configuration of 108 GiB
     * memory and 16 vCPUs.</p> </li> <li> <p> <code>kx.sg.8xlarge</code> – The host
     * type with a configuration of 216 GiB memory and 32 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg.16xlarge</code> – The host type with a configuration of 432 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.sg.32xlarge</code> – The host
     * type with a configuration of 864 GiB memory and 128 vCPUs.</p> </li> <li> <p>
     * <code>kx.sg1.16xlarge</code> – The host type with a configuration of 1949 GiB
     * memory and 64 vCPUs.</p> </li> <li> <p> <code>kx.sg1.24xlarge</code> – The host
     * type with a configuration of 2948 GiB memory and 96 vCPUs.</p> </li> </ul>
     */
    inline const Aws::String& GetHostType() const { return m_hostType; }
    template<typename HostTypeT = Aws::String>
    void SetHostType(HostTypeT&& value) { m_hostTypeHasBeenSet = true; m_hostType = std::forward<HostTypeT>(value); }
    template<typename HostTypeT = Aws::String>
    GetKxScalingGroupResult& WithHostType(HostTypeT&& value) { SetHostType(std::forward<HostTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const { return m_clusters; }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    GetKxScalingGroupResult& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = Aws::String>
    GetKxScalingGroupResult& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    GetKxScalingGroupResult& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of scaling group.</p> <ul> <li> <p>CREATING – The scaling group
     * creation is in progress.</p> </li> <li> <p>CREATE_FAILED – The scaling group
     * creation has failed.</p> </li> <li> <p>ACTIVE – The scaling group is active.</p>
     * </li> <li> <p>UPDATING – The scaling group is in the process of being
     * updated.</p> </li> <li> <p>UPDATE_FAILED – The update action failed.</p> </li>
     * <li> <p>DELETING – The scaling group is in the process of being deleted.</p>
     * </li> <li> <p>DELETE_FAILED – The system failed to delete the scaling group.</p>
     * </li> <li> <p>DELETED – The scaling group is successfully deleted.</p> </li>
     * </ul>
     */
    inline KxScalingGroupStatus GetStatus() const { return m_status; }
    inline void SetStatus(KxScalingGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetKxScalingGroupResult& WithStatus(KxScalingGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetKxScalingGroupResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    GetKxScalingGroupResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetKxScalingGroupResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKxScalingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scalingGroupName;
    bool m_scalingGroupNameHasBeenSet = false;

    Aws::String m_scalingGroupArn;
    bool m_scalingGroupArnHasBeenSet = false;

    Aws::String m_hostType;
    bool m_hostTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    KxScalingGroupStatus m_status{KxScalingGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
