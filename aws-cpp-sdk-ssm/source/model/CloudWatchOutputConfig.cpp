/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CloudWatchOutputConfig::CloudWatchOutputConfig() : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchOutputEnabled(false),
    m_cloudWatchOutputEnabledHasBeenSet(false)
{
}

CloudWatchOutputConfig::CloudWatchOutputConfig(JsonView jsonValue) : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchOutputEnabled(false),
    m_cloudWatchOutputEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchOutputConfig& CloudWatchOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogGroupName"))
  {
    m_cloudWatchLogGroupName = jsonValue.GetString("CloudWatchLogGroupName");

    m_cloudWatchLogGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchOutputEnabled"))
  {
    m_cloudWatchOutputEnabled = jsonValue.GetBool("CloudWatchOutputEnabled");

    m_cloudWatchOutputEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogGroupNameHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupName", m_cloudWatchLogGroupName);

  }

  if(m_cloudWatchOutputEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchOutputEnabled", m_cloudWatchOutputEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
