/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDataviewConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDataviewConfiguration::KxDataviewConfiguration() : 
    m_dataviewNameHasBeenSet(false),
    m_dataviewVersionIdHasBeenSet(false),
    m_changesetIdHasBeenSet(false),
    m_segmentConfigurationsHasBeenSet(false)
{
}

KxDataviewConfiguration::KxDataviewConfiguration(JsonView jsonValue) : 
    m_dataviewNameHasBeenSet(false),
    m_dataviewVersionIdHasBeenSet(false),
    m_changesetIdHasBeenSet(false),
    m_segmentConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

KxDataviewConfiguration& KxDataviewConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataviewName"))
  {
    m_dataviewName = jsonValue.GetString("dataviewName");

    m_dataviewNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataviewVersionId"))
  {
    m_dataviewVersionId = jsonValue.GetString("dataviewVersionId");

    m_dataviewVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

    m_changesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentConfigurations"))
  {
    Aws::Utils::Array<JsonView> segmentConfigurationsJsonList = jsonValue.GetArray("segmentConfigurations");
    for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
    {
      m_segmentConfigurations.push_back(segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject());
    }
    m_segmentConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDataviewConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataviewNameHasBeenSet)
  {
   payload.WithString("dataviewName", m_dataviewName);

  }

  if(m_dataviewVersionIdHasBeenSet)
  {
   payload.WithString("dataviewVersionId", m_dataviewVersionId);

  }

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_segmentConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentConfigurationsJsonList(m_segmentConfigurations.size());
   for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
   {
     segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject(m_segmentConfigurations[segmentConfigurationsIndex].Jsonize());
   }
   payload.WithArray("segmentConfigurations", std::move(segmentConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
