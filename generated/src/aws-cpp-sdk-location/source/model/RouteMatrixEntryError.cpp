﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/RouteMatrixEntryError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

RouteMatrixEntryError::RouteMatrixEntryError(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixEntryError& RouteMatrixEntryError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = RouteMatrixErrorCodeMapper::GetRouteMatrixErrorCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixEntryError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", RouteMatrixErrorCodeMapper::GetNameForRouteMatrixErrorCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
