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
    AWS_DATASYNC_API DescribeDiscoveryJobResult();
    AWS_DATASYNC_API DescribeDiscoveryJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeDiscoveryJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArn = value; }

    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArn = std::move(value); }

    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArn.assign(value); }

    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline DescribeDiscoveryJobResult& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline DescribeDiscoveryJobResult& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the on-premises storage system you're running the discovery job
     * on.</p>
     */
    inline DescribeDiscoveryJobResult& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const{ return m_discoveryJobArn; }

    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline void SetDiscoveryJobArn(const Aws::String& value) { m_discoveryJobArn = value; }

    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline void SetDiscoveryJobArn(Aws::String&& value) { m_discoveryJobArn = std::move(value); }

    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline void SetDiscoveryJobArn(const char* value) { m_discoveryJobArn.assign(value); }

    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline DescribeDiscoveryJobResult& WithDiscoveryJobArn(const Aws::String& value) { SetDiscoveryJobArn(value); return *this;}

    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline DescribeDiscoveryJobResult& WithDiscoveryJobArn(Aws::String&& value) { SetDiscoveryJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the discovery job.</p>
     */
    inline DescribeDiscoveryJobResult& WithDiscoveryJobArn(const char* value) { SetDiscoveryJobArn(value); return *this;}


    /**
     * <p>The number of minutes that the discovery job runs.</p>
     */
    inline int GetCollectionDurationMinutes() const{ return m_collectionDurationMinutes; }

    /**
     * <p>The number of minutes that the discovery job runs.</p>
     */
    inline void SetCollectionDurationMinutes(int value) { m_collectionDurationMinutes = value; }

    /**
     * <p>The number of minutes that the discovery job runs.</p>
     */
    inline DescribeDiscoveryJobResult& WithCollectionDurationMinutes(int value) { SetCollectionDurationMinutes(value); return *this;}


    /**
     * <p>Indicates the status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline const DiscoveryJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline void SetStatus(const DiscoveryJobStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline void SetStatus(DiscoveryJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline DescribeDiscoveryJobResult& WithStatus(const DiscoveryJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of a discovery job. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-job-statuses.html#discovery-job-statuses-table">Discovery
     * job statuses</a>.</p>
     */
    inline DescribeDiscoveryJobResult& WithStatus(DiscoveryJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the discovery job started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const{ return m_jobStartTime; }

    /**
     * <p>The time when the discovery job started.</p>
     */
    inline void SetJobStartTime(const Aws::Utils::DateTime& value) { m_jobStartTime = value; }

    /**
     * <p>The time when the discovery job started.</p>
     */
    inline void SetJobStartTime(Aws::Utils::DateTime&& value) { m_jobStartTime = std::move(value); }

    /**
     * <p>The time when the discovery job started.</p>
     */
    inline DescribeDiscoveryJobResult& WithJobStartTime(const Aws::Utils::DateTime& value) { SetJobStartTime(value); return *this;}

    /**
     * <p>The time when the discovery job started.</p>
     */
    inline DescribeDiscoveryJobResult& WithJobStartTime(Aws::Utils::DateTime&& value) { SetJobStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the discovery job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const{ return m_jobEndTime; }

    /**
     * <p>The time when the discovery job ended.</p>
     */
    inline void SetJobEndTime(const Aws::Utils::DateTime& value) { m_jobEndTime = value; }

    /**
     * <p>The time when the discovery job ended.</p>
     */
    inline void SetJobEndTime(Aws::Utils::DateTime&& value) { m_jobEndTime = std::move(value); }

    /**
     * <p>The time when the discovery job ended.</p>
     */
    inline DescribeDiscoveryJobResult& WithJobEndTime(const Aws::Utils::DateTime& value) { SetJobEndTime(value); return *this;}

    /**
     * <p>The time when the discovery job ended.</p>
     */
    inline DescribeDiscoveryJobResult& WithJobEndTime(Aws::Utils::DateTime&& value) { SetJobEndTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDiscoveryJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDiscoveryJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDiscoveryJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_storageSystemArn;

    Aws::String m_discoveryJobArn;

    int m_collectionDurationMinutes;

    DiscoveryJobStatus m_status;

    Aws::Utils::DateTime m_jobStartTime;

    Aws::Utils::DateTime m_jobEndTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
