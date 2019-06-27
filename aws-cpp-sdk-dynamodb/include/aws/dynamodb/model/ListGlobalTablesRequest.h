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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class AWS_DYNAMODB_API ListGlobalTablesRequest : public DynamoDBRequest
  {
  public:
    ListGlobalTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGlobalTables"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline const Aws::String& GetExclusiveStartGlobalTableName() const{ return m_exclusiveStartGlobalTableName; }

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline bool ExclusiveStartGlobalTableNameHasBeenSet() const { return m_exclusiveStartGlobalTableNameHasBeenSet; }

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline void SetExclusiveStartGlobalTableName(const Aws::String& value) { m_exclusiveStartGlobalTableNameHasBeenSet = true; m_exclusiveStartGlobalTableName = value; }

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline void SetExclusiveStartGlobalTableName(Aws::String&& value) { m_exclusiveStartGlobalTableNameHasBeenSet = true; m_exclusiveStartGlobalTableName = std::move(value); }

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline void SetExclusiveStartGlobalTableName(const char* value) { m_exclusiveStartGlobalTableNameHasBeenSet = true; m_exclusiveStartGlobalTableName.assign(value); }

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline ListGlobalTablesRequest& WithExclusiveStartGlobalTableName(const Aws::String& value) { SetExclusiveStartGlobalTableName(value); return *this;}

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline ListGlobalTablesRequest& WithExclusiveStartGlobalTableName(Aws::String&& value) { SetExclusiveStartGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline ListGlobalTablesRequest& WithExclusiveStartGlobalTableName(const char* value) { SetExclusiveStartGlobalTableName(value); return *this;}


    /**
     * <p>The maximum number of table names to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of table names to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of table names to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of table names to return.</p>
     */
    inline ListGlobalTablesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline ListGlobalTablesRequest& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline ListGlobalTablesRequest& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline ListGlobalTablesRequest& WithRegionName(const char* value) { SetRegionName(value); return *this;}

  private:

    Aws::String m_exclusiveStartGlobalTableName;
    bool m_exclusiveStartGlobalTableNameHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
