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

#include <aws/ce/model/CostCategoryReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostCategoryReference::CostCategoryReference() : 
    m_costCategoryArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false)
{
}

CostCategoryReference::CostCategoryReference(JsonView jsonValue) : 
    m_costCategoryArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategoryReference& CostCategoryReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CostCategoryArn"))
  {
    m_costCategoryArn = jsonValue.GetString("CostCategoryArn");

    m_costCategoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveStart"))
  {
    m_effectiveStart = jsonValue.GetString("EffectiveStart");

    m_effectiveStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EffectiveEnd"))
  {
    m_effectiveEnd = jsonValue.GetString("EffectiveEnd");

    m_effectiveEndHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategoryReference::Jsonize() const
{
  JsonValue payload;

  if(m_costCategoryArnHasBeenSet)
  {
   payload.WithString("CostCategoryArn", m_costCategoryArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_effectiveStartHasBeenSet)
  {
   payload.WithString("EffectiveStart", m_effectiveStart);

  }

  if(m_effectiveEndHasBeenSet)
  {
   payload.WithString("EffectiveEnd", m_effectiveEnd);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
