/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

Subscription::Subscription() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Subscription::Subscription(JsonView jsonValue) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInt64("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInt64("InstanceCount", m_instanceCount);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
