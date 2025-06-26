/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AccountAssociationItem.h>
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

AccountAssociationItem::AccountAssociationItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountAssociationItem& AccountAssociationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountAssociationId"))
  {
    m_accountAssociationId = jsonValue.GetString("AccountAssociationId");
    m_accountAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationState"))
  {
    m_associationState = AssociationStateMapper::GetAssociationStateForName(jsonValue.GetString("AssociationState"));
    m_associationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorDestinationId"))
  {
    m_connectorDestinationId = jsonValue.GetString("ConnectorDestinationId");
    m_connectorDestinationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountAssociationItem::Jsonize() const
{
  JsonValue payload;

  if(m_accountAssociationIdHasBeenSet)
  {
   payload.WithString("AccountAssociationId", m_accountAssociationId);

  }

  if(m_associationStateHasBeenSet)
  {
   payload.WithString("AssociationState", AssociationStateMapper::GetNameForAssociationState(m_associationState));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_connectorDestinationIdHasBeenSet)
  {
   payload.WithString("ConnectorDestinationId", m_connectorDestinationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
