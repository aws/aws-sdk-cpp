/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/IdentityProviderSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

IdentityProviderSummary::IdentityProviderSummary() : 
    m_identityProviderArnHasBeenSet(false),
    m_identityProviderNameHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false)
{
}

IdentityProviderSummary::IdentityProviderSummary(JsonView jsonValue) : 
    m_identityProviderArnHasBeenSet(false),
    m_identityProviderNameHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderSummary& IdentityProviderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityProviderArn"))
  {
    m_identityProviderArn = jsonValue.GetString("identityProviderArn");

    m_identityProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identityProviderName"))
  {
    m_identityProviderName = jsonValue.GetString("identityProviderName");

    m_identityProviderNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identityProviderType"))
  {
    m_identityProviderType = IdentityProviderTypeMapper::GetIdentityProviderTypeForName(jsonValue.GetString("identityProviderType"));

    m_identityProviderTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_identityProviderArnHasBeenSet)
  {
   payload.WithString("identityProviderArn", m_identityProviderArn);

  }

  if(m_identityProviderNameHasBeenSet)
  {
   payload.WithString("identityProviderName", m_identityProviderName);

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("identityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
