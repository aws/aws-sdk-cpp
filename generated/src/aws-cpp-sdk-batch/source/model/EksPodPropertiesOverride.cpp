/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksPodPropertiesOverride.h>
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

EksPodPropertiesOverride::EksPodPropertiesOverride() : 
    m_containersHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

EksPodPropertiesOverride::EksPodPropertiesOverride(JsonView jsonValue) : 
    m_containersHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

EksPodPropertiesOverride& EksPodPropertiesOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initContainers"))
  {
    Aws::Utils::Array<JsonView> initContainersJsonList = jsonValue.GetArray("initContainers");
    for(unsigned initContainersIndex = 0; initContainersIndex < initContainersJsonList.GetLength(); ++initContainersIndex)
    {
      m_initContainers.push_back(initContainersJsonList[initContainersIndex].AsObject());
    }
    m_initContainersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue EksPodPropertiesOverride::Jsonize() const
{
  JsonValue payload;

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_initContainersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> initContainersJsonList(m_initContainers.size());
   for(unsigned initContainersIndex = 0; initContainersIndex < initContainersJsonList.GetLength(); ++initContainersIndex)
   {
     initContainersJsonList[initContainersIndex].AsObject(m_initContainers[initContainersIndex].Jsonize());
   }
   payload.WithArray("initContainers", std::move(initContainersJsonList));

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
