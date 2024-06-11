/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateKxScalingGroupResult
  {
  public:
    AWS_FINSPACE_API CreateKxScalingGroupResult();
    AWS_FINSPACE_API CreateKxScalingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API CreateKxScalingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the kdb environment, where you create the scaling
     * group. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline CreateKxScalingGroupResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateKxScalingGroupResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateKxScalingGroupResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const{ return m_scalingGroupName; }
    inline void SetScalingGroupName(const Aws::String& value) { m_scalingGroupName = value; }
    inline void SetScalingGroupName(Aws::String&& value) { m_scalingGroupName = std::move(value); }
    inline void SetScalingGroupName(const char* value) { m_scalingGroupName.assign(value); }
    inline CreateKxScalingGroupResult& WithScalingGroupName(const Aws::String& value) { SetScalingGroupName(value); return *this;}
    inline CreateKxScalingGroupResult& WithScalingGroupName(Aws::String&& value) { SetScalingGroupName(std::move(value)); return *this;}
    inline CreateKxScalingGroupResult& WithScalingGroupName(const char* value) { SetScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The memory and CPU capabilities of the scaling group host on which FinSpace
     * Managed kdb clusters will be placed. </p>
     */
    inline const Aws::String& GetHostType() const{ return m_hostType; }
    inline void SetHostType(const Aws::String& value) { m_hostType = value; }
    inline void SetHostType(Aws::String&& value) { m_hostType = std::move(value); }
    inline void SetHostType(const char* value) { m_hostType.assign(value); }
    inline CreateKxScalingGroupResult& WithHostType(const Aws::String& value) { SetHostType(value); return *this;}
    inline CreateKxScalingGroupResult& WithHostType(Aws::String&& value) { SetHostType(std::move(value)); return *this;}
    inline CreateKxScalingGroupResult& WithHostType(const char* value) { SetHostType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }
    inline CreateKxScalingGroupResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CreateKxScalingGroupResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CreateKxScalingGroupResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
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
    inline const KxScalingGroupStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const KxScalingGroupStatus& value) { m_status = value; }
    inline void SetStatus(KxScalingGroupStatus&& value) { m_status = std::move(value); }
    inline CreateKxScalingGroupResult& WithStatus(const KxScalingGroupStatus& value) { SetStatus(value); return *this;}
    inline CreateKxScalingGroupResult& WithStatus(KxScalingGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The last time that the scaling group was updated in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline CreateKxScalingGroupResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline CreateKxScalingGroupResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the scaling group was created in FinSpace. The value
     * is determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline CreateKxScalingGroupResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline CreateKxScalingGroupResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateKxScalingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateKxScalingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateKxScalingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;

    Aws::String m_scalingGroupName;

    Aws::String m_hostType;

    Aws::String m_availabilityZoneId;

    KxScalingGroupStatus m_status;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
