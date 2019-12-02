/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/schemas/model/DiscovererSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Schemas
{
namespace Model
{

DiscovererSummary::DiscovererSummary() : 
    m_discovererArnHasBeenSet(false),
    m_discovererIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_state(DiscovererState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DiscovererSummary::DiscovererSummary(JsonView jsonValue) : 
    m_discovererArnHasBeenSet(false),
    m_discovererIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_state(DiscovererState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DiscovererSummary& DiscovererSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DiscovererArn"))
  {
    m_discovererArn = jsonValue.GetString("DiscovererArn");

    m_discovererArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiscovererId"))
  {
    m_discovererId = jsonValue.GetString("DiscovererId");

    m_discovererIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = DiscovererStateMapper::GetDiscovererStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
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

JsonValue DiscovererSummary::Jsonize() const
{
  JsonValue payload;

  if(m_discovererArnHasBeenSet)
  {
   payload.WithString("DiscovererArn", m_discovererArn);

  }

  if(m_discovererIdHasBeenSet)
  {
   payload.WithString("DiscovererId", m_discovererId);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", DiscovererStateMapper::GetNameForDiscovererState(m_state));
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
} // namespace Schemas
} // namespace Aws
