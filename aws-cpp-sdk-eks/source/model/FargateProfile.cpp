/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/FargateProfile.h>
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

FargateProfile::FargateProfile() : 
    m_fargateProfileNameHasBeenSet(false),
    m_fargateProfileArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_podExecutionRoleArnHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_selectorsHasBeenSet(false),
    m_status(FargateProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

FargateProfile::FargateProfile(JsonView jsonValue) : 
    m_fargateProfileNameHasBeenSet(false),
    m_fargateProfileArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_podExecutionRoleArnHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_selectorsHasBeenSet(false),
    m_status(FargateProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

FargateProfile& FargateProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fargateProfileName"))
  {
    m_fargateProfileName = jsonValue.GetString("fargateProfileName");

    m_fargateProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fargateProfileArn"))
  {
    m_fargateProfileArn = jsonValue.GetString("fargateProfileArn");

    m_fargateProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("podExecutionRoleArn"))
  {
    m_podExecutionRoleArn = jsonValue.GetString("podExecutionRoleArn");

    m_podExecutionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectors"))
  {
    Aws::Utils::Array<JsonView> selectorsJsonList = jsonValue.GetArray("selectors");
    for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
    {
      m_selectors.push_back(selectorsJsonList[selectorsIndex].AsObject());
    }
    m_selectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FargateProfileStatusMapper::GetFargateProfileStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
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

  return *this;
}

JsonValue FargateProfile::Jsonize() const
{
  JsonValue payload;

  if(m_fargateProfileNameHasBeenSet)
  {
   payload.WithString("fargateProfileName", m_fargateProfileName);

  }

  if(m_fargateProfileArnHasBeenSet)
  {
   payload.WithString("fargateProfileArn", m_fargateProfileArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_podExecutionRoleArnHasBeenSet)
  {
   payload.WithString("podExecutionRoleArn", m_podExecutionRoleArn);

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_selectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectorsJsonList(m_selectors.size());
   for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
   {
     selectorsJsonList[selectorsIndex].AsObject(m_selectors[selectorsIndex].Jsonize());
   }
   payload.WithArray("selectors", std::move(selectorsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FargateProfileStatusMapper::GetNameForFargateProfileStatus(m_status));
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

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
