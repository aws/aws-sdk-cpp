﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/FargateProfileHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

FargateProfileHealth::FargateProfileHealth() : 
    m_issuesHasBeenSet(false)
{
}

FargateProfileHealth::FargateProfileHealth(JsonView jsonValue)
  : FargateProfileHealth()
{
  *this = jsonValue;
}

FargateProfileHealth& FargateProfileHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issues"))
  {
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("issues");
    for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
    {
      m_issues.push_back(issuesJsonList[issuesIndex].AsObject());
    }
    m_issuesHasBeenSet = true;
  }

  return *this;
}

JsonValue FargateProfileHealth::Jsonize() const
{
  JsonValue payload;

  if(m_issuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> issuesJsonList(m_issues.size());
   for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
   {
     issuesJsonList[issuesIndex].AsObject(m_issues[issuesIndex].Jsonize());
   }
   payload.WithArray("issues", std::move(issuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
