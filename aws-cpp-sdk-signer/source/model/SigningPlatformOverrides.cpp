/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningPlatformOverrides::SigningPlatformOverrides() : 
    m_signingConfigurationHasBeenSet(false),
    m_signingImageFormat(ImageFormat::NOT_SET),
    m_signingImageFormatHasBeenSet(false)
{
}

SigningPlatformOverrides::SigningPlatformOverrides(JsonView jsonValue) : 
    m_signingConfigurationHasBeenSet(false),
    m_signingImageFormat(ImageFormat::NOT_SET),
    m_signingImageFormatHasBeenSet(false)
{
  *this = jsonValue;
}

SigningPlatformOverrides& SigningPlatformOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signingConfiguration"))
  {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");

    m_signingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingImageFormat"))
  {
    m_signingImageFormat = ImageFormatMapper::GetImageFormatForName(jsonValue.GetString("signingImageFormat"));

    m_signingImageFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningPlatformOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_signingConfigurationHasBeenSet)
  {
   payload.WithObject("signingConfiguration", m_signingConfiguration.Jsonize());

  }

  if(m_signingImageFormatHasBeenSet)
  {
   payload.WithString("signingImageFormat", ImageFormatMapper::GetNameForImageFormat(m_signingImageFormat));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
