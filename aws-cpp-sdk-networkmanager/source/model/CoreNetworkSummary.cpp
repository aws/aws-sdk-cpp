/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CoreNetworkSummary::CoreNetworkSummary() : 
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_state(CoreNetworkState::NOT_SET),
    m_stateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreNetworkSummary::CoreNetworkSummary(JsonView jsonValue) : 
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_globalNetworkIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_state(CoreNetworkState::NOT_SET),
    m_stateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkSummary& CoreNetworkSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkArn"))
  {
    m_coreNetworkArn = jsonValue.GetString("CoreNetworkArn");

    m_coreNetworkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalNetworkId"))
  {
    m_globalNetworkId = jsonValue.GetString("GlobalNetworkId");

    m_globalNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CoreNetworkStateMapper::GetCoreNetworkStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkSummary::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_coreNetworkArnHasBeenSet)
  {
   payload.WithString("CoreNetworkArn", m_coreNetworkArn);

  }

  if(m_globalNetworkIdHasBeenSet)
  {
   payload.WithString("GlobalNetworkId", m_globalNetworkId);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CoreNetworkStateMapper::GetNameForCoreNetworkState(m_state));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
