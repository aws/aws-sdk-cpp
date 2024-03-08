/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/SchemaChangeRequestDetails.h>
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

SchemaChangeRequestDetails::SchemaChangeRequestDetails() : 
    m_changesHasBeenSet(false),
    m_schemaChangeAtHasBeenSet(false)
{
}

SchemaChangeRequestDetails::SchemaChangeRequestDetails(JsonView jsonValue) : 
    m_changesHasBeenSet(false),
    m_schemaChangeAtHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaChangeRequestDetails& SchemaChangeRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Changes"))
  {
    Aws::Utils::Array<JsonView> changesJsonList = jsonValue.GetArray("Changes");
    for(unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex)
    {
      m_changes.push_back(changesJsonList[changesIndex].AsObject());
    }
    m_changesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaChangeAt"))
  {
    m_schemaChangeAt = jsonValue.GetString("SchemaChangeAt");

    m_schemaChangeAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaChangeRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_changesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changesJsonList(m_changes.size());
   for(unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex)
   {
     changesJsonList[changesIndex].AsObject(m_changes[changesIndex].Jsonize());
   }
   payload.WithArray("Changes", std::move(changesJsonList));

  }

  if(m_schemaChangeAtHasBeenSet)
  {
   payload.WithString("SchemaChangeAt", m_schemaChangeAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
