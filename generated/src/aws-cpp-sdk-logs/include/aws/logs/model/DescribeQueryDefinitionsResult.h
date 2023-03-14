/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/QueryDefinition.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeQueryDefinitionsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult();
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeQueryDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline const Aws::Vector<QueryDefinition>& GetQueryDefinitions() const{ return m_queryDefinitions; }

    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline void SetQueryDefinitions(const Aws::Vector<QueryDefinition>& value) { m_queryDefinitions = value; }

    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline void SetQueryDefinitions(Aws::Vector<QueryDefinition>&& value) { m_queryDefinitions = std::move(value); }

    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline DescribeQueryDefinitionsResult& WithQueryDefinitions(const Aws::Vector<QueryDefinition>& value) { SetQueryDefinitions(value); return *this;}

    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline DescribeQueryDefinitionsResult& WithQueryDefinitions(Aws::Vector<QueryDefinition>&& value) { SetQueryDefinitions(std::move(value)); return *this;}

    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline DescribeQueryDefinitionsResult& AddQueryDefinitions(const QueryDefinition& value) { m_queryDefinitions.push_back(value); return *this; }

    /**
     * <p>The list of query definitions that match your request.</p>
     */
    inline DescribeQueryDefinitionsResult& AddQueryDefinitions(QueryDefinition&& value) { m_queryDefinitions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeQueryDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeQueryDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeQueryDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<QueryDefinition> m_queryDefinitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
