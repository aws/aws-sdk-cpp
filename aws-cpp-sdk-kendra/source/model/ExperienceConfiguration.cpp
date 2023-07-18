/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ExperienceConfiguration.h>
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

ExperienceConfiguration::ExperienceConfiguration() : 
    m_contentSourceConfigurationHasBeenSet(false),
    m_userIdentityConfigurationHasBeenSet(false)
{
}

ExperienceConfiguration::ExperienceConfiguration(JsonView jsonValue) : 
    m_contentSourceConfigurationHasBeenSet(false),
    m_userIdentityConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ExperienceConfiguration& ExperienceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentSourceConfiguration"))
  {
    m_contentSourceConfiguration = jsonValue.GetObject("ContentSourceConfiguration");

    m_contentSourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserIdentityConfiguration"))
  {
    m_userIdentityConfiguration = jsonValue.GetObject("UserIdentityConfiguration");

    m_userIdentityConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperienceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_contentSourceConfigurationHasBeenSet)
  {
   payload.WithObject("ContentSourceConfiguration", m_contentSourceConfiguration.Jsonize());

  }

  if(m_userIdentityConfigurationHasBeenSet)
  {
   payload.WithObject("UserIdentityConfiguration", m_userIdentityConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
