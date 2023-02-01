/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpsertRedshiftTargetOptions.h>
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

UpsertRedshiftTargetOptions::UpsertRedshiftTargetOptions() : 
    m_tableLocationHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_upsertKeysHasBeenSet(false)
{
}

UpsertRedshiftTargetOptions::UpsertRedshiftTargetOptions(JsonView jsonValue) : 
    m_tableLocationHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_upsertKeysHasBeenSet(false)
{
  *this = jsonValue;
}

UpsertRedshiftTargetOptions& UpsertRedshiftTargetOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableLocation"))
  {
    m_tableLocation = jsonValue.GetString("TableLocation");

    m_tableLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpsertKeys"))
  {
    Aws::Utils::Array<JsonView> upsertKeysJsonList = jsonValue.GetArray("UpsertKeys");
    for(unsigned upsertKeysIndex = 0; upsertKeysIndex < upsertKeysJsonList.GetLength(); ++upsertKeysIndex)
    {
      m_upsertKeys.push_back(upsertKeysJsonList[upsertKeysIndex].AsString());
    }
    m_upsertKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue UpsertRedshiftTargetOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tableLocationHasBeenSet)
  {
   payload.WithString("TableLocation", m_tableLocation);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_upsertKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> upsertKeysJsonList(m_upsertKeys.size());
   for(unsigned upsertKeysIndex = 0; upsertKeysIndex < upsertKeysJsonList.GetLength(); ++upsertKeysIndex)
   {
     upsertKeysJsonList[upsertKeysIndex].AsString(m_upsertKeys[upsertKeysIndex]);
   }
   payload.WithArray("UpsertKeys", std::move(upsertKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
