/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AccessEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AccessEntry::AccessEntry() : 
    m_clusterNameHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_kubernetesGroupsHasBeenSet(false),
    m_accessEntryArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AccessEntry::AccessEntry(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_kubernetesGroupsHasBeenSet(false),
    m_accessEntryArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessEntry& AccessEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

    m_principalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesGroups"))
  {
    Aws::Utils::Array<JsonView> kubernetesGroupsJsonList = jsonValue.GetArray("kubernetesGroups");
    for(unsigned kubernetesGroupsIndex = 0; kubernetesGroupsIndex < kubernetesGroupsJsonList.GetLength(); ++kubernetesGroupsIndex)
    {
      m_kubernetesGroups.push_back(kubernetesGroupsJsonList[kubernetesGroupsIndex].AsString());
    }
    m_kubernetesGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessEntryArn"))
  {
    m_accessEntryArn = jsonValue.GetString("accessEntryArn");

    m_accessEntryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessEntry::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  if(m_kubernetesGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kubernetesGroupsJsonList(m_kubernetesGroups.size());
   for(unsigned kubernetesGroupsIndex = 0; kubernetesGroupsIndex < kubernetesGroupsJsonList.GetLength(); ++kubernetesGroupsIndex)
   {
     kubernetesGroupsJsonList[kubernetesGroupsIndex].AsString(m_kubernetesGroups[kubernetesGroupsIndex]);
   }
   payload.WithArray("kubernetesGroups", std::move(kubernetesGroupsJsonList));

  }

  if(m_accessEntryArnHasBeenSet)
  {
   payload.WithString("accessEntryArn", m_accessEntryArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
