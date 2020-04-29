/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotsitewise/model/GatewayCapabilitySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

GatewayCapabilitySummary::GatewayCapabilitySummary() : 
    m_capabilityNamespaceHasBeenSet(false),
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET),
    m_capabilitySyncStatusHasBeenSet(false)
{
}

GatewayCapabilitySummary::GatewayCapabilitySummary(JsonView jsonValue) : 
    m_capabilityNamespaceHasBeenSet(false),
    m_capabilitySyncStatus(CapabilitySyncStatus::NOT_SET),
    m_capabilitySyncStatusHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayCapabilitySummary& GatewayCapabilitySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capabilityNamespace"))
  {
    m_capabilityNamespace = jsonValue.GetString("capabilityNamespace");

    m_capabilityNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capabilitySyncStatus"))
  {
    m_capabilitySyncStatus = CapabilitySyncStatusMapper::GetCapabilitySyncStatusForName(jsonValue.GetString("capabilitySyncStatus"));

    m_capabilitySyncStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayCapabilitySummary::Jsonize() const
{
  JsonValue payload;

  if(m_capabilityNamespaceHasBeenSet)
  {
   payload.WithString("capabilityNamespace", m_capabilityNamespace);

  }

  if(m_capabilitySyncStatusHasBeenSet)
  {
   payload.WithString("capabilitySyncStatus", CapabilitySyncStatusMapper::GetNameForCapabilitySyncStatus(m_capabilitySyncStatus));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
