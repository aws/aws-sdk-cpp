/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskAbortConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OtaTaskAbortConfig::OtaTaskAbortConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskAbortConfig& OtaTaskAbortConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AbortConfigCriteriaList"))
  {
    Aws::Utils::Array<JsonView> abortConfigCriteriaListJsonList = jsonValue.GetArray("AbortConfigCriteriaList");
    for(unsigned abortConfigCriteriaListIndex = 0; abortConfigCriteriaListIndex < abortConfigCriteriaListJsonList.GetLength(); ++abortConfigCriteriaListIndex)
    {
      m_abortConfigCriteriaList.push_back(abortConfigCriteriaListJsonList[abortConfigCriteriaListIndex].AsObject());
    }
    m_abortConfigCriteriaListHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskAbortConfig::Jsonize() const
{
  JsonValue payload;

  if(m_abortConfigCriteriaListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> abortConfigCriteriaListJsonList(m_abortConfigCriteriaList.size());
   for(unsigned abortConfigCriteriaListIndex = 0; abortConfigCriteriaListIndex < abortConfigCriteriaListJsonList.GetLength(); ++abortConfigCriteriaListIndex)
   {
     abortConfigCriteriaListJsonList[abortConfigCriteriaListIndex].AsObject(m_abortConfigCriteriaList[abortConfigCriteriaListIndex].Jsonize());
   }
   payload.WithArray("AbortConfigCriteriaList", std::move(abortConfigCriteriaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
