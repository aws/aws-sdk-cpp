/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ServiceNowConnectorProfileProperties.h>
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

ServiceNowConnectorProfileProperties::ServiceNowConnectorProfileProperties() : 
    m_instanceUrlHasBeenSet(false)
{
}

ServiceNowConnectorProfileProperties::ServiceNowConnectorProfileProperties(JsonView jsonValue) : 
    m_instanceUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNowConnectorProfileProperties& ServiceNowConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceUrl"))
  {
    m_instanceUrl = jsonValue.GetString("instanceUrl");

    m_instanceUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNowConnectorProfileProperties::Jsonize() const
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
