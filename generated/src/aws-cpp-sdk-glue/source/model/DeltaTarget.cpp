/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeltaTarget.h>
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

DeltaTarget::DeltaTarget() : 
    m_deltaTablesHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_writeManifest(false),
    m_writeManifestHasBeenSet(false),
    m_createNativeDeltaTable(false),
    m_createNativeDeltaTableHasBeenSet(false)
{
}

DeltaTarget::DeltaTarget(JsonView jsonValue) : 
    m_deltaTablesHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_writeManifest(false),
    m_writeManifestHasBeenSet(false),
    m_createNativeDeltaTable(false),
    m_createNativeDeltaTableHasBeenSet(false)
{
  *this = jsonValue;
}

DeltaTarget& DeltaTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeltaTables"))
  {
    Aws::Utils::Array<JsonView> deltaTablesJsonList = jsonValue.GetArray("DeltaTables");
    for(unsigned deltaTablesIndex = 0; deltaTablesIndex < deltaTablesJsonList.GetLength(); ++deltaTablesIndex)
    {
      m_deltaTables.push_back(deltaTablesJsonList[deltaTablesIndex].AsString());
    }
    m_deltaTablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteManifest"))
  {
    m_writeManifest = jsonValue.GetBool("WriteManifest");

    m_writeManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateNativeDeltaTable"))
  {
    m_createNativeDeltaTable = jsonValue.GetBool("CreateNativeDeltaTable");

    m_createNativeDeltaTableHasBeenSet = true;
  }

  return *this;
}

JsonValue DeltaTarget::Jsonize() const
{
  JsonValue payload;

  if(m_deltaTablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deltaTablesJsonList(m_deltaTables.size());
   for(unsigned deltaTablesIndex = 0; deltaTablesIndex < deltaTablesJsonList.GetLength(); ++deltaTablesIndex)
   {
     deltaTablesJsonList[deltaTablesIndex].AsString(m_deltaTables[deltaTablesIndex]);
   }
   payload.WithArray("DeltaTables", std::move(deltaTablesJsonList));

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_writeManifestHasBeenSet)
  {
   payload.WithBool("WriteManifest", m_writeManifest);

  }

  if(m_createNativeDeltaTableHasBeenSet)
  {
   payload.WithBool("CreateNativeDeltaTable", m_createNativeDeltaTable);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
