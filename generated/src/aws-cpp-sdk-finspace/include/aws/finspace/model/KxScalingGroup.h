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
   * <p> A structure for storing metadata of scaling group.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxScalingGroup">AWS
   * API Reference</a></p>
   */
  class KxScalingGroup
  {
  public:
    AWS_FINSPACE_API KxScalingGroup();
    AWS_FINSPACE_API KxScalingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxScalingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const{ return m_scalingGroupName; }
    inline bool ScalingGroupNameHasBeenSet() const { return m_scalingGroupNameHasBeenSet; }
    inline void SetScalingGroupName(const Aws::String& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = value; }
    inline void SetScalingGroupName(Aws::String&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::move(value); }
    inline void SetScalingGroupName(const char* value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName.assign(value); }
    inline KxScalingGroup& WithScalingGroupName(const Aws::String& value) { SetScalingGroupName(value); return *this;}
    inline KxScalingGroup& WithScalingGroupName(Aws::String&& value) { SetScalingGroupName(std::move(value)); return *this;}
    inline KxScalingGroup& WithScalingGroupName(const char* value) { SetScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed.</p> <p>You can add one of the following
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
    inline const Aws::String& GetHostType() const{ return m_hostType; }
    inline bool HostTypeHasBeenSet() const { return m_hostTypeHasBeenSet; }
    inline void SetHostType(const Aws::String& value) { m_hostTypeHasBeenSet = true; m_hostType = value; }
    inline void SetHostType(Aws::String&& value) { m_hostTypeHasBeenSet = true; m_hostType = std::move(value); }
    inline void SetHostType(const char* value) { m_hostTypeHasBeenSet = true; m_hostType.assign(value); }
    inline KxScalingGroup& WithHostType(const Aws::String& value) { SetHostType(value); return *this;}
    inline KxScalingGroup& WithHostType(Aws::String&& value) { SetHostType(std::move(value)); return *this;}
    inline KxScalingGroup& WithHostType(const char* value) { SetHostType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of clusters currently active in a given scaling group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const{ return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    inline void SetClusters(const Aws::Vector<Aws::String>& value) { m_clustersHasBeenSet = true; m_clusters = value; }
    inline void SetClusters(Aws::Vector<Aws::String>&& value) { m_clustersHasBeenSet = true; m_clusters = std::move(value); }
    inline KxScalingGroup& WithClusters(const Aws::Vector<Aws::String>& value) { SetClusters(value); return *this;}
    inline KxScalingGroup& WithClusters(Aws::Vector<Aws::String>&& value) { SetClusters(std::move(value)); return *this;}
    inline KxScalingGroup& AddClusters(const Aws::String& value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }
    inline KxScalingGroup& AddClusters(Aws::String&& value) { m_clustersHasBeenSet = true; m_clusters.push_back(std::move(value)); return *this; }
    inline KxScalingGroup& AddClusters(const char* value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline KxScalingGroup& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline KxScalingGroup& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline KxScalingGroup& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of scaling groups. </p>
     */
    inline const KxScalingGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const KxScalingGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(KxScalingGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline KxScalingGroup& WithStatus(const KxScalingGroupStatus& value) { SetStatus(value); return *this;}
    inline KxScalingGroup& WithStatus(KxScalingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline KxScalingGroup& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline KxScalingGroup& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline KxScalingGroup& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }
    inline KxScalingGroup& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline KxScalingGroup& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline KxScalingGroup& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline KxScalingGroup& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scalingGroupName;
    bool m_scalingGroupNameHasBeenSet = false;

    Aws::String m_hostType;
    bool m_hostTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    KxScalingGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
