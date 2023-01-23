/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AwsJobPresignedUrlConfig.h>
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

AwsJobPresignedUrlConfig::AwsJobPresignedUrlConfig() : 
    m_expiresInSec(0),
    m_expiresInSecHasBeenSet(false)
{
}

AwsJobPresignedUrlConfig::AwsJobPresignedUrlConfig(JsonView jsonValue) : 
    m_expiresInSec(0),
    m_expiresInSecHasBeenSet(false)
{
  *this = jsonValue;
}

AwsJobPresignedUrlConfig& AwsJobPresignedUrlConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expiresInSec"))
  {
    m_expiresInSec = jsonValue.GetInt64("expiresInSec");

    m_expiresInSecHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsJobPresignedUrlConfig::Jsonize() const
{
  JsonValue payload;

  if(m_expiresInSecHasBeenSet)
  {
   payload.WithInt64("expiresInSec", m_expiresInSec);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
