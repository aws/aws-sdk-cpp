/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Resource::Resource() : 
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_partition(Partition::NOT_SET),
    m_partitionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_partition(Partition::NOT_SET),
    m_partitionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Partition"))
  {
    m_partition = PartitionMapper::GetPartitionForName(jsonValue.GetString("Partition"));

    m_partitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRole"))
  {
    m_resourceRole = jsonValue.GetString("ResourceRole");

    m_resourceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetObject("Details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_partitionHasBeenSet)
  {
   payload.WithString("Partition", PartitionMapper::GetNameForPartition(m_partition));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_resourceRoleHasBeenSet)
  {
   payload.WithString("ResourceRole", m_resourceRole);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("Details", m_details.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
