/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CatalogTarget::CatalogTarget() : 
    m_databaseNameHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_eventQueueArnHasBeenSet(false),
    m_dlqEventQueueArnHasBeenSet(false)
{
}

CatalogTarget::CatalogTarget(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_eventQueueArnHasBeenSet(false),
    m_dlqEventQueueArnHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogTarget& CatalogTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tables"))
  {
    Aws::Utils::Array<JsonView> tablesJsonList = jsonValue.GetArray("Tables");
    for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
    {
      m_tables.push_back(tablesJsonList[tablesIndex].AsString());
    }
    m_tablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventQueueArn"))
  {
    m_eventQueueArn = jsonValue.GetString("EventQueueArn");

    m_eventQueueArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DlqEventQueueArn"))
  {
    m_dlqEventQueueArn = jsonValue.GetString("DlqEventQueueArn");

    m_dlqEventQueueArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogTarget::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tablesJsonList(m_tables.size());
   for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
   {
     tablesJsonList[tablesIndex].AsString(m_tables[tablesIndex]);
   }
   payload.WithArray("Tables", std::move(tablesJsonList));

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_eventQueueArnHasBeenSet)
  {
   payload.WithString("EventQueueArn", m_eventQueueArn);

  }

  if(m_dlqEventQueueArnHasBeenSet)
  {
   payload.WithString("DlqEventQueueArn", m_dlqEventQueueArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
