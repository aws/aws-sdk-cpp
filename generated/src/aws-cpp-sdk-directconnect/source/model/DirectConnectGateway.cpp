/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DirectConnectGateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

DirectConnectGateway::DirectConnectGateway(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectConnectGateway& DirectConnectGateway::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");
    m_directConnectGatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("directConnectGatewayName"))
  {
    m_directConnectGatewayName = jsonValue.GetString("directConnectGatewayName");
    m_directConnectGatewayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("amazonSideAsn"))
  {
    m_amazonSideAsn = jsonValue.GetInt64("amazonSideAsn");
    m_amazonSideAsnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");
    m_ownerAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("directConnectGatewayState"))
  {
    m_directConnectGatewayState = DirectConnectGatewayStateMapper::GetDirectConnectGatewayStateForName(jsonValue.GetString("directConnectGatewayState"));
    m_directConnectGatewayStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateChangeError"))
  {
    m_stateChangeError = jsonValue.GetString("stateChangeError");
    m_stateChangeErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectConnectGateway::Jsonize() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_directConnectGatewayNameHasBeenSet)
  {
   payload.WithString("directConnectGatewayName", m_directConnectGatewayName);

  }

  if(m_amazonSideAsnHasBeenSet)
  {
   payload.WithInt64("amazonSideAsn", m_amazonSideAsn);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_directConnectGatewayStateHasBeenSet)
  {
   payload.WithString("directConnectGatewayState", DirectConnectGatewayStateMapper::GetNameForDirectConnectGatewayState(m_directConnectGatewayState));
  }

  if(m_stateChangeErrorHasBeenSet)
  {
   payload.WithString("stateChangeError", m_stateChangeError);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
