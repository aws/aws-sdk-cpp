/**
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
    m_addonVersionsHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_marketplaceInformationHasBeenSet(false)
{
}

AddonInfo::AddonInfo(JsonView jsonValue) : 
    m_addonNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_addonVersionsHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_marketplaceInformationHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> addonVersionsJsonList = jsonValue.GetArray("addonVersions");
    for(unsigned addonVersionsIndex = 0; addonVersionsIndex < addonVersionsJsonList.GetLength(); ++addonVersionsIndex)
    {
      m_addonVersions.push_back(addonVersionsJsonList[addonVersionsIndex].AsObject());
    }
    m_addonVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publisher"))
  {
    m_publisher = jsonValue.GetString("publisher");

    m_publisherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("marketplaceInformation"))
  {
    m_marketplaceInformation = jsonValue.GetObject("marketplaceInformation");

    m_marketplaceInformationHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> addonVersionsJsonList(m_addonVersions.size());
   for(unsigned addonVersionsIndex = 0; addonVersionsIndex < addonVersionsJsonList.GetLength(); ++addonVersionsIndex)
   {
     addonVersionsJsonList[addonVersionsIndex].AsObject(m_addonVersions[addonVersionsIndex].Jsonize());
   }
   payload.WithArray("addonVersions", std::move(addonVersionsJsonList));

  }

  if(m_publisherHasBeenSet)
  {
   payload.WithString("publisher", m_publisher);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_marketplaceInformationHasBeenSet)
  {
   payload.WithObject("marketplaceInformation", m_marketplaceInformation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
