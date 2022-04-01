/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/S3DestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

S3DestinationSettings::S3DestinationSettings() : 
    m_accessControlHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

S3DestinationSettings::S3DestinationSettings(JsonView jsonValue) : 
    m_accessControlHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = jsonValue;
}

S3DestinationSettings& S3DestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessControl"))
  {
    m_accessControl = jsonValue.GetObject("accessControl");

    m_accessControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_accessControlHasBeenSet)
  {
   payload.WithObject("accessControl", m_accessControl.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
