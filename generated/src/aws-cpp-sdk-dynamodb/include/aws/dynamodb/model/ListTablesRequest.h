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
   * <p>Represents the input of a <code>ListTables</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ListTablesInput">AWS
   * API Reference</a></p>
   */
  class ListTablesRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ListTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTables"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The first table name that this operation will evaluate. Use the value that
     * was returned for <code>LastEvaluatedTableName</code> in a previous operation, so
     * that you can obtain the next page of results.</p>
     */
    inline const Aws::String& GetExclusiveStartTableName() const { return m_exclusiveStartTableName; }
    inline bool ExclusiveStartTableNameHasBeenSet() const { return m_exclusiveStartTableNameHasBeenSet; }
    template<typename ExclusiveStartTableNameT = Aws::String>
    void SetExclusiveStartTableName(ExclusiveStartTableNameT&& value) { m_exclusiveStartTableNameHasBeenSet = true; m_exclusiveStartTableName = std::forward<ExclusiveStartTableNameT>(value); }
    template<typename ExclusiveStartTableNameT = Aws::String>
    ListTablesRequest& WithExclusiveStartTableName(ExclusiveStartTableNameT&& value) { SetExclusiveStartTableName(std::forward<ExclusiveStartTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A maximum number of table names to return. If this parameter is not
     * specified, the limit is 100.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListTablesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_exclusiveStartTableName;
    bool m_exclusiveStartTableNameHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
