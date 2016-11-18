﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace DynamoDB
{
namespace Model
{
  /**
   * <p>Represents the output of a <i>ListTables</i> operation.</p>
   */
  class AWS_DYNAMODB_API ListTablesResult
  {
  public:
    ListTablesResult();
    ListTablesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTablesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTableNames() const{ return m_tableNames; }

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline void SetTableNames(const Aws::Vector<Aws::String>& value) { m_tableNames = value; }

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline void SetTableNames(Aws::Vector<Aws::String>&& value) { m_tableNames = value; }

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline ListTablesResult& WithTableNames(const Aws::Vector<Aws::String>& value) { SetTableNames(value); return *this;}

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline ListTablesResult& WithTableNames(Aws::Vector<Aws::String>&& value) { SetTableNames(value); return *this;}

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline ListTablesResult& AddTableNames(const Aws::String& value) { m_tableNames.push_back(value); return *this; }

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline ListTablesResult& AddTableNames(Aws::String&& value) { m_tableNames.push_back(value); return *this; }

    /**
     * <p>The names of the tables associated with the current account at the current
     * endpoint. The maximum size of this array is 100.</p> <p>If
     * <i>LastEvaluatedTableName</i> also appears in the output, you can use this value
     * as the <i>ExclusiveStartTableName</i> parameter in a subsequent
     * <i>ListTables</i> request and obtain the next page of results.</p>
     */
    inline ListTablesResult& AddTableNames(const char* value) { m_tableNames.push_back(value); return *this; }

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline const Aws::String& GetLastEvaluatedTableName() const{ return m_lastEvaluatedTableName; }

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline void SetLastEvaluatedTableName(const Aws::String& value) { m_lastEvaluatedTableName = value; }

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline void SetLastEvaluatedTableName(Aws::String&& value) { m_lastEvaluatedTableName = value; }

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline void SetLastEvaluatedTableName(const char* value) { m_lastEvaluatedTableName.assign(value); }

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline ListTablesResult& WithLastEvaluatedTableName(const Aws::String& value) { SetLastEvaluatedTableName(value); return *this;}

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline ListTablesResult& WithLastEvaluatedTableName(Aws::String&& value) { SetLastEvaluatedTableName(value); return *this;}

    /**
     * <p>The name of the last table in the current page of results. Use this value as
     * the <i>ExclusiveStartTableName</i> in a new request to obtain the next page of
     * results, until all the table names are returned.</p> <p>If you do not receive a
     * <i>LastEvaluatedTableName</i> value in the response, this means that there are
     * no more table names to be retrieved.</p>
     */
    inline ListTablesResult& WithLastEvaluatedTableName(const char* value) { SetLastEvaluatedTableName(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_tableNames;
    Aws::String m_lastEvaluatedTableName;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
