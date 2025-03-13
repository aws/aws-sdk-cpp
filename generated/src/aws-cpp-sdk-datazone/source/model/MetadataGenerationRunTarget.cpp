/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MetadataGenerationRunTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

MetadataGenerationRunTarget::MetadataGenerationRunTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

MetadataGenerationRunTarget& MetadataGenerationRunTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");
    m_revisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = MetadataGenerationTargetTypeMapper::GetMetadataGenerationTargetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataGenerationRunTarget::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MetadataGenerationTargetTypeMapper::GetNameForMetadataGenerationTargetType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
