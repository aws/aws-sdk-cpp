/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryJobStatus.h>
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
namespace DataSync
{
namespace Model
{
  class DescribeDiscoveryJobResult
  {
  public:
    AWS_DATASYNC_API DescribeDiscoveryJobResult() = default;
    AWS_DATASYNC_API DescribeDiscoveryJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeDiscoveryJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const { return m_storageSystemArn; }
    template<typename StorageSystemArnT = Aws::String>
    void SetStorageSystemArn(StorageSystemArnT&& value) { m_storageSystemArnHasBeenSet = true; m_storageSystemArn = std::forward<StorageSystemArnT>(value); }
    template<typename StorageSystemArnT = Aws::String>
    DescribeDiscoveryJobResult& WithStorageSystemArn(StorageSystemArnT&& value) { SetStorageSystemArn(std::forward<StorageSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const { return m_discoveryJobArn; }
    template<typename DiscoveryJobArnT = Aws::String>
    void SetDiscoveryJobArn(DiscoveryJobArnT&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::forward<DiscoveryJobArnT>(value); }
    template<typename DiscoveryJobArnT = Aws::String>
    DescribeDiscoveryJobResult& WithDiscoveryJobArn(DiscoveryJobArnT&& value) { SetDiscoveryJobArn(std::forward<DiscoveryJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes that the discovery job runs.</p>
     */
    inline int GetCollectionDurationMinutes() const { return m_collectionDurationMinutes; }
    inline void SetCollectionDurationMinutes(int value) { m_collectionDurationMinutesHasBeenSet = true; m_collectionDurationMinutes = value; }
    inline DescribeDiscoveryJobResult& WithCollectionDurationMinutes(int value) { SetCollectionDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline DiscoveryJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(DiscoveryJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDiscoveryJobResult& WithStatus(DiscoveryJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the discovery job started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const { return m_jobStartTime; }
    template<typename JobStartTimeT = Aws::Utils::DateTime>
    void SetJobStartTime(JobStartTimeT&& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = std::forward<JobStartTimeT>(value); }
    template<typename JobStartTimeT = Aws::Utils::DateTime>
    DescribeDiscoveryJobResult& WithJobStartTime(JobStartTimeT&& value) { SetJobStartTime(std::forward<JobStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the discovery job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const { return m_jobEndTime; }
    template<typename JobEndTimeT = Aws::Utils::DateTime>
    void SetJobEndTime(JobEndTimeT&& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = std::forward<JobEndTimeT>(value); }
    template<typename JobEndTimeT = Aws::Utils::DateTime>
    DescribeDiscoveryJobResult& WithJobEndTime(JobEndTimeT&& value) { SetJobEndTime(std::forward<JobEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDiscoveryJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageSystemArn;
    bool m_storageSystemArnHasBeenSet = false;

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    int m_collectionDurationMinutes{0};
    bool m_collectionDurationMinutesHasBeenSet = false;

    DiscoveryJobStatus m_status{DiscoveryJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_jobStartTime{};
    bool m_jobStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_jobEndTime{};
    bool m_jobEndTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
