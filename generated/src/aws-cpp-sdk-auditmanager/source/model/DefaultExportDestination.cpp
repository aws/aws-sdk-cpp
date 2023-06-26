/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DefaultExportDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

DefaultExportDestination::DefaultExportDestination() : 
    m_destinationType(ExportDestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

DefaultExportDestination::DefaultExportDestination(JsonView jsonValue) : 
    m_destinationType(ExportDestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultExportDestination& DefaultExportDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationType"))
  {
    m_destinationType = ExportDestinationTypeMapper::GetExportDestinationTypeForName(jsonValue.GetString("destinationType"));

    m_destinationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultExportDestination::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("destinationType", ExportDestinationTypeMapper::GetNameForExportDestinationType(m_destinationType));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
