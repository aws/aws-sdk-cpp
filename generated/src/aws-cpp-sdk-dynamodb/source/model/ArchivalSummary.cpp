/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ArchivalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ArchivalSummary::ArchivalSummary() : 
    m_archivalDateTimeHasBeenSet(false),
    m_archivalReasonHasBeenSet(false),
    m_archivalBackupArnHasBeenSet(false)
{
}

ArchivalSummary::ArchivalSummary(JsonView jsonValue) : 
    m_archivalDateTimeHasBeenSet(false),
    m_archivalReasonHasBeenSet(false),
    m_archivalBackupArnHasBeenSet(false)
{
  *this = jsonValue;
}

ArchivalSummary& ArchivalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArchivalDateTime"))
  {
    m_archivalDateTime = jsonValue.GetDouble("ArchivalDateTime");

    m_archivalDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivalReason"))
  {
    m_archivalReason = jsonValue.GetString("ArchivalReason");

    m_archivalReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivalBackupArn"))
  {
    m_archivalBackupArn = jsonValue.GetString("ArchivalBackupArn");

    m_archivalBackupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchivalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_archivalDateTimeHasBeenSet)
  {
   payload.WithDouble("ArchivalDateTime", m_archivalDateTime.SecondsWithMSPrecision());
  }

  if(m_archivalReasonHasBeenSet)
  {
   payload.WithString("ArchivalReason", m_archivalReason);

  }

  if(m_archivalBackupArnHasBeenSet)
  {
   payload.WithString("ArchivalBackupArn", m_archivalBackupArn);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
