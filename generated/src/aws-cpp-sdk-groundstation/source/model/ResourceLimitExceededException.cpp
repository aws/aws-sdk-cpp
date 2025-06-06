﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ResourceLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

ResourceLimitExceededException::ResourceLimitExceededException(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceLimitExceededException& ResourceLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterName"))
  {
    m_parameterName = jsonValue.GetString("parameterName");
    m_parameterNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("parameterName", m_parameterName);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
