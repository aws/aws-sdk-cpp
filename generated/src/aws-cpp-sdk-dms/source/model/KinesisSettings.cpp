﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/KinesisSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

KinesisSettings::KinesisSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

KinesisSettings& KinesisSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");
    m_streamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageFormat"))
  {
    m_messageFormat = MessageFormatValueMapper::GetMessageFormatValueForName(jsonValue.GetString("MessageFormat"));
    m_messageFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");
    m_serviceAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeTransactionDetails"))
  {
    m_includeTransactionDetails = jsonValue.GetBool("IncludeTransactionDetails");
    m_includeTransactionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludePartitionValue"))
  {
    m_includePartitionValue = jsonValue.GetBool("IncludePartitionValue");
    m_includePartitionValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionIncludeSchemaTable"))
  {
    m_partitionIncludeSchemaTable = jsonValue.GetBool("PartitionIncludeSchemaTable");
    m_partitionIncludeSchemaTableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeTableAlterOperations"))
  {
    m_includeTableAlterOperations = jsonValue.GetBool("IncludeTableAlterOperations");
    m_includeTableAlterOperationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeControlDetails"))
  {
    m_includeControlDetails = jsonValue.GetBool("IncludeControlDetails");
    m_includeControlDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeNullAndEmpty"))
  {
    m_includeNullAndEmpty = jsonValue.GetBool("IncludeNullAndEmpty");
    m_includeNullAndEmptyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NoHexPrefix"))
  {
    m_noHexPrefix = jsonValue.GetBool("NoHexPrefix");
    m_noHexPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseLargeIntegerValue"))
  {
    m_useLargeIntegerValue = jsonValue.GetBool("UseLargeIntegerValue");
    m_useLargeIntegerValueHasBeenSet = true;
  }
  return *this;
}

JsonValue KinesisSettings::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_messageFormatHasBeenSet)
  {
   payload.WithString("MessageFormat", MessageFormatValueMapper::GetNameForMessageFormatValue(m_messageFormat));
  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_includeTransactionDetailsHasBeenSet)
  {
   payload.WithBool("IncludeTransactionDetails", m_includeTransactionDetails);

  }

  if(m_includePartitionValueHasBeenSet)
  {
   payload.WithBool("IncludePartitionValue", m_includePartitionValue);

  }

  if(m_partitionIncludeSchemaTableHasBeenSet)
  {
   payload.WithBool("PartitionIncludeSchemaTable", m_partitionIncludeSchemaTable);

  }

  if(m_includeTableAlterOperationsHasBeenSet)
  {
   payload.WithBool("IncludeTableAlterOperations", m_includeTableAlterOperations);

  }

  if(m_includeControlDetailsHasBeenSet)
  {
   payload.WithBool("IncludeControlDetails", m_includeControlDetails);

  }

  if(m_includeNullAndEmptyHasBeenSet)
  {
   payload.WithBool("IncludeNullAndEmpty", m_includeNullAndEmpty);

  }

  if(m_noHexPrefixHasBeenSet)
  {
   payload.WithBool("NoHexPrefix", m_noHexPrefix);

  }

  if(m_useLargeIntegerValueHasBeenSet)
  {
   payload.WithBool("UseLargeIntegerValue", m_useLargeIntegerValue);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
