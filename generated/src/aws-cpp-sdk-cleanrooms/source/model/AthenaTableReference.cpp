/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AthenaTableReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AthenaTableReference::AthenaTableReference(JsonView jsonValue)
{
  *this = jsonValue;
}

AthenaTableReference& AthenaTableReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workGroup"))
  {
    m_workGroup = jsonValue.GetString("workGroup");
    m_workGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetString("outputLocation");
    m_outputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AthenaTableReference::Jsonize() const
{
  JsonValue payload;

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("workGroup", m_workGroup);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("outputLocation", m_outputLocation);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
