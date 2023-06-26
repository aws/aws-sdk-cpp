/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaId.h>
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

SchemaId::SchemaId() : 
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_registryNameHasBeenSet(false)
{
}

SchemaId::SchemaId(JsonView jsonValue) : 
    m_schemaArnHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_registryNameHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaId& SchemaId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaArn"))
  {
    m_schemaArn = jsonValue.GetString("SchemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaName"))
  {
    m_schemaName = jsonValue.GetString("SchemaName");

    m_schemaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryName"))
  {
    m_registryName = jsonValue.GetString("RegistryName");

    m_registryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaId::Jsonize() const
{
  JsonValue payload;

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("SchemaArn", m_schemaArn);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("SchemaName", m_schemaName);

  }

  if(m_registryNameHasBeenSet)
  {
   payload.WithString("RegistryName", m_registryName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
