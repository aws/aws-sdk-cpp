/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/CloudWatchLogsDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

CloudWatchLogsDestinationConfiguration::CloudWatchLogsDestinationConfiguration() : 
    m_logGroupNameHasBeenSet(false)
{
}

CloudWatchLogsDestinationConfiguration::CloudWatchLogsDestinationConfiguration(JsonView jsonValue) : 
    m_logGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsDestinationConfiguration& CloudWatchLogsDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
