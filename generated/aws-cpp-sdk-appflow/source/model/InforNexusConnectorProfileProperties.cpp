/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/InforNexusConnectorProfileProperties.h>
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

InforNexusConnectorProfileProperties::InforNexusConnectorProfileProperties() : 
    m_instanceUrlHasBeenSet(false)
{
}

InforNexusConnectorProfileProperties::InforNexusConnectorProfileProperties(JsonView jsonValue) : 
    m_instanceUrlHasBeenSet(false)
{
  *this = jsonValue;
}

InforNexusConnectorProfileProperties& InforNexusConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceUrl"))
  {
    m_instanceUrl = jsonValue.GetString("instanceUrl");

    m_instanceUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue InforNexusConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  if(m_instanceUrlHasBeenSet)
  {
   payload.WithString("instanceUrl", m_instanceUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
