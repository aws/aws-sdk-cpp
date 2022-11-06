/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/UpsertRowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

UpsertRowsResult::UpsertRowsResult() : 
    m_rowIdsHasBeenSet(false),
    m_upsertAction(UpsertAction::NOT_SET),
    m_upsertActionHasBeenSet(false)
{
}

UpsertRowsResult::UpsertRowsResult(JsonView jsonValue) : 
    m_rowIdsHasBeenSet(false),
    m_upsertAction(UpsertAction::NOT_SET),
    m_upsertActionHasBeenSet(false)
{
  *this = jsonValue;
}

UpsertRowsResult& UpsertRowsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rowIds"))
  {
    Aws::Utils::Array<JsonView> rowIdsJsonList = jsonValue.GetArray("rowIds");
    for(unsigned rowIdsIndex = 0; rowIdsIndex < rowIdsJsonList.GetLength(); ++rowIdsIndex)
    {
      m_rowIds.push_back(rowIdsJsonList[rowIdsIndex].AsString());
    }
    m_rowIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upsertAction"))
  {
    m_upsertAction = UpsertActionMapper::GetUpsertActionForName(jsonValue.GetString("upsertAction"));

    m_upsertActionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpsertRowsResult::Jsonize() const
{
  JsonValue payload;

  if(m_rowIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowIdsJsonList(m_rowIds.size());
   for(unsigned rowIdsIndex = 0; rowIdsIndex < rowIdsJsonList.GetLength(); ++rowIdsIndex)
   {
     rowIdsJsonList[rowIdsIndex].AsString(m_rowIds[rowIdsIndex]);
   }
   payload.WithArray("rowIds", std::move(rowIdsJsonList));

  }

  if(m_upsertActionHasBeenSet)
  {
   payload.WithString("upsertAction", UpsertActionMapper::GetNameForUpsertAction(m_upsertAction));
  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
