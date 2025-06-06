﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/SqsParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

SqsParameters::SqsParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

SqsParameters& SqsParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageGroupId"))
  {
    m_messageGroupId = jsonValue.GetString("MessageGroupId");
    m_messageGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SqsParameters::Jsonize() const
{
  JsonValue payload;

  if(m_messageGroupIdHasBeenSet)
  {
   payload.WithString("MessageGroupId", m_messageGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
