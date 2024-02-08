/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnowflakeRoleConfiguration.h>
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

SnowflakeRoleConfiguration::SnowflakeRoleConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_snowflakeRoleHasBeenSet(false)
{
}

SnowflakeRoleConfiguration::SnowflakeRoleConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_snowflakeRoleHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeRoleConfiguration& SnowflakeRoleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowflakeRole"))
  {
    m_snowflakeRole = jsonValue.GetString("SnowflakeRole");

    m_snowflakeRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeRoleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_snowflakeRoleHasBeenSet)
  {
   payload.WithString("SnowflakeRole", m_snowflakeRole);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
