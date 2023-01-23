/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/SnsChannelConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

SnsChannelConfig::SnsChannelConfig() : 
    m_topicArnHasBeenSet(false)
{
}

SnsChannelConfig::SnsChannelConfig(JsonView jsonValue) : 
    m_topicArnHasBeenSet(false)
{
  *this = jsonValue;
}

SnsChannelConfig& SnsChannelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");

    m_topicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SnsChannelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
