/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SchemaReference::SchemaReference() : 
    m_schemaIdHasBeenSet(false),
    m_schemaVersionIdHasBeenSet(false),
    m_schemaVersionNumber(0),
    m_schemaVersionNumberHasBeenSet(false)
{
}

SchemaReference::SchemaReference(JsonView jsonValue) : 
    m_schemaIdHasBeenSet(false),
    m_schemaVersionIdHasBeenSet(false),
    m_schemaVersionNumber(0),
    m_schemaVersionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaReference& SchemaReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetObject("SchemaId");

    m_schemaIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

    m_schemaVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersionNumber"))
  {
    m_schemaVersionNumber = jsonValue.GetInt64("SchemaVersionNumber");

    m_schemaVersionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaReference::Jsonize() const
{
  JsonValue payload;

  if(m_schemaIdHasBeenSet)
  {
   payload.WithObject("SchemaId", m_schemaId.Jsonize());

  }

  if(m_schemaVersionIdHasBeenSet)
  {
   payload.WithString("SchemaVersionId", m_schemaVersionId);

  }

  if(m_schemaVersionNumberHasBeenSet)
  {
   payload.WithInt64("SchemaVersionNumber", m_schemaVersionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
