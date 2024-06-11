﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SyncJobSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListSyncJobsResult
  {
  public:
    AWS_IOTTWINMAKER_API ListSyncJobsResult();
    AWS_IOTTWINMAKER_API ListSyncJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListSyncJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The listed SyncJob summaries.</p>
     */
    inline const Aws::Vector<SyncJobSummary>& GetSyncJobSummaries() const{ return m_syncJobSummaries; }
    inline void SetSyncJobSummaries(const Aws::Vector<SyncJobSummary>& value) { m_syncJobSummaries = value; }
    inline void SetSyncJobSummaries(Aws::Vector<SyncJobSummary>&& value) { m_syncJobSummaries = std::move(value); }
    inline ListSyncJobsResult& WithSyncJobSummaries(const Aws::Vector<SyncJobSummary>& value) { SetSyncJobSummaries(value); return *this;}
    inline ListSyncJobsResult& WithSyncJobSummaries(Aws::Vector<SyncJobSummary>&& value) { SetSyncJobSummaries(std::move(value)); return *this;}
    inline ListSyncJobsResult& AddSyncJobSummaries(const SyncJobSummary& value) { m_syncJobSummaries.push_back(value); return *this; }
    inline ListSyncJobsResult& AddSyncJobSummaries(SyncJobSummary&& value) { m_syncJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSyncJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSyncJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSyncJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSyncJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSyncJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSyncJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SyncJobSummary> m_syncJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
