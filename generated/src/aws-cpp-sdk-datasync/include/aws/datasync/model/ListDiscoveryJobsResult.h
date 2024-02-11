/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/DiscoveryJobListEntry.h>
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
  class ListDiscoveryJobsResult
  {
  public:
    AWS_DATASYNC_API ListDiscoveryJobsResult();
    AWS_DATASYNC_API ListDiscoveryJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListDiscoveryJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline const Aws::Vector<DiscoveryJobListEntry>& GetDiscoveryJobs() const{ return m_discoveryJobs; }

    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline void SetDiscoveryJobs(const Aws::Vector<DiscoveryJobListEntry>& value) { m_discoveryJobs = value; }

    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline void SetDiscoveryJobs(Aws::Vector<DiscoveryJobListEntry>&& value) { m_discoveryJobs = std::move(value); }

    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline ListDiscoveryJobsResult& WithDiscoveryJobs(const Aws::Vector<DiscoveryJobListEntry>& value) { SetDiscoveryJobs(value); return *this;}

    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline ListDiscoveryJobsResult& WithDiscoveryJobs(Aws::Vector<DiscoveryJobListEntry>&& value) { SetDiscoveryJobs(std::move(value)); return *this;}

    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline ListDiscoveryJobsResult& AddDiscoveryJobs(const DiscoveryJobListEntry& value) { m_discoveryJobs.push_back(value); return *this; }

    /**
     * <p>The discovery jobs that you've run.</p>
     */
    inline ListDiscoveryJobsResult& AddDiscoveryJobs(DiscoveryJobListEntry&& value) { m_discoveryJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListDiscoveryJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListDiscoveryJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListDiscoveryJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDiscoveryJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDiscoveryJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDiscoveryJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DiscoveryJobListEntry> m_discoveryJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
