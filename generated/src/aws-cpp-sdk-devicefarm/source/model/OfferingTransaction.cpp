﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/OfferingTransaction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

OfferingTransaction::OfferingTransaction(JsonView jsonValue)
{
  *this = jsonValue;
}

OfferingTransaction& OfferingTransaction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offeringStatus"))
  {
    m_offeringStatus = jsonValue.GetObject("offeringStatus");
    m_offeringStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transactionId"))
  {
    m_transactionId = jsonValue.GetString("transactionId");
    m_transactionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offeringPromotionId"))
  {
    m_offeringPromotionId = jsonValue.GetString("offeringPromotionId");
    m_offeringPromotionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdOn"))
  {
    m_createdOn = jsonValue.GetDouble("createdOn");
    m_createdOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cost"))
  {
    m_cost = jsonValue.GetObject("cost");
    m_costHasBeenSet = true;
  }
  return *this;
}

JsonValue OfferingTransaction::Jsonize() const
{
  JsonValue payload;

  if(m_offeringStatusHasBeenSet)
  {
   payload.WithObject("offeringStatus", m_offeringStatus.Jsonize());

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  if(m_offeringPromotionIdHasBeenSet)
  {
   payload.WithString("offeringPromotionId", m_offeringPromotionId);

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("createdOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_costHasBeenSet)
  {
   payload.WithObject("cost", m_cost.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
