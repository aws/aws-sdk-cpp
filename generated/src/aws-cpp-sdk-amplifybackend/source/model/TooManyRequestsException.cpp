﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/TooManyRequestsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

TooManyRequestsException::TooManyRequestsException(JsonView jsonValue)
{
  *this = jsonValue;
}

TooManyRequestsException& TooManyRequestsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("limitType"))
  {
    m_limitType = jsonValue.GetString("limitType");
    m_limitTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue TooManyRequestsException::Jsonize() const
{
  JsonValue payload;

  if(m_limitTypeHasBeenSet)
  {
   payload.WithString("limitType", m_limitType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
