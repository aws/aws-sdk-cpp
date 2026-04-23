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

#include <aws/securityhub/model/NumberFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

NumberFilter::NumberFilter() : 
    m_gte(0.0),
    m_gteHasBeenSet(false),
    m_lte(0.0),
    m_lteHasBeenSet(false),
    m_eq(0.0),
    m_eqHasBeenSet(false)
{
}

NumberFilter::NumberFilter(JsonView jsonValue) : 
    m_gte(0.0),
    m_gteHasBeenSet(false),
    m_lte(0.0),
    m_lteHasBeenSet(false),
    m_eq(0.0),
    m_eqHasBeenSet(false)
{
  *this = jsonValue;
}

NumberFilter& NumberFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gte"))
  {
    m_gte = jsonValue.GetDouble("Gte");

    m_gteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lte"))
  {
    m_lte = jsonValue.GetDouble("Lte");

    m_lteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Eq"))
  {
    m_eq = jsonValue.GetDouble("Eq");

    m_eqHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberFilter::Jsonize() const
{
  JsonValue payload;

  if(m_gteHasBeenSet)
  {
   payload.WithDouble("Gte", m_gte);

  }

  if(m_lteHasBeenSet)
  {
   payload.WithDouble("Lte", m_lte);

  }

  if(m_eqHasBeenSet)
  {
   payload.WithDouble("Eq", m_eq);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
