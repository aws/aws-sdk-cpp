﻿/**
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
    m_invocationRoleHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_functionHasBeenSet(false)
{
}

IdentityProviderDetails::IdentityProviderDetails(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_invocationRoleHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_functionHasBeenSet(false)
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

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Function"))
  {
    m_function = jsonValue.GetString("Function");

    m_functionHasBeenSet = true;
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

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_functionHasBeenSet)
  {
   payload.WithString("Function", m_function);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
