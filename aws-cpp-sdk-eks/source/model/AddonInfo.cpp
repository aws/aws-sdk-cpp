﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonInfo.h>
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

AddonInfo::AddonInfo() : 
    m_addonNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_addonVersionsHasBeenSet(false)
{
}

AddonInfo::AddonInfo(JsonView jsonValue) : 
    m_addonNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_addonVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

AddonInfo& AddonInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addonName"))
  {
    m_addonName = jsonValue.GetString("addonName");

    m_addonNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addonVersions"))
  {
    Array<JsonView> addonVersionsJsonList = jsonValue.GetArray("addonVersions");
    for(unsigned addonVersionsIndex = 0; addonVersionsIndex < addonVersionsJsonList.GetLength(); ++addonVersionsIndex)
    {
      m_addonVersions.push_back(addonVersionsJsonList[addonVersionsIndex].AsObject());
    }
    m_addonVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AddonInfo::Jsonize() const
{
  JsonValue payload;

  if(m_addonNameHasBeenSet)
  {
   payload.WithString("addonName", m_addonName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_addonVersionsHasBeenSet)
  {
   Array<JsonValue> addonVersionsJsonList(m_addonVersions.size());
   for(unsigned addonVersionsIndex = 0; addonVersionsIndex < addonVersionsJsonList.GetLength(); ++addonVersionsIndex)
   {
     addonVersionsJsonList[addonVersionsIndex].AsObject(m_addonVersions[addonVersionsIndex].Jsonize());
   }
   payload.WithArray("addonVersions", std::move(addonVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
