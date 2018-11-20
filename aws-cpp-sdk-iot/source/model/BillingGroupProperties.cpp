/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
