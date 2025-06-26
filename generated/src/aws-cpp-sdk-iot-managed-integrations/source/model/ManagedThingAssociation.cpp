/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ManagedThingAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

ManagedThingAssociation::ManagedThingAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedThingAssociation& ManagedThingAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManagedThingId"))
  {
    m_managedThingId = jsonValue.GetString("ManagedThingId");
    m_managedThingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountAssociationId"))
  {
    m_accountAssociationId = jsonValue.GetString("AccountAssociationId");
    m_accountAssociationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedThingAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_managedThingIdHasBeenSet)
  {
   payload.WithString("ManagedThingId", m_managedThingId);

  }

  if(m_accountAssociationIdHasBeenSet)
  {
   payload.WithString("AccountAssociationId", m_accountAssociationId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
