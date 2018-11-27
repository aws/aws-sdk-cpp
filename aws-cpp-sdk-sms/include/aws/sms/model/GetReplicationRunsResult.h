/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/ReplicationJob.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ReplicationRun.h>
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
namespace SMS
{
namespace Model
{
  class AWS_SMS_API GetReplicationRunsResult
  {
  public:
    GetReplicationRunsResult();
    GetReplicationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetReplicationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the replication job.</p>
     */
    inline const ReplicationJob& GetReplicationJob() const{ return m_replicationJob; }

    /**
     * <p>Information about the replication job.</p>
     */
    inline void SetReplicationJob(const ReplicationJob& value) { m_replicationJob = value; }

    /**
     * <p>Information about the replication job.</p>
     */
    inline void SetReplicationJob(ReplicationJob&& value) { m_replicationJob = std::move(value); }

    /**
     * <p>Information about the replication job.</p>
     */
    inline GetReplicationRunsResult& WithReplicationJob(const ReplicationJob& value) { SetReplicationJob(value); return *this;}

    /**
     * <p>Information about the replication job.</p>
     */
    inline GetReplicationRunsResult& WithReplicationJob(ReplicationJob&& value) { SetReplicationJob(std::move(value)); return *this;}


    /**
     * <p>Information about the replication runs.</p>
     */
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const{ return m_replicationRunList; }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline void SetReplicationRunList(const Aws::Vector<ReplicationRun>& value) { m_replicationRunList = value; }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline void SetReplicationRunList(Aws::Vector<ReplicationRun>&& value) { m_replicationRunList = std::move(value); }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline GetReplicationRunsResult& WithReplicationRunList(const Aws::Vector<ReplicationRun>& value) { SetReplicationRunList(value); return *this;}

    /**
     * <p>Information about the replication runs.</p>
     */
    inline GetReplicationRunsResult& WithReplicationRunList(Aws::Vector<ReplicationRun>&& value) { SetReplicationRunList(std::move(value)); return *this;}

    /**
     * <p>Information about the replication runs.</p>
     */
    inline GetReplicationRunsResult& AddReplicationRunList(const ReplicationRun& value) { m_replicationRunList.push_back(value); return *this; }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline GetReplicationRunsResult& AddReplicationRunList(ReplicationRun&& value) { m_replicationRunList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetReplicationRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetReplicationRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline GetReplicationRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ReplicationJob m_replicationJob;

    Aws::Vector<ReplicationRun> m_replicationRunList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
