/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnowflakeVpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

SnowflakeVpcConfiguration::SnowflakeVpcConfiguration() : 
    m_privateLinkVpceIdHasBeenSet(false)
{
}

SnowflakeVpcConfiguration::SnowflakeVpcConfiguration(JsonView jsonValue) : 
    m_privateLinkVpceIdHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeVpcConfiguration& SnowflakeVpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrivateLinkVpceId"))
  {
    m_privateLinkVpceId = jsonValue.GetString("PrivateLinkVpceId");

    m_privateLinkVpceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeVpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_privateLinkVpceIdHasBeenSet)
  {
   payload.WithString("PrivateLinkVpceId", m_privateLinkVpceId);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
