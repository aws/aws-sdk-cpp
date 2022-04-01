/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/UrlEndpointInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

UrlEndpointInput::UrlEndpointInput() : 
    m_healthUrlHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

UrlEndpointInput::UrlEndpointInput(JsonView jsonValue) : 
    m_healthUrlHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

UrlEndpointInput& UrlEndpointInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HealthUrl"))
  {
    m_healthUrl = jsonValue.GetString("HealthUrl");

    m_healthUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue UrlEndpointInput::Jsonize() const
{
  JsonValue payload;

  if(m_healthUrlHasBeenSet)
  {
   payload.WithString("HealthUrl", m_healthUrl);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
