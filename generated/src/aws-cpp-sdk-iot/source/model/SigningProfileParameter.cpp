/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SigningProfileParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SigningProfileParameter::SigningProfileParameter() : 
    m_certificateArnHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_certificatePathOnDeviceHasBeenSet(false)
{
}

SigningProfileParameter::SigningProfileParameter(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_certificatePathOnDeviceHasBeenSet(false)
{
  *this = jsonValue;
}

SigningProfileParameter& SigningProfileParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificatePathOnDevice"))
  {
    m_certificatePathOnDevice = jsonValue.GetString("certificatePathOnDevice");

    m_certificatePathOnDeviceHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningProfileParameter::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_certificatePathOnDeviceHasBeenSet)
  {
   payload.WithString("certificatePathOnDevice", m_certificatePathOnDevice);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
