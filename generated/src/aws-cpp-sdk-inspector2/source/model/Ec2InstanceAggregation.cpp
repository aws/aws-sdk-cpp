/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2InstanceAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Ec2InstanceAggregation::Ec2InstanceAggregation() : 
    m_amisHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_operatingSystemsHasBeenSet(false),
    m_sortBy(Ec2InstanceSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Ec2InstanceAggregation::Ec2InstanceAggregation(JsonView jsonValue) : 
    m_amisHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_operatingSystemsHasBeenSet(false),
    m_sortBy(Ec2InstanceSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2InstanceAggregation& Ec2InstanceAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amis"))
  {
    Aws::Utils::Array<JsonView> amisJsonList = jsonValue.GetArray("amis");
    for(unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex)
    {
      m_amis.push_back(amisJsonList[amisIndex].AsObject());
    }
    m_amisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("instanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsObject());
    }
    m_instanceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTags"))
  {
    Aws::Utils::Array<JsonView> instanceTagsJsonList = jsonValue.GetArray("instanceTags");
    for(unsigned instanceTagsIndex = 0; instanceTagsIndex < instanceTagsJsonList.GetLength(); ++instanceTagsIndex)
    {
      m_instanceTags.push_back(instanceTagsJsonList[instanceTagsIndex].AsObject());
    }
    m_instanceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystems"))
  {
    Aws::Utils::Array<JsonView> operatingSystemsJsonList = jsonValue.GetArray("operatingSystems");
    for(unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex)
    {
      m_operatingSystems.push_back(operatingSystemsJsonList[operatingSystemsIndex].AsObject());
    }
    m_operatingSystemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortBy"))
  {
    m_sortBy = Ec2InstanceSortByMapper::GetEc2InstanceSortByForName(jsonValue.GetString("sortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sortOrder"))
  {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));

    m_sortOrderHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2InstanceAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_amisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> amisJsonList(m_amis.size());
   for(unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex)
   {
     amisJsonList[amisIndex].AsObject(m_amis[amisIndex].Jsonize());
   }
   payload.WithArray("amis", std::move(amisJsonList));

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsObject(m_instanceIds[instanceIdsIndex].Jsonize());
   }
   payload.WithArray("instanceIds", std::move(instanceIdsJsonList));

  }

  if(m_instanceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTagsJsonList(m_instanceTags.size());
   for(unsigned instanceTagsIndex = 0; instanceTagsIndex < instanceTagsJsonList.GetLength(); ++instanceTagsIndex)
   {
     instanceTagsJsonList[instanceTagsIndex].AsObject(m_instanceTags[instanceTagsIndex].Jsonize());
   }
   payload.WithArray("instanceTags", std::move(instanceTagsJsonList));

  }

  if(m_operatingSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operatingSystemsJsonList(m_operatingSystems.size());
   for(unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex)
   {
     operatingSystemsJsonList[operatingSystemsIndex].AsObject(m_operatingSystems[operatingSystemsIndex].Jsonize());
   }
   payload.WithArray("operatingSystems", std::move(operatingSystemsJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", Ec2InstanceSortByMapper::GetNameForEc2InstanceSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
