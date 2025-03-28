﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/ImageIdentifier.h>
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

ImageIdentifier::ImageIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageIdentifier& ImageIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");
    m_imageDigestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageTag"))
  {
    m_imageTag = jsonValue.GetString("imageTag");
    m_imageTagHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_imageTagHasBeenSet)
  {
   payload.WithString("imageTag", m_imageTag);

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
