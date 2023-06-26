/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ContainerImage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

ContainerImage::ContainerImage() : 
    m_uriHasBeenSet(false)
{
}

ContainerImage::ContainerImage(JsonView jsonValue) : 
    m_uriHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerImage& ContainerImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerImage::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
