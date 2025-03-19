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
    AWS_DYNAMODB_API ListGlobalTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGlobalTables"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The first global table name that this operation will evaluate.</p>
     */
    inline const Aws::String& GetExclusiveStartGlobalTableName() const { return m_exclusiveStartGlobalTableName; }
    inline bool ExclusiveStartGlobalTableNameHasBeenSet() const { return m_exclusiveStartGlobalTableNameHasBeenSet; }
    template<typename ExclusiveStartGlobalTableNameT = Aws::String>
    void SetExclusiveStartGlobalTableName(ExclusiveStartGlobalTableNameT&& value) { m_exclusiveStartGlobalTableNameHasBeenSet = true; m_exclusiveStartGlobalTableName = std::forward<ExclusiveStartGlobalTableNameT>(value); }
    template<typename ExclusiveStartGlobalTableNameT = Aws::String>
    ListGlobalTablesRequest& WithExclusiveStartGlobalTableName(ExclusiveStartGlobalTableNameT&& value) { SetExclusiveStartGlobalTableName(std::forward<ExclusiveStartGlobalTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of table names to return, if the parameter is not
     * specified DynamoDB defaults to 100.</p> <p>If the number of global tables
     * DynamoDB finds reaches this limit, it stops the operation and returns the table
     * names collected up to that point, with a table name in the
     * <code>LastEvaluatedGlobalTableName</code> to apply in a subsequent operation to
     * the <code>ExclusiveStartGlobalTableName</code> parameter.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListGlobalTablesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the global tables in a specific Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    ListGlobalTablesRequest& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exclusiveStartGlobalTableName;
    bool m_exclusiveStartGlobalTableNameHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
