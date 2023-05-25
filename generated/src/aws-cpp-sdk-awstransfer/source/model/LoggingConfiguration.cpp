/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/LoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

LoggingConfiguration::LoggingConfiguration() : 
    m_loggingRoleHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
}

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) : 
    m_loggingRoleHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfiguration& LoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LoggingRole"))
  {
    m_loggingRole = jsonValue.GetString("LoggingRole");

    m_loggingRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
