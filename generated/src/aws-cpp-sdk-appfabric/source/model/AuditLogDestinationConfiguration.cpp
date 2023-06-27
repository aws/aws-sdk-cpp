/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AuditLogDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

AuditLogDestinationConfiguration::AuditLogDestinationConfiguration() : 
    m_destinationHasBeenSet(false)
{
}

AuditLogDestinationConfiguration::AuditLogDestinationConfiguration(JsonView jsonValue) : 
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

AuditLogDestinationConfiguration& AuditLogDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditLogDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
