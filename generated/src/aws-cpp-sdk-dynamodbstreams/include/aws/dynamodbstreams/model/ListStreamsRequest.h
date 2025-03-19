/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/dynamodbstreams/DynamoDBStreamsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListStreams</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/ListStreamsInput">AWS
   * API Reference</a></p>
   */
  class ListStreamsRequest : public DynamoDBStreamsRequest
  {
  public:
    AWS_DYNAMODBSTREAMS_API ListStreamsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    AWS_DYNAMODBSTREAMS_API Aws::String SerializePayload() const override;

    AWS_DYNAMODBSTREAMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ListStreamsRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of streams to return. The upper limit is 100.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListStreamsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline const Aws::String& GetExclusiveStartStreamArn() const { return m_exclusiveStartStreamArn; }
    inline bool ExclusiveStartStreamArnHasBeenSet() const { return m_exclusiveStartStreamArnHasBeenSet; }
    template<typename ExclusiveStartStreamArnT = Aws::String>
    void SetExclusiveStartStreamArn(ExclusiveStartStreamArnT&& value) { m_exclusiveStartStreamArnHasBeenSet = true; m_exclusiveStartStreamArn = std::forward<ExclusiveStartStreamArnT>(value); }
    template<typename ExclusiveStartStreamArnT = Aws::String>
    ListStreamsRequest& WithExclusiveStartStreamArn(ExclusiveStartStreamArnT&& value) { SetExclusiveStartStreamArn(std::forward<ExclusiveStartStreamArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_exclusiveStartStreamArn;
    bool m_exclusiveStartStreamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
