/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdNamespaceIdMappingWorkflowMetadata.h>
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

IdNamespaceIdMappingWorkflowMetadata::IdNamespaceIdMappingWorkflowMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

IdNamespaceIdMappingWorkflowMetadata& IdNamespaceIdMappingWorkflowMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idMappingType"))
  {
    m_idMappingType = IdMappingTypeMapper::GetIdMappingTypeForName(jsonValue.GetString("idMappingType"));
    m_idMappingTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdNamespaceIdMappingWorkflowMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idMappingTypeHasBeenSet)
  {
   payload.WithString("idMappingType", IdMappingTypeMapper::GetNameForIdMappingType(m_idMappingType));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
