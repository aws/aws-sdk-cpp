/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EcsPropertiesDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EcsPropertiesDetail::EcsPropertiesDetail() : 
    m_taskPropertiesHasBeenSet(false)
{
}

EcsPropertiesDetail::EcsPropertiesDetail(JsonView jsonValue) : 
    m_taskPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

EcsPropertiesDetail& EcsPropertiesDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskProperties"))
  {
    Aws::Utils::Array<JsonView> taskPropertiesJsonList = jsonValue.GetArray("taskProperties");
    for(unsigned taskPropertiesIndex = 0; taskPropertiesIndex < taskPropertiesJsonList.GetLength(); ++taskPropertiesIndex)
    {
      m_taskProperties.push_back(taskPropertiesJsonList[taskPropertiesIndex].AsObject());
    }
    m_taskPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsPropertiesDetail::Jsonize() const
{
  JsonValue payload;

  if(m_taskPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskPropertiesJsonList(m_taskProperties.size());
   for(unsigned taskPropertiesIndex = 0; taskPropertiesIndex < taskPropertiesJsonList.GetLength(); ++taskPropertiesIndex)
   {
     taskPropertiesJsonList[taskPropertiesIndex].AsObject(m_taskProperties[taskPropertiesIndex].Jsonize());
   }
   payload.WithArray("taskProperties", std::move(taskPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
