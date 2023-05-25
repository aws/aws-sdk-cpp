/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryExecution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetQueryExecutionResult
  {
  public:
    AWS_ATHENA_API GetQueryExecutionResult();
    AWS_ATHENA_API GetQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the query execution.</p>
     */
    inline const QueryExecution& GetQueryExecution() const{ return m_queryExecution; }

    /**
     * <p>Information about the query execution.</p>
     */
    inline void SetQueryExecution(const QueryExecution& value) { m_queryExecution = value; }

    /**
     * <p>Information about the query execution.</p>
     */
    inline void SetQueryExecution(QueryExecution&& value) { m_queryExecution = std::move(value); }

    /**
     * <p>Information about the query execution.</p>
     */
    inline GetQueryExecutionResult& WithQueryExecution(const QueryExecution& value) { SetQueryExecution(value); return *this;}

    /**
     * <p>Information about the query execution.</p>
     */
    inline GetQueryExecutionResult& WithQueryExecution(QueryExecution&& value) { SetQueryExecution(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetQueryExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetQueryExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetQueryExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    QueryExecution m_queryExecution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
