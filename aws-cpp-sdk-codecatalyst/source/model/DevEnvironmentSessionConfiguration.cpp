/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DevEnvironmentSessionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

DevEnvironmentSessionConfiguration::DevEnvironmentSessionConfiguration() : 
    m_sessionType(DevEnvironmentSessionType::NOT_SET),
    m_sessionTypeHasBeenSet(false),
    m_executeCommandSessionConfigurationHasBeenSet(false)
{
}

DevEnvironmentSessionConfiguration::DevEnvironmentSessionConfiguration(JsonView jsonValue) : 
    m_sessionType(DevEnvironmentSessionType::NOT_SET),
    m_sessionTypeHasBeenSet(false),
    m_executeCommandSessionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DevEnvironmentSessionConfiguration& DevEnvironmentSessionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionType"))
  {
    m_sessionType = DevEnvironmentSessionTypeMapper::GetDevEnvironmentSessionTypeForName(jsonValue.GetString("sessionType"));

    m_sessionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executeCommandSessionConfiguration"))
  {
    m_executeCommandSessionConfiguration = jsonValue.GetObject("executeCommandSessionConfiguration");

    m_executeCommandSessionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DevEnvironmentSessionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sessionTypeHasBeenSet)
  {
   payload.WithString("sessionType", DevEnvironmentSessionTypeMapper::GetNameForDevEnvironmentSessionType(m_sessionType));
  }

  if(m_executeCommandSessionConfigurationHasBeenSet)
  {
   payload.WithObject("executeCommandSessionConfiguration", m_executeCommandSessionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
