/*
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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>ListTables</i> operation.</p>
   */
  class AWS_DYNAMODB_API ListTablesRequest : public DynamoDBRequest
  {
  public:
    ListTablesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline const Aws::String& GetExclusiveStartTableName() const{ return m_exclusiveStartTableName; }

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline void SetExclusiveStartTableName(const Aws::String& value) { m_exclusiveStartTableNameHasBeenSet = true; m_exclusiveStartTableName = value; }

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline void SetExclusiveStartTableName(Aws::String&& value) { m_exclusiveStartTableNameHasBeenSet = true; m_exclusiveStartTableName = value; }

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline void SetExclusiveStartTableName(const char* value) { m_exclusiveStartTableNameHasBeenSet = true; m_exclusiveStartTableName.assign(value); }

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline ListTablesRequest& WithExclusiveStartTableName(const Aws::String& value) { SetExclusiveStartTableName(value); return *this;}

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline ListTablesRequest& WithExclusiveStartTableName(Aws::String&& value) { SetExclusiveStartTableName(value); return *this;}

    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <i>LastEvaluatedTableName</i> in a previous operation, so that
     * you can obtain the next page of results.</p>
     */
    inline ListTablesRequest& WithExclusiveStartTableName(const char* value) { SetExclusiveStartTableName(value); return *this;}

    /**
     * <p>A maximum number of table names to return. If this parameter is not
     * specified, the limit is 100.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>A maximum number of table names to return. If this parameter is not
     * specified, the limit is 100.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>A maximum number of table names to return. If this parameter is not
     * specified, the limit is 100.</p>
     */
    inline ListTablesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_exclusiveStartTableName;
    bool m_exclusiveStartTableNameHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
