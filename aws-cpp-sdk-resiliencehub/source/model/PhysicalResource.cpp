/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PhysicalResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

PhysicalResource::PhysicalResource() : 
    m_appComponentsHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

PhysicalResource::PhysicalResource(JsonView jsonValue) : 
    m_appComponentsHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PhysicalResource& PhysicalResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponents"))
  {
    Aws::Utils::Array<JsonView> appComponentsJsonList = jsonValue.GetArray("appComponents");
    for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
    {
      m_appComponents.push_back(appComponentsJsonList[appComponentsIndex].AsObject());
    }
    m_appComponentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetObject("logicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("physicalResourceId"))
  {
    m_physicalResourceId = jsonValue.GetObject("physicalResourceId");

    m_physicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PhysicalResource::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appComponentsJsonList(m_appComponents.size());
   for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
   {
     appComponentsJsonList[appComponentsIndex].AsObject(m_appComponents[appComponentsIndex].Jsonize());
   }
   payload.WithArray("appComponents", std::move(appComponentsJsonList));

  }

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithObject("logicalResourceId", m_logicalResourceId.Jsonize());

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithObject("physicalResourceId", m_physicalResourceId.Jsonize());

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
