/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ConnectorDetail::ConnectorDetail() : 
    m_connectorDescriptionHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorOwnerHasBeenSet(false),
    m_connectorVersionHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorLabelHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_registeredByHasBeenSet(false),
    m_connectorProvisioningType(ConnectorProvisioningType::NOT_SET),
    m_connectorProvisioningTypeHasBeenSet(false),
    m_connectorModesHasBeenSet(false)
{
}

ConnectorDetail::ConnectorDetail(JsonView jsonValue) : 
    m_connectorDescriptionHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorOwnerHasBeenSet(false),
    m_connectorVersionHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorLabelHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_registeredByHasBeenSet(false),
    m_connectorProvisioningType(ConnectorProvisioningType::NOT_SET),
    m_connectorProvisioningTypeHasBeenSet(false),
    m_connectorModesHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorDetail& ConnectorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorDescription"))
  {
    m_connectorDescription = jsonValue.GetString("connectorDescription");

    m_connectorDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorName"))
  {
    m_connectorName = jsonValue.GetString("connectorName");

    m_connectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorOwner"))
  {
    m_connectorOwner = jsonValue.GetString("connectorOwner");

    m_connectorOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorVersion"))
  {
    m_connectorVersion = jsonValue.GetString("connectorVersion");

    m_connectorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationType"))
  {
    m_applicationType = jsonValue.GetString("applicationType");

    m_applicationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorType"))
  {
    m_connectorType = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("connectorType"));

    m_connectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorLabel"))
  {
    m_connectorLabel = jsonValue.GetString("connectorLabel");

    m_connectorLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredAt"))
  {
    m_registeredAt = jsonValue.GetDouble("registeredAt");

    m_registeredAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredBy"))
  {
    m_registeredBy = jsonValue.GetString("registeredBy");

    m_registeredByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProvisioningType"))
  {
    m_connectorProvisioningType = ConnectorProvisioningTypeMapper::GetConnectorProvisioningTypeForName(jsonValue.GetString("connectorProvisioningType"));

    m_connectorProvisioningTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorModes"))
  {
    Aws::Utils::Array<JsonView> connectorModesJsonList = jsonValue.GetArray("connectorModes");
    for(unsigned connectorModesIndex = 0; connectorModesIndex < connectorModesJsonList.GetLength(); ++connectorModesIndex)
    {
      m_connectorModes.push_back(connectorModesJsonList[connectorModesIndex].AsString());
    }
    m_connectorModesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_connectorDescriptionHasBeenSet)
  {
   payload.WithString("connectorDescription", m_connectorDescription);

  }

  if(m_connectorNameHasBeenSet)
  {
   payload.WithString("connectorName", m_connectorName);

  }

  if(m_connectorOwnerHasBeenSet)
  {
   payload.WithString("connectorOwner", m_connectorOwner);

  }

  if(m_connectorVersionHasBeenSet)
  {
   payload.WithString("connectorVersion", m_connectorVersion);

  }

  if(m_applicationTypeHasBeenSet)
  {
   payload.WithString("applicationType", m_applicationType);

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectorLabelHasBeenSet)
  {
   payload.WithString("connectorLabel", m_connectorLabel);

  }

  if(m_registeredAtHasBeenSet)
  {
   payload.WithDouble("registeredAt", m_registeredAt.SecondsWithMSPrecision());
  }

  if(m_registeredByHasBeenSet)
  {
   payload.WithString("registeredBy", m_registeredBy);

  }

  if(m_connectorProvisioningTypeHasBeenSet)
  {
   payload.WithString("connectorProvisioningType", ConnectorProvisioningTypeMapper::GetNameForConnectorProvisioningType(m_connectorProvisioningType));
  }

  if(m_connectorModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorModesJsonList(m_connectorModes.size());
   for(unsigned connectorModesIndex = 0; connectorModesIndex < connectorModesJsonList.GetLength(); ++connectorModesIndex)
   {
     connectorModesJsonList[connectorModesIndex].AsString(m_connectorModes[connectorModesIndex]);
   }
   payload.WithArray("connectorModes", std::move(connectorModesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
