/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectPeerSummary.h>
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

ConnectPeerSummary::ConnectPeerSummary() : 
    m_coreNetworkIdHasBeenSet(false),
    m_connectAttachmentIdHasBeenSet(false),
    m_connectPeerIdHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_connectPeerState(ConnectPeerState::NOT_SET),
    m_connectPeerStateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ConnectPeerSummary::ConnectPeerSummary(JsonView jsonValue) : 
    m_coreNetworkIdHasBeenSet(false),
    m_connectAttachmentIdHasBeenSet(false),
    m_connectPeerIdHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_connectPeerState(ConnectPeerState::NOT_SET),
    m_connectPeerStateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectPeerSummary& ConnectPeerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectAttachmentId"))
  {
    m_connectAttachmentId = jsonValue.GetString("ConnectAttachmentId");

    m_connectAttachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectPeerId"))
  {
    m_connectPeerId = jsonValue.GetString("ConnectPeerId");

    m_connectPeerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");

    m_edgeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectPeerState"))
  {
    m_connectPeerState = ConnectPeerStateMapper::GetConnectPeerStateForName(jsonValue.GetString("ConnectPeerState"));

    m_connectPeerStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
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

JsonValue ConnectPeerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_connectAttachmentIdHasBeenSet)
  {
   payload.WithString("ConnectAttachmentId", m_connectAttachmentId);

  }

  if(m_connectPeerIdHasBeenSet)
  {
   payload.WithString("ConnectPeerId", m_connectPeerId);

  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_connectPeerStateHasBeenSet)
  {
   payload.WithString("ConnectPeerState", ConnectPeerStateMapper::GetNameForConnectPeerState(m_connectPeerState));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
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
