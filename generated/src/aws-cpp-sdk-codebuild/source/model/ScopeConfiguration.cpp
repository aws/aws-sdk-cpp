/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ScopeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ScopeConfiguration::ScopeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ScopeConfiguration& ScopeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scope"))
  {
    m_scope = WebhookScopeTypeMapper::GetWebhookScopeTypeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", WebhookScopeTypeMapper::GetNameForWebhookScopeType(m_scope));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
