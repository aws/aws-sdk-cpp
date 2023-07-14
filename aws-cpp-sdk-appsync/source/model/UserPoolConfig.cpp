/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/UserPoolConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

UserPoolConfig::UserPoolConfig() : 
    m_userPoolIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_defaultAction(DefaultAction::NOT_SET),
    m_defaultActionHasBeenSet(false),
    m_appIdClientRegexHasBeenSet(false)
{
}

UserPoolConfig::UserPoolConfig(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_defaultAction(DefaultAction::NOT_SET),
    m_defaultActionHasBeenSet(false),
    m_appIdClientRegexHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolConfig& UserPoolConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userPoolId"))
  {
    m_userPoolId = jsonValue.GetString("userPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultAction"))
  {
    m_defaultAction = DefaultActionMapper::GetDefaultActionForName(jsonValue.GetString("defaultAction"));

    m_defaultActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appIdClientRegex"))
  {
    m_appIdClientRegex = jsonValue.GetString("appIdClientRegex");

    m_appIdClientRegexHasBeenSet = true;
  }

  return *this;
}

JsonValue UserPoolConfig::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("userPoolId", m_userPoolId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("defaultAction", DefaultActionMapper::GetNameForDefaultAction(m_defaultAction));
  }

  if(m_appIdClientRegexHasBeenSet)
  {
   payload.WithString("appIdClientRegex", m_appIdClientRegex);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
