﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Entitlement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Entitlement::Entitlement() : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementStatus(EntitlementStatus::NOT_SET),
    m_entitlementStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
}

Entitlement::Entitlement(JsonView jsonValue) : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementStatus(EntitlementStatus::NOT_SET),
    m_entitlementStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
  *this = jsonValue;
}

Entitlement& Entitlement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTransferSubscriberFeePercent"))
  {
    m_dataTransferSubscriberFeePercent = jsonValue.GetInteger("dataTransferSubscriberFeePercent");

    m_dataTransferSubscriberFeePercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");

    m_entitlementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementStatus"))
  {
    m_entitlementStatus = EntitlementStatusMapper::GetEntitlementStatusForName(jsonValue.GetString("entitlementStatus"));

    m_entitlementStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscribers"))
  {
    Array<JsonView> subscribersJsonList = jsonValue.GetArray("subscribers");
    for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
    {
      m_subscribers.push_back(subscribersJsonList[subscribersIndex].AsString());
    }
    m_subscribersHasBeenSet = true;
  }

  return *this;
}

JsonValue Entitlement::Jsonize() const
{
  JsonValue payload;

  if(m_dataTransferSubscriberFeePercentHasBeenSet)
  {
   payload.WithInteger("dataTransferSubscriberFeePercent", m_dataTransferSubscriberFeePercent);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  if(m_entitlementStatusHasBeenSet)
  {
   payload.WithString("entitlementStatus", EntitlementStatusMapper::GetNameForEntitlementStatus(m_entitlementStatus));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_subscribersHasBeenSet)
  {
   Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsString(m_subscribers[subscribersIndex]);
   }
   payload.WithArray("subscribers", std::move(subscribersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
