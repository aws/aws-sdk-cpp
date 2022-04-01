/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/Image.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

Image::Image() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageManifestHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageManifestHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetObject("imageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageManifest"))
  {
    m_imageManifest = jsonValue.GetString("imageManifest");

    m_imageManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageManifestMediaType"))
  {
    m_imageManifestMediaType = jsonValue.GetString("imageManifestMediaType");

    m_imageManifestMediaTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithObject("imageId", m_imageId.Jsonize());

  }

  if(m_imageManifestHasBeenSet)
  {
   payload.WithString("imageManifest", m_imageManifest);

  }

  if(m_imageManifestMediaTypeHasBeenSet)
  {
   payload.WithString("imageManifestMediaType", m_imageManifestMediaType);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
