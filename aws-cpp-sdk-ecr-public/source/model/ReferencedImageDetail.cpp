/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/ReferencedImageDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

ReferencedImageDetail::ReferencedImageDetail() : 
    m_imageDigestHasBeenSet(false),
    m_imageSizeInBytes(0),
    m_imageSizeInBytesHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false),
    m_artifactMediaTypeHasBeenSet(false)
{
}

ReferencedImageDetail::ReferencedImageDetail(JsonView jsonValue) : 
    m_imageDigestHasBeenSet(false),
    m_imageSizeInBytes(0),
    m_imageSizeInBytesHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false),
    m_artifactMediaTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ReferencedImageDetail& ReferencedImageDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSizeInBytes"))
  {
    m_imageSizeInBytes = jsonValue.GetInt64("imageSizeInBytes");

    m_imageSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePushedAt"))
  {
    m_imagePushedAt = jsonValue.GetDouble("imagePushedAt");

    m_imagePushedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageManifestMediaType"))
  {
    m_imageManifestMediaType = jsonValue.GetString("imageManifestMediaType");

    m_imageManifestMediaTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactMediaType"))
  {
    m_artifactMediaType = jsonValue.GetString("artifactMediaType");

    m_artifactMediaTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferencedImageDetail::Jsonize() const
{
  JsonValue payload;

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_imageSizeInBytesHasBeenSet)
  {
   payload.WithInt64("imageSizeInBytes", m_imageSizeInBytes);

  }

  if(m_imagePushedAtHasBeenSet)
  {
   payload.WithDouble("imagePushedAt", m_imagePushedAt.SecondsWithMSPrecision());
  }

  if(m_imageManifestMediaTypeHasBeenSet)
  {
   payload.WithString("imageManifestMediaType", m_imageManifestMediaType);

  }

  if(m_artifactMediaTypeHasBeenSet)
  {
   payload.WithString("artifactMediaType", m_artifactMediaType);

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
