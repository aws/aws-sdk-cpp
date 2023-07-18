/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/AuthenticationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

AuthenticationConfiguration::AuthenticationConfiguration() : 
    m_connectionArnHasBeenSet(false),
    m_accessRoleArnHasBeenSet(false)
{
}

AuthenticationConfiguration::AuthenticationConfiguration(JsonView jsonValue) : 
    m_connectionArnHasBeenSet(false),
    m_accessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationConfiguration& AuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessRoleArn"))
  {
    m_accessRoleArn = jsonValue.GetString("AccessRoleArn");

    m_accessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_accessRoleArnHasBeenSet)
  {
   payload.WithString("AccessRoleArn", m_accessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
