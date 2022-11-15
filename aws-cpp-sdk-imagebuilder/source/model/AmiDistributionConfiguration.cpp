/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/AmiDistributionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

AmiDistributionConfiguration::AmiDistributionConfiguration() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetAccountIdsHasBeenSet(false),
    m_amiTagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_launchPermissionHasBeenSet(false)
{
}

AmiDistributionConfiguration::AmiDistributionConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetAccountIdsHasBeenSet(false),
    m_amiTagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_launchPermissionHasBeenSet(false)
{
  *this = jsonValue;
}

AmiDistributionConfiguration& AmiDistributionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetAccountIds"))
  {
    Aws::Utils::Array<JsonView> targetAccountIdsJsonList = jsonValue.GetArray("targetAccountIds");
    for(unsigned targetAccountIdsIndex = 0; targetAccountIdsIndex < targetAccountIdsJsonList.GetLength(); ++targetAccountIdsIndex)
    {
      m_targetAccountIds.push_back(targetAccountIdsJsonList[targetAccountIdsIndex].AsString());
    }
    m_targetAccountIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiTags"))
  {
    Aws::Map<Aws::String, JsonView> amiTagsJsonMap = jsonValue.GetObject("amiTags").GetAllObjects();
    for(auto& amiTagsItem : amiTagsJsonMap)
    {
      m_amiTags[amiTagsItem.first] = amiTagsItem.second.AsString();
    }
    m_amiTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchPermission"))
  {
    m_launchPermission = jsonValue.GetObject("launchPermission");

    m_launchPermissionHasBeenSet = true;
  }

  return *this;
}

JsonValue AmiDistributionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetAccountIdsJsonList(m_targetAccountIds.size());
   for(unsigned targetAccountIdsIndex = 0; targetAccountIdsIndex < targetAccountIdsJsonList.GetLength(); ++targetAccountIdsIndex)
   {
     targetAccountIdsJsonList[targetAccountIdsIndex].AsString(m_targetAccountIds[targetAccountIdsIndex]);
   }
   payload.WithArray("targetAccountIds", std::move(targetAccountIdsJsonList));

  }

  if(m_amiTagsHasBeenSet)
  {
   JsonValue amiTagsJsonMap;
   for(auto& amiTagsItem : m_amiTags)
   {
     amiTagsJsonMap.WithString(amiTagsItem.first, amiTagsItem.second);
   }
   payload.WithObject("amiTags", std::move(amiTagsJsonMap));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_launchPermissionHasBeenSet)
  {
   payload.WithObject("launchPermission", m_launchPermission.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
