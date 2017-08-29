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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/QueryExecution.h>
#include <aws/athena/model/UnprocessedQueryExecutionId.h>
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
namespace Athena
{
namespace Model
{
  class AWS_ATHENA_API BatchGetQueryExecutionResult
  {
  public:
    BatchGetQueryExecutionResult();
    BatchGetQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a query execution.</p>
     */
    inline const Aws::Vector<QueryExecution>& GetQueryExecutions() const{ return m_queryExecutions; }

    /**
     * <p>Information about a query execution.</p>
     */
    inline void SetQueryExecutions(const Aws::Vector<QueryExecution>& value) { m_queryExecutions = value; }

    /**
     * <p>Information about a query execution.</p>
     */
    inline void SetQueryExecutions(Aws::Vector<QueryExecution>&& value) { m_queryExecutions = std::move(value); }

    /**
     * <p>Information about a query execution.</p>
     */
    inline BatchGetQueryExecutionResult& WithQueryExecutions(const Aws::Vector<QueryExecution>& value) { SetQueryExecutions(value); return *this;}

    /**
     * <p>Information about a query execution.</p>
     */
    inline BatchGetQueryExecutionResult& WithQueryExecutions(Aws::Vector<QueryExecution>&& value) { SetQueryExecutions(std::move(value)); return *this;}

    /**
     * <p>Information about a query execution.</p>
     */
    inline BatchGetQueryExecutionResult& AddQueryExecutions(const QueryExecution& value) { m_queryExecutions.push_back(value); return *this; }

    /**
     * <p>Information about a query execution.</p>
     */
    inline BatchGetQueryExecutionResult& AddQueryExecutions(QueryExecution&& value) { m_queryExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline const Aws::Vector<UnprocessedQueryExecutionId>& GetUnprocessedQueryExecutionIds() const{ return m_unprocessedQueryExecutionIds; }

    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline void SetUnprocessedQueryExecutionIds(const Aws::Vector<UnprocessedQueryExecutionId>& value) { m_unprocessedQueryExecutionIds = value; }

    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline void SetUnprocessedQueryExecutionIds(Aws::Vector<UnprocessedQueryExecutionId>&& value) { m_unprocessedQueryExecutionIds = std::move(value); }

    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline BatchGetQueryExecutionResult& WithUnprocessedQueryExecutionIds(const Aws::Vector<UnprocessedQueryExecutionId>& value) { SetUnprocessedQueryExecutionIds(value); return *this;}

    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline BatchGetQueryExecutionResult& WithUnprocessedQueryExecutionIds(Aws::Vector<UnprocessedQueryExecutionId>&& value) { SetUnprocessedQueryExecutionIds(std::move(value)); return *this;}

    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline BatchGetQueryExecutionResult& AddUnprocessedQueryExecutionIds(const UnprocessedQueryExecutionId& value) { m_unprocessedQueryExecutionIds.push_back(value); return *this; }

    /**
     * <p>Information about the query executions that failed to run.</p>
     */
    inline BatchGetQueryExecutionResult& AddUnprocessedQueryExecutionIds(UnprocessedQueryExecutionId&& value) { m_unprocessedQueryExecutionIds.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<QueryExecution> m_queryExecutions;

    Aws::Vector<UnprocessedQueryExecutionId> m_unprocessedQueryExecutionIds;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
