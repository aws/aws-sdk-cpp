/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

OfferingTransaction::OfferingTransaction() : 
    m_offeringStatusHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_costHasBeenSet(false)
{
}

OfferingTransaction::OfferingTransaction(const JsonValue& jsonValue) : 
    m_offeringStatusHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_costHasBeenSet(false)
{
  *this = jsonValue;
}

OfferingTransaction& OfferingTransaction::operator =(const JsonValue& jsonValue)
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