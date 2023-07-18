/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/SnsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

SnsConfiguration::SnsConfiguration() : 
    m_topicArnHasBeenSet(false)
{
}

SnsConfiguration::SnsConfiguration(JsonView jsonValue) : 
    m_topicArnHasBeenSet(false)
{
  *this = jsonValue;
}

SnsConfiguration& SnsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");

    m_topicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SnsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
