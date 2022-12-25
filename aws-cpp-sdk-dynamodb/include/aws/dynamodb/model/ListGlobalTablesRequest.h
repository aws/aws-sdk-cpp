/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListGlobalTablesRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ListGlobalTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGlobalTables"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The maximum number of table names to return, if the parameter is not
     * specified DynamoDB defaults to 100.</p> <p>If the number of global tables
     * DynamoDB finds reaches this limit, it stops the operation and returns the table
     * names collected up to that point, with a table name in the
     * <code>LastEvaluatedGlobalTableName</code> to apply in a subsequent operation to
     * the <code>ExclusiveStartGlobalTableName</code> parameter.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of table names to return, if the parameter is not
     * specified DynamoDB defaults to 100.</p> <p>If the number of global tables
     * DynamoDB finds reaches this limit, it stops the operation and returns the table
     * names collected up to that point, with a table name in the
     * <code>LastEvaluatedGlobalTableName</code> to apply in a subsequent operation to
     * the <code>ExclusiveStartGlobalTableName</code> parameter.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of table names to return, if the parameter is not
     * specified DynamoDB defaults to 100.</p> <p>If the number of global tables
     * DynamoDB finds reaches this limit, it stops the operation and returns the table
     * names collected up to that point, with a table name in the
     * <code>LastEvaluatedGlobalTableName</code> to apply in a subsequent operation to
     * the <code>ExclusiveStartGlobalTableName</code> parameter.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of table names to return, if the parameter is not
     * specified DynamoDB defaults to 100.</p> <p>If the number of global tables
     * DynamoDB finds reaches this limit, it stops the operation and returns the table
     * names collected up to that point, with a table name in the
     * <code>LastEvaluatedGlobalTableName</code> to apply in a subsequent operation to
     * the <code>ExclusiveStartGlobalTableName</code> parameter.</p>
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
    bool m_exclusiveStartGlobalTableNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
