/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/SupportedEndpointType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

SupportedEndpointType::SupportedEndpointType(JsonView jsonValue)
{
  *this = jsonValue;
}

SupportedEndpointType& SupportedEndpointType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineName"))
  {
    m_engineName = jsonValue.GetString("EngineName");
    m_engineNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportsCDC"))
  {
    m_supportsCDC = jsonValue.GetBool("SupportsCDC");
    m_supportsCDCHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = ReplicationEndpointTypeValueMapper::GetReplicationEndpointTypeValueForName(jsonValue.GetString("EndpointType"));
    m_endpointTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationInstanceEngineMinimumVersion"))
  {
    m_replicationInstanceEngineMinimumVersion = jsonValue.GetString("ReplicationInstanceEngineMinimumVersion");
    m_replicationInstanceEngineMinimumVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineDisplayName"))
  {
    m_engineDisplayName = jsonValue.GetString("EngineDisplayName");
    m_engineDisplayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportedEndpointType::Jsonize() const
{
  JsonValue payload;

  if(m_engineNameHasBeenSet)
  {
   payload.WithString("EngineName", m_engineName);

  }

  if(m_supportsCDCHasBeenSet)
  {
   payload.WithBool("SupportsCDC", m_supportsCDC);

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", ReplicationEndpointTypeValueMapper::GetNameForReplicationEndpointTypeValue(m_endpointType));
  }

  if(m_replicationInstanceEngineMinimumVersionHasBeenSet)
  {
   payload.WithString("ReplicationInstanceEngineMinimumVersion", m_replicationInstanceEngineMinimumVersion);

  }

  if(m_engineDisplayNameHasBeenSet)
  {
   payload.WithString("EngineDisplayName", m_engineDisplayName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
