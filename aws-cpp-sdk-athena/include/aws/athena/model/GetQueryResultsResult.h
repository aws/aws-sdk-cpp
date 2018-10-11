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
#include <aws/athena/model/ResultSet.h>
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
  class AWS_ATHENA_API GetQueryResultsResult
  {
  public:
    GetQueryResultsResult();
    GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of rows inserted with a CREATE TABLE AS SELECT statement. </p>
     */
    inline long long GetUpdateCount() const{ return m_updateCount; }

    /**
     * <p>The number of rows inserted with a CREATE TABLE AS SELECT statement. </p>
     */
    inline void SetUpdateCount(long long value) { m_updateCount = value; }

    /**
     * <p>The number of rows inserted with a CREATE TABLE AS SELECT statement. </p>
     */
    inline GetQueryResultsResult& WithUpdateCount(long long value) { SetUpdateCount(value); return *this;}


    /**
     * <p>The results of the query execution.</p>
     */
    inline const ResultSet& GetResultSet() const{ return m_resultSet; }

    /**
     * <p>The results of the query execution.</p>
     */
    inline void SetResultSet(const ResultSet& value) { m_resultSet = value; }

    /**
     * <p>The results of the query execution.</p>
     */
    inline void SetResultSet(ResultSet&& value) { m_resultSet = std::move(value); }

    /**
     * <p>The results of the query execution.</p>
     */
    inline GetQueryResultsResult& WithResultSet(const ResultSet& value) { SetResultSet(value); return *this;}

    /**
     * <p>The results of the query execution.</p>
     */
    inline GetQueryResultsResult& WithResultSet(ResultSet&& value) { SetResultSet(std::move(value)); return *this;}


    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline GetQueryResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline GetQueryResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to be used by the next request if this request is truncated.</p>
     */
    inline GetQueryResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    long long m_updateCount;

    ResultSet m_resultSet;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
