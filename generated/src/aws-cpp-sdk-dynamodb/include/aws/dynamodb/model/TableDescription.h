/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/KeySchema.h>
#include <aws/dynamodb/model/TableStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/ProvisionedThroughputDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  class TableDescription
  {
  public:
    AWS_DYNAMODB_API TableDescription();
    AWS_DYNAMODB_API TableDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline TableDescription& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline TableDescription& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline TableDescription& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const KeySchema& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const KeySchema& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(KeySchema&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline TableDescription& WithKeySchema(const KeySchema& value) { SetKeySchema(value); return *this;}
    inline TableDescription& WithKeySchema(KeySchema&& value) { SetKeySchema(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TableStatus& GetTableStatus() const{ return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    inline void SetTableStatus(const TableStatus& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }
    inline void SetTableStatus(TableStatus&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }
    inline TableDescription& WithTableStatus(const TableStatus& value) { SetTableStatus(value); return *this;}
    inline TableDescription& WithTableStatus(TableStatus&& value) { SetTableStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline TableDescription& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline TableDescription& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProvisionedThroughputDescription& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const ProvisionedThroughputDescription& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(ProvisionedThroughputDescription&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline TableDescription& WithProvisionedThroughput(const ProvisionedThroughputDescription& value) { SetProvisionedThroughput(value); return *this;}
    inline TableDescription& WithProvisionedThroughput(ProvisionedThroughputDescription&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline long long GetTableSizeBytes() const{ return m_tableSizeBytes; }
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }
    inline TableDescription& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetItemCount() const{ return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline TableDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    KeySchema m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    TableStatus m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    ProvisionedThroughputDescription m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    long long m_tableSizeBytes;
    bool m_tableSizeBytesHasBeenSet = false;

    long long m_itemCount;
    bool m_itemCountHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
