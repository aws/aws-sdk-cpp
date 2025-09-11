/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/EipAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

EipAssociation::EipAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

EipAssociation& EipAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associationId"))
  {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocationId"))
  {
    m_allocationId = jsonValue.GetString("allocationId");
    m_allocationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");
    m_ipAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue EipAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_allocationIdHasBeenSet)
  {
   payload.WithString("allocationId", m_allocationId);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
