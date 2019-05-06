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
  class AWS_DYNAMODB_API DescribeGlobalTableSettingsRequest : public DynamoDBRequest
  {
  public:
    DescribeGlobalTableSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalTableSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the global table to describe.</p>
     */
    inline const Aws::String& GetGlobalTableName() const{ return m_globalTableName; }

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline void SetGlobalTableName(const Aws::String& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = value; }

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline void SetGlobalTableName(Aws::String&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::move(value); }

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline void SetGlobalTableName(const char* value) { m_globalTableNameHasBeenSet = true; m_globalTableName.assign(value); }

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline DescribeGlobalTableSettingsRequest& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline DescribeGlobalTableSettingsRequest& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the global table to describe.</p>
     */
    inline DescribeGlobalTableSettingsRequest& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}

  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
