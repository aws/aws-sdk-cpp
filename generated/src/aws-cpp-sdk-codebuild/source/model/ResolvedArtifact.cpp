/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ResolvedArtifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ResolvedArtifact::ResolvedArtifact() : 
    m_type(ArtifactsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
}

ResolvedArtifact::ResolvedArtifact(JsonView jsonValue) : 
    m_type(ArtifactsType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
  *this = jsonValue;
}

ResolvedArtifact& ResolvedArtifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ArtifactsTypeMapper::GetArtifactsTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolvedArtifact::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ArtifactsTypeMapper::GetNameForArtifactsType(m_type));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
