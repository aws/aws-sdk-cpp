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
#include <aws/athena/model/QueryExecution.h>
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
  class AWS_ATHENA_API GetQueryExecutionResult
  {
  public:
    GetQueryExecutionResult();
    GetQueryExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQueryExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    QueryExecution m_queryExecution;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
