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
    AWS_FINSPACE_API GetKxScalingGroupResult();
    AWS_FINSPACE_API GetKxScalingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxScalingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const{ return m_scalingGroupName; }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline void SetScalingGroupName(const Aws::String& value) { m_scalingGroupName = value; }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline void SetScalingGroupName(Aws::String&& value) { m_scalingGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline void SetScalingGroupName(const char* value) { m_scalingGroupName.assign(value); }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithScalingGroupName(const Aws::String& value) { SetScalingGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithScalingGroupName(Aws::String&& value) { SetScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithScalingGroupName(const char* value) { SetScalingGroupName(value); return *this;}


    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupArn() const{ return m_scalingGroupArn; }

    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline void SetScalingGroupArn(const Aws::String& value) { m_scalingGroupArn = value; }

    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline void SetScalingGroupArn(Aws::String&& value) { m_scalingGroupArn = std::move(value); }

    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline void SetScalingGroupArn(const char* value) { m_scalingGroupArn.assign(value); }

    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithScalingGroupArn(const Aws::String& value) { SetScalingGroupArn(value); return *this;}

    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithScalingGroupArn(Aws::String&& value) { SetScalingGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN identifier for the scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithScalingGroupArn(const char* value) { SetScalingGroupArn(value); return *this;}


    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline const Aws::String& GetHostType() const{ return m_hostType; }

    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline void SetHostType(const Aws::String& value) { m_hostType = value; }

    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline void SetHostType(Aws::String&& value) { m_hostType = std::move(value); }

    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline void SetHostType(const char* value) { m_hostType.assign(value); }

    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline GetKxScalingGroupResult& WithHostType(const Aws::String& value) { SetHostType(value); return *this;}

    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline GetKxScalingGroupResult& WithHostType(Aws::String&& value) { SetHostType(std::move(value)); return *this;}

    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline GetKxScalingGroupResult& WithHostType(const char* value) { SetHostType(value); return *this;}


    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const{ return m_clusters; }

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline void SetClusters(const Aws::Vector<Aws::String>& value) { m_clusters = value; }

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline void SetClusters(Aws::Vector<Aws::String>&& value) { m_clusters = std::move(value); }

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithClusters(const Aws::Vector<Aws::String>& value) { SetClusters(value); return *this;}

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline GetKxScalingGroupResult& WithClusters(Aws::Vector<Aws::String>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline GetKxScalingGroupResult& AddClusters(const Aws::String& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline GetKxScalingGroupResult& AddClusters(Aws::String&& value) { m_clusters.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of Managed kdb clusters that are currently active in the given
     * scaling group. </p>
     */
    inline GetKxScalingGroupResult& AddClusters(const char* value) { m_clusters.push_back(value); return *this; }


    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxScalingGroupResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxScalingGroupResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline GetKxScalingGroupResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


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
    inline const KxScalingGroupStatus& GetStatus() const{ return m_status; }

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
    inline void SetStatus(const KxScalingGroupStatus& value) { m_status = value; }

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
    inline void SetStatus(KxScalingGroupStatus&& value) { m_status = std::move(value); }

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
    inline GetKxScalingGroupResult& WithStatus(const KxScalingGroupStatus& value) { SetStatus(value); return *this;}

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
    inline GetKxScalingGroupResult& WithStatus(KxScalingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline GetKxScalingGroupResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline GetKxScalingGroupResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The error message when a failed state occurs. </p>
     */
    inline GetKxScalingGroupResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline GetKxScalingGroupResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline GetKxScalingGroupResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxScalingGroupResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxScalingGroupResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxScalingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxScalingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxScalingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_scalingGroupName;

    Aws::String m_scalingGroupArn;

    Aws::String m_hostType;

    Aws::Vector<Aws::String> m_clusters;

    Aws::String m_availabilityZoneId;

    KxScalingGroupStatus m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
