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
   */
  class AWS_DYNAMODB_API DescribeTimeToLiveRequest : public DynamoDBRequest
  {
  public:
    DescribeTimeToLiveRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table to be described.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to be described.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to be described.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to be described.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table to be described.</p>
     */
    inline DescribeTimeToLiveRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to be described.</p>
     */
    inline DescribeTimeToLiveRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to be described.</p>
     */
    inline DescribeTimeToLiveRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
