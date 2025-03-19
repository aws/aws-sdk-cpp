/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/InferenceContainerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

InferenceContainerConfig::InferenceContainerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceContainerConfig& InferenceContainerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageUri"))
  {
    m_imageUri = jsonValue.GetString("imageUri");
    m_imageUriHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceContainerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("imageUri", m_imageUri);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
