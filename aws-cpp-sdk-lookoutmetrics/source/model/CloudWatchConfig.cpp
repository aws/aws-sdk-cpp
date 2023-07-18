/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/CloudWatchConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

CloudWatchConfig::CloudWatchConfig() : 
    m_roleArnHasBeenSet(false),
    m_backTestConfigurationHasBeenSet(false)
{
}

CloudWatchConfig::CloudWatchConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_backTestConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchConfig& CloudWatchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackTestConfiguration"))
  {
    m_backTestConfiguration = jsonValue.GetObject("BackTestConfiguration");

    m_backTestConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_backTestConfigurationHasBeenSet)
  {
   payload.WithObject("BackTestConfiguration", m_backTestConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
