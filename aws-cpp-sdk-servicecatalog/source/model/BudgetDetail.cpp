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

#include <aws/servicecatalog/model/BudgetDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

BudgetDetail::BudgetDetail() : 
    m_budgetNameHasBeenSet(false)
{
}

BudgetDetail::BudgetDetail(JsonView jsonValue) : 
    m_budgetNameHasBeenSet(false)
{
  *this = jsonValue;
}

BudgetDetail& BudgetDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BudgetName"))
  {
    m_budgetName = jsonValue.GetString("BudgetName");

    m_budgetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BudgetDetail::Jsonize() const
{
  JsonValue payload;

  if(m_budgetNameHasBeenSet)
  {
   payload.WithString("BudgetName", m_budgetName);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
