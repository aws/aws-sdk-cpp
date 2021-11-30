/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2Metadata.h>
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

Ec2Metadata::Ec2Metadata() : 
    m_amiIdHasBeenSet(false),
    m_platform(Ec2Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Ec2Metadata::Ec2Metadata(JsonView jsonValue) : 
    m_amiIdHasBeenSet(false),
    m_platform(Ec2Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2Metadata& Ec2Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amiId"))
  {
    m_amiId = jsonValue.GetString("amiId");

    m_amiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = Ec2PlatformMapper::GetEc2PlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
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

JsonValue Ec2Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("amiId", m_amiId);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", Ec2PlatformMapper::GetNameForEc2Platform(m_platform));
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
} // namespace Inspector2
} // namespace Aws
