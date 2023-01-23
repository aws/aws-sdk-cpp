/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ImageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

ImageConfiguration::ImageConfiguration() : 
    m_imageUriHasBeenSet(false),
    m_resolvedImageDigestHasBeenSet(false)
{
}

ImageConfiguration::ImageConfiguration(JsonView jsonValue) : 
    m_imageUriHasBeenSet(false),
    m_resolvedImageDigestHasBeenSet(false)
{
  *this = jsonValue;
}

ImageConfiguration& ImageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageUri"))
  {
    m_imageUri = jsonValue.GetString("imageUri");

    m_imageUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedImageDigest"))
  {
    m_resolvedImageDigest = jsonValue.GetString("resolvedImageDigest");

    m_resolvedImageDigestHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("imageUri", m_imageUri);

  }

  if(m_resolvedImageDigestHasBeenSet)
  {
   payload.WithString("resolvedImageDigest", m_resolvedImageDigest);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
