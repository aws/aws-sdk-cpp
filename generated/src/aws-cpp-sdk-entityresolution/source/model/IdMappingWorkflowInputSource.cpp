/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingWorkflowInputSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IdMappingWorkflowInputSource::IdMappingWorkflowInputSource(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingWorkflowInputSource& IdMappingWorkflowInputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputSourceARN"))
  {
    m_inputSourceARN = jsonValue.GetString("inputSourceARN");
    m_inputSourceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaName"))
  {
    m_schemaName = jsonValue.GetString("schemaName");
    m_schemaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = IdNamespaceTypeMapper::GetIdNamespaceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingWorkflowInputSource::Jsonize() const
{
  JsonValue payload;

  if(m_inputSourceARNHasBeenSet)
  {
   payload.WithString("inputSourceARN", m_inputSourceARN);

  }

  if(m_schemaNameHasBeenSet)
  {
   payload.WithString("schemaName", m_schemaName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", IdNamespaceTypeMapper::GetNameForIdNamespaceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
