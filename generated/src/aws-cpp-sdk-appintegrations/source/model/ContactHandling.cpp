/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ContactHandling.h>
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

ContactHandling::ContactHandling(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactHandling& ContactHandling::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = ContactHandlingScopeMapper::GetContactHandlingScopeForName(jsonValue.GetString("Scope"));
    m_scopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactHandling::Jsonize() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ContactHandlingScopeMapper::GetNameForContactHandlingScope(m_scope));
  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
