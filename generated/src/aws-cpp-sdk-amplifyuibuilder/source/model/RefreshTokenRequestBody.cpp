﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/RefreshTokenRequestBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

RefreshTokenRequestBody::RefreshTokenRequestBody() : 
    m_tokenHasBeenSet(false)
{
}

RefreshTokenRequestBody::RefreshTokenRequestBody(JsonView jsonValue) : 
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshTokenRequestBody& RefreshTokenRequestBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshTokenRequestBody::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
