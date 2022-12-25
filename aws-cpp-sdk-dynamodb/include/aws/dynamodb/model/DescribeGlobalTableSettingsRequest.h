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
  class DescribeGlobalTableSettingsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DescribeGlobalTableSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalTableSettings"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_globalTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
