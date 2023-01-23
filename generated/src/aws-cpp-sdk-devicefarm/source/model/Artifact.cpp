/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/Artifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

Artifact::Artifact() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

Artifact::Artifact(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(ArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_extensionHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

Artifact& Artifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ArtifactTypeMapper::GetArtifactTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("extension"))
  {
    m_extension = jsonValue.GetString("extension");

    m_extensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue Artifact::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ArtifactTypeMapper::GetNameForArtifactType(m_type));
  }

  if(m_extensionHasBeenSet)
  {
   payload.WithString("extension", m_extension);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
