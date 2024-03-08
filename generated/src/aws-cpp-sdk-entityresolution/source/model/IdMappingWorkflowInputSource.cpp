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

IdMappingWorkflowInputSource::IdMappingWorkflowInputSource() : 
    m_inputSourceARNHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

IdMappingWorkflowInputSource::IdMappingWorkflowInputSource(JsonView jsonValue) : 
    m_inputSourceARNHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
