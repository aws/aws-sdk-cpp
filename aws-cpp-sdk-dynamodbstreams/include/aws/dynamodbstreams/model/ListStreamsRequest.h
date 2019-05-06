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
   * <p>Represents the input of a <i>ListStreams</i> operation.</p>
   */
  class AWS_DYNAMODBSTREAMS_API ListStreamsRequest : public DynamoDBStreamsRequest
  {
  public:
    ListStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline ListStreamsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline ListStreamsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>If this parameter is provided, then only the streams associated with this
     * table name are returned.</p>
     */
    inline ListStreamsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The maximum number of streams to return. The upper limit is 100.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of streams to return. The upper limit is 100.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of streams to return. The upper limit is 100.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of streams to return. The upper limit is 100.</p>
     */
    inline ListStreamsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline const Aws::String& GetExclusiveStartStreamArn() const{ return m_exclusiveStartStreamArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline bool ExclusiveStartStreamArnHasBeenSet() const { return m_exclusiveStartStreamArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline void SetExclusiveStartStreamArn(const Aws::String& value) { m_exclusiveStartStreamArnHasBeenSet = true; m_exclusiveStartStreamArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline void SetExclusiveStartStreamArn(Aws::String&& value) { m_exclusiveStartStreamArnHasBeenSet = true; m_exclusiveStartStreamArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline void SetExclusiveStartStreamArn(const char* value) { m_exclusiveStartStreamArnHasBeenSet = true; m_exclusiveStartStreamArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline ListStreamsRequest& WithExclusiveStartStreamArn(const Aws::String& value) { SetExclusiveStartStreamArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline ListStreamsRequest& WithExclusiveStartStreamArn(Aws::String&& value) { SetExclusiveStartStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the first item that this operation will
     * evaluate. Use the value that was returned for
     * <code>LastEvaluatedStreamArn</code> in the previous operation. </p>
     */
    inline ListStreamsRequest& WithExclusiveStartStreamArn(const char* value) { SetExclusiveStartStreamArn(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_exclusiveStartStreamArn;
    bool m_exclusiveStartStreamArnHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
