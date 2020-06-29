/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

IdentityProviderDetails::IdentityProviderDetails() : 
    m_urlHasBeenSet(false),
    m_invocationRoleHasBeenSet(false)
{
}

IdentityProviderDetails::IdentityProviderDetails(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_invocationRoleHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderDetails& IdentityProviderDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvocationRole"))
  {
    m_invocationRole = jsonValue.GetString("InvocationRole");

    m_invocationRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderDetails::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_invocationRoleHasBeenSet)
  {
   payload.WithString("InvocationRole", m_invocationRole);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
