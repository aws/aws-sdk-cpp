/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/budgets/model/CostTypes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

CostTypes::CostTypes() : 
    m_includeTax(false),
    m_includeTaxHasBeenSet(false),
    m_includeSubscription(false),
    m_includeSubscriptionHasBeenSet(false),
    m_useBlended(false),
    m_useBlendedHasBeenSet(false)
{
}

CostTypes::CostTypes(const JsonValue& jsonValue) : 
    m_includeTax(false),
    m_includeTaxHasBeenSet(false),
    m_includeSubscription(false),
    m_includeSubscriptionHasBeenSet(false),
    m_useBlended(false),
    m_useBlendedHasBeenSet(false)
{
  *this = jsonValue;
}

CostTypes& CostTypes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IncludeTax"))
  {
    m_includeTax = jsonValue.GetBool("IncludeTax");

    m_includeTaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeSubscription"))
  {
    m_includeSubscription = jsonValue.GetBool("IncludeSubscription");

    m_includeSubscriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseBlended"))
  {
    m_useBlended = jsonValue.GetBool("UseBlended");

    m_useBlendedHasBeenSet = true;
  }

  return *this;
}

JsonValue CostTypes::Jsonize() const
{
  JsonValue payload;

  if(m_includeTaxHasBeenSet)
  {
   payload.WithBool("IncludeTax", m_includeTax);

  }

  if(m_includeSubscriptionHasBeenSet)
  {
   payload.WithBool("IncludeSubscription", m_includeSubscription);

  }

  if(m_useBlendedHasBeenSet)
  {
   payload.WithBool("UseBlended", m_useBlended);

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws