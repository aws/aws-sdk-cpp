/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/UrlEndpointSummary.h>
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

UrlEndpointSummary::UrlEndpointSummary() : 
    m_healthUrlHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

UrlEndpointSummary::UrlEndpointSummary(JsonView jsonValue) : 
    m_healthUrlHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

UrlEndpointSummary& UrlEndpointSummary::operator =(JsonView jsonValue)
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

JsonValue UrlEndpointSummary::Jsonize() const
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
