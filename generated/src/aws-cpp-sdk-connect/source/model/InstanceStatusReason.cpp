﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceStatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

InstanceStatusReason::InstanceStatusReason() : 
    m_messageHasBeenSet(false)
{
}

InstanceStatusReason::InstanceStatusReason(JsonView jsonValue) : 
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceStatusReason& InstanceStatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceStatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
