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

#include <aws/sagemaker/model/USD.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

USD::USD() : 
    m_dollars(0),
    m_dollarsHasBeenSet(false),
    m_cents(0),
    m_centsHasBeenSet(false),
    m_tenthFractionsOfACent(0),
    m_tenthFractionsOfACentHasBeenSet(false)
{
}

USD::USD(JsonView jsonValue) : 
    m_dollars(0),
    m_dollarsHasBeenSet(false),
    m_cents(0),
    m_centsHasBeenSet(false),
    m_tenthFractionsOfACent(0),
    m_tenthFractionsOfACentHasBeenSet(false)
{
  *this = jsonValue;
}

USD& USD::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dollars"))
  {
    m_dollars = jsonValue.GetInteger("Dollars");

    m_dollarsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cents"))
  {
    m_cents = jsonValue.GetInteger("Cents");

    m_centsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TenthFractionsOfACent"))
  {
    m_tenthFractionsOfACent = jsonValue.GetInteger("TenthFractionsOfACent");

    m_tenthFractionsOfACentHasBeenSet = true;
  }

  return *this;
}

JsonValue USD::Jsonize() const
{
  JsonValue payload;

  if(m_dollarsHasBeenSet)
  {
   payload.WithInteger("Dollars", m_dollars);

  }

  if(m_centsHasBeenSet)
  {
   payload.WithInteger("Cents", m_cents);

  }

  if(m_tenthFractionsOfACentHasBeenSet)
  {
   payload.WithInteger("TenthFractionsOfACent", m_tenthFractionsOfACent);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
