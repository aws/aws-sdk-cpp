/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LFResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

LFResourceDetails::LFResourceDetails() : 
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
}

LFResourceDetails::LFResourceDetails(JsonView jsonValue) : 
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
  *this = jsonValue;
}

LFResourceDetails& LFResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetObject("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  return *this;
}

JsonValue LFResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithObject("Database", m_database.Jsonize());

  }

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
