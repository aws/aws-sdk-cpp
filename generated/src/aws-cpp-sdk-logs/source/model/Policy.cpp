/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

Policy::Policy() : 
    m_deliveryDestinationPolicyHasBeenSet(false)
{
}

Policy::Policy(JsonView jsonValue) : 
    m_deliveryDestinationPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryDestinationPolicy"))
  {
    m_deliveryDestinationPolicy = jsonValue.GetString("deliveryDestinationPolicy");

    m_deliveryDestinationPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue Policy::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryDestinationPolicyHasBeenSet)
  {
   payload.WithString("deliveryDestinationPolicy", m_deliveryDestinationPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
