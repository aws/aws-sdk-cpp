/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CloudWatchConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

CloudWatchConfig::CloudWatchConfig() : 
    m_logGroupNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_largeDataDeliveryS3ConfigHasBeenSet(false)
{
}

CloudWatchConfig::CloudWatchConfig(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_largeDataDeliveryS3ConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchConfig& CloudWatchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("largeDataDeliveryS3Config"))
  {
    m_largeDataDeliveryS3Config = jsonValue.GetObject("largeDataDeliveryS3Config");

    m_largeDataDeliveryS3ConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_largeDataDeliveryS3ConfigHasBeenSet)
  {
   payload.WithObject("largeDataDeliveryS3Config", m_largeDataDeliveryS3Config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
