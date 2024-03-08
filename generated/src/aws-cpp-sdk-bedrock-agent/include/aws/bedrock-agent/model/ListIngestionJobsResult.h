/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/IngestionJobSummary.h>
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
namespace BedrockAgent
{
namespace Model
{
  class ListIngestionJobsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListIngestionJobsResult();
    AWS_BEDROCKAGENT_API ListIngestionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListIngestionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<IngestionJobSummary>& GetIngestionJobSummaries() const{ return m_ingestionJobSummaries; }

    
    inline void SetIngestionJobSummaries(const Aws::Vector<IngestionJobSummary>& value) { m_ingestionJobSummaries = value; }

    
    inline void SetIngestionJobSummaries(Aws::Vector<IngestionJobSummary>&& value) { m_ingestionJobSummaries = std::move(value); }

    
    inline ListIngestionJobsResult& WithIngestionJobSummaries(const Aws::Vector<IngestionJobSummary>& value) { SetIngestionJobSummaries(value); return *this;}

    
    inline ListIngestionJobsResult& WithIngestionJobSummaries(Aws::Vector<IngestionJobSummary>&& value) { SetIngestionJobSummaries(std::move(value)); return *this;}

    
    inline ListIngestionJobsResult& AddIngestionJobSummaries(const IngestionJobSummary& value) { m_ingestionJobSummaries.push_back(value); return *this; }

    
    inline ListIngestionJobsResult& AddIngestionJobSummaries(IngestionJobSummary&& value) { m_ingestionJobSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListIngestionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListIngestionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListIngestionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIngestionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIngestionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIngestionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<IngestionJobSummary> m_ingestionJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
