/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/AuditLogProcessingConfiguration.h>
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

AuditLogProcessingConfiguration::AuditLogProcessingConfiguration() : 
    m_schema(Schema::NOT_SET),
    m_schemaHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false)
{
}

AuditLogProcessingConfiguration::AuditLogProcessingConfiguration(JsonView jsonValue) : 
    m_schema(Schema::NOT_SET),
    m_schemaHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

AuditLogProcessingConfiguration& AuditLogProcessingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schema"))
  {
    m_schema = SchemaMapper::GetSchemaForName(jsonValue.GetString("schema"));

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditLogProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", SchemaMapper::GetNameForSchema(m_schema));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
