/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateIcebergTableInput.h>
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

UpdateIcebergTableInput::UpdateIcebergTableInput(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateIcebergTableInput& UpdateIcebergTableInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Updates"))
  {
    Aws::Utils::Array<JsonView> updatesJsonList = jsonValue.GetArray("Updates");
    for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
    {
      m_updates.push_back(updatesJsonList[updatesIndex].AsObject());
    }
    m_updatesHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateIcebergTableInput::Jsonize() const
{
  JsonValue payload;

  if(m_updatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
