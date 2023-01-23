/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/HierarchicalPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

HierarchicalPrincipal::HierarchicalPrincipal() : 
    m_principalListHasBeenSet(false)
{
}

HierarchicalPrincipal::HierarchicalPrincipal(JsonView jsonValue) : 
    m_principalListHasBeenSet(false)
{
  *this = jsonValue;
}

HierarchicalPrincipal& HierarchicalPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrincipalList"))
  {
    Aws::Utils::Array<JsonView> principalListJsonList = jsonValue.GetArray("PrincipalList");
    for(unsigned principalListIndex = 0; principalListIndex < principalListJsonList.GetLength(); ++principalListIndex)
    {
      m_principalList.push_back(principalListJsonList[principalListIndex].AsObject());
    }
    m_principalListHasBeenSet = true;
  }

  return *this;
}

JsonValue HierarchicalPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_principalListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalListJsonList(m_principalList.size());
   for(unsigned principalListIndex = 0; principalListIndex < principalListJsonList.GetLength(); ++principalListIndex)
   {
     principalListJsonList[principalListIndex].AsObject(m_principalList[principalListIndex].Jsonize());
   }
   payload.WithArray("PrincipalList", std::move(principalListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
