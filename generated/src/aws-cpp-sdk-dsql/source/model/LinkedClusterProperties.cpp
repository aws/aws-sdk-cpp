/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dsql/model/LinkedClusterProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DSQL
{
namespace Model
{

LinkedClusterProperties::LinkedClusterProperties() : 
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LinkedClusterProperties::LinkedClusterProperties(JsonView jsonValue)
  : LinkedClusterProperties()
{
  *this = jsonValue;
}

LinkedClusterProperties& LinkedClusterProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");

    m_deletionProtectionEnabledHasBeenSet = true;
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

JsonValue LinkedClusterProperties::Jsonize() const
{
  JsonValue payload;

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);

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
} // namespace DSQL
} // namespace Aws
