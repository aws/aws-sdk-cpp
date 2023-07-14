/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/BillingGroupProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

BillingGroupProperties::BillingGroupProperties() : 
    m_billingGroupDescriptionHasBeenSet(false)
{
}

BillingGroupProperties::BillingGroupProperties(JsonView jsonValue) : 
    m_billingGroupDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

BillingGroupProperties& BillingGroupProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("billingGroupDescription"))
  {
    m_billingGroupDescription = jsonValue.GetString("billingGroupDescription");

    m_billingGroupDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingGroupProperties::Jsonize() const
{
  JsonValue payload;

  if(m_billingGroupDescriptionHasBeenSet)
  {
   payload.WithString("billingGroupDescription", m_billingGroupDescription);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
