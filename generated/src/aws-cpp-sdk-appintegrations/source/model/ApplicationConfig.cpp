/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ApplicationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

ApplicationConfig::ApplicationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationConfig& ApplicationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactHandling"))
  {
    m_contactHandling = jsonValue.GetObject("ContactHandling");
    m_contactHandlingHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_contactHandlingHasBeenSet)
  {
   payload.WithObject("ContactHandling", m_contactHandling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
