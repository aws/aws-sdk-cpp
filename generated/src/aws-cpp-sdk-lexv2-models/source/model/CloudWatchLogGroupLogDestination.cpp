/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CloudWatchLogGroupLogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

CloudWatchLogGroupLogDestination::CloudWatchLogGroupLogDestination() : 
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_logPrefixHasBeenSet(false)
{
}

CloudWatchLogGroupLogDestination::CloudWatchLogGroupLogDestination(JsonView jsonValue) : 
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_logPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogGroupLogDestination& CloudWatchLogGroupLogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("cloudWatchLogGroupArn");

    m_cloudWatchLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logPrefix"))
  {
    m_logPrefix = jsonValue.GetString("logPrefix");

    m_logPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogGroupLogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("cloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  if(m_logPrefixHasBeenSet)
  {
   payload.WithString("logPrefix", m_logPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
