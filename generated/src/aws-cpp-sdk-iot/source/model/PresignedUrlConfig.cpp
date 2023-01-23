/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PresignedUrlConfig.h>
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

PresignedUrlConfig::PresignedUrlConfig() : 
    m_roleArnHasBeenSet(false),
    m_expiresInSec(0),
    m_expiresInSecHasBeenSet(false)
{
}

PresignedUrlConfig::PresignedUrlConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_expiresInSec(0),
    m_expiresInSecHasBeenSet(false)
{
  *this = jsonValue;
}

PresignedUrlConfig& PresignedUrlConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresInSec"))
  {
    m_expiresInSec = jsonValue.GetInt64("expiresInSec");

    m_expiresInSecHasBeenSet = true;
  }

  return *this;
}

JsonValue PresignedUrlConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_expiresInSecHasBeenSet)
  {
   payload.WithInt64("expiresInSec", m_expiresInSec);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
