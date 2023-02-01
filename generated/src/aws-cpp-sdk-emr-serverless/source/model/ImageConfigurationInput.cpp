/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ImageConfigurationInput.h>
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

ImageConfigurationInput::ImageConfigurationInput() : 
    m_imageUriHasBeenSet(false)
{
}

ImageConfigurationInput::ImageConfigurationInput(JsonView jsonValue) : 
    m_imageUriHasBeenSet(false)
{
  *this = jsonValue;
}

ImageConfigurationInput& ImageConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageUri"))
  {
    m_imageUri = jsonValue.GetString("imageUri");

    m_imageUriHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("imageUri", m_imageUri);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
