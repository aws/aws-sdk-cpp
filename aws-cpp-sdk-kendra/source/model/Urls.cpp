/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Urls.h>
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

Urls::Urls() : 
    m_seedUrlConfigurationHasBeenSet(false),
    m_siteMapsConfigurationHasBeenSet(false)
{
}

Urls::Urls(JsonView jsonValue) : 
    m_seedUrlConfigurationHasBeenSet(false),
    m_siteMapsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Urls& Urls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SeedUrlConfiguration"))
  {
    m_seedUrlConfiguration = jsonValue.GetObject("SeedUrlConfiguration");

    m_seedUrlConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SiteMapsConfiguration"))
  {
    m_siteMapsConfiguration = jsonValue.GetObject("SiteMapsConfiguration");

    m_siteMapsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Urls::Jsonize() const
{
  JsonValue payload;

  if(m_seedUrlConfigurationHasBeenSet)
  {
   payload.WithObject("SeedUrlConfiguration", m_seedUrlConfiguration.Jsonize());

  }

  if(m_siteMapsConfigurationHasBeenSet)
  {
   payload.WithObject("SiteMapsConfiguration", m_siteMapsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
