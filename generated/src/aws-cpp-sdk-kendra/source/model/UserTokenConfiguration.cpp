/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserTokenConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

UserTokenConfiguration::UserTokenConfiguration() : 
    m_jwtTokenTypeConfigurationHasBeenSet(false),
    m_jsonTokenTypeConfigurationHasBeenSet(false)
{
}

UserTokenConfiguration::UserTokenConfiguration(JsonView jsonValue) : 
    m_jwtTokenTypeConfigurationHasBeenSet(false),
    m_jsonTokenTypeConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

UserTokenConfiguration& UserTokenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JwtTokenTypeConfiguration"))
  {
    m_jwtTokenTypeConfiguration = jsonValue.GetObject("JwtTokenTypeConfiguration");

    m_jwtTokenTypeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonTokenTypeConfiguration"))
  {
    m_jsonTokenTypeConfiguration = jsonValue.GetObject("JsonTokenTypeConfiguration");

    m_jsonTokenTypeConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue UserTokenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jwtTokenTypeConfigurationHasBeenSet)
  {
   payload.WithObject("JwtTokenTypeConfiguration", m_jwtTokenTypeConfiguration.Jsonize());

  }

  if(m_jsonTokenTypeConfigurationHasBeenSet)
  {
   payload.WithObject("JsonTokenTypeConfiguration", m_jsonTokenTypeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
