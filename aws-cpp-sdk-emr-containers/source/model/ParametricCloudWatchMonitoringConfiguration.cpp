/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ParametricCloudWatchMonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

ParametricCloudWatchMonitoringConfiguration::ParametricCloudWatchMonitoringConfiguration() : 
    m_logGroupNameHasBeenSet(false),
    m_logStreamNamePrefixHasBeenSet(false)
{
}

ParametricCloudWatchMonitoringConfiguration::ParametricCloudWatchMonitoringConfiguration(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_logStreamNamePrefixHasBeenSet(false)
{
  *this = jsonValue;
}

ParametricCloudWatchMonitoringConfiguration& ParametricCloudWatchMonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logStreamNamePrefix"))
  {
    m_logStreamNamePrefix = jsonValue.GetString("logStreamNamePrefix");

    m_logStreamNamePrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue ParametricCloudWatchMonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logStreamNamePrefixHasBeenSet)
  {
   payload.WithString("logStreamNamePrefix", m_logStreamNamePrefix);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
