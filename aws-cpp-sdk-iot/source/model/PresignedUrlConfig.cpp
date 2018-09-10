﻿/*
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
