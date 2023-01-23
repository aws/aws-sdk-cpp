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
  class DescribeContinuousBackupsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DescribeContinuousBackupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeContinuousBackups"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline DescribeContinuousBackupsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline DescribeContinuousBackupsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the table for which the customer wants to check the continuous
     * backups and point in time recovery settings.</p>
     */
    inline DescribeContinuousBackupsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
