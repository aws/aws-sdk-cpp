/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TableClassSummary.h>
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

TableClassSummary::TableClassSummary() : 
    m_tableClass(TableClass::NOT_SET),
    m_tableClassHasBeenSet(false),
    m_lastUpdateDateTimeHasBeenSet(false)
{
}

TableClassSummary::TableClassSummary(JsonView jsonValue) : 
    m_tableClass(TableClass::NOT_SET),
    m_tableClassHasBeenSet(false),
    m_lastUpdateDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TableClassSummary& TableClassSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableClass"))
  {
    m_tableClass = TableClassMapper::GetTableClassForName(jsonValue.GetString("TableClass"));

    m_tableClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateDateTime"))
  {
    m_lastUpdateDateTime = jsonValue.GetDouble("LastUpdateDateTime");

    m_lastUpdateDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TableClassSummary::Jsonize() const
{
  JsonValue payload;

  if(m_tableClassHasBeenSet)
  {
   payload.WithString("TableClass", TableClassMapper::GetNameForTableClass(m_tableClass));
  }

  if(m_lastUpdateDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateDateTime", m_lastUpdateDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
