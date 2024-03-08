/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataSourceSummary.h>
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
  class ListDataSourcesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListDataSourcesResult();
    AWS_BEDROCKAGENT_API ListDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<DataSourceSummary>& GetDataSourceSummaries() const{ return m_dataSourceSummaries; }

    
    inline void SetDataSourceSummaries(const Aws::Vector<DataSourceSummary>& value) { m_dataSourceSummaries = value; }

    
    inline void SetDataSourceSummaries(Aws::Vector<DataSourceSummary>&& value) { m_dataSourceSummaries = std::move(value); }

    
    inline ListDataSourcesResult& WithDataSourceSummaries(const Aws::Vector<DataSourceSummary>& value) { SetDataSourceSummaries(value); return *this;}

    
    inline ListDataSourcesResult& WithDataSourceSummaries(Aws::Vector<DataSourceSummary>&& value) { SetDataSourceSummaries(std::move(value)); return *this;}

    
    inline ListDataSourcesResult& AddDataSourceSummaries(const DataSourceSummary& value) { m_dataSourceSummaries.push_back(value); return *this; }

    
    inline ListDataSourcesResult& AddDataSourceSummaries(DataSourceSummary&& value) { m_dataSourceSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListDataSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListDataSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListDataSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDataSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDataSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDataSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataSourceSummary> m_dataSourceSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
