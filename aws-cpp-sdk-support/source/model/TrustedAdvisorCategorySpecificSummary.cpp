﻿/*
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
#include <aws/support/model/TrustedAdvisorCategorySpecificSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorCategorySpecificSummary::TrustedAdvisorCategorySpecificSummary() : 
    m_costOptimizingHasBeenSet(false)
{
}

TrustedAdvisorCategorySpecificSummary::TrustedAdvisorCategorySpecificSummary(const JsonValue& jsonValue) : 
    m_costOptimizingHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCategorySpecificSummary& TrustedAdvisorCategorySpecificSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("costOptimizing"))
  {
    m_costOptimizing = jsonValue.GetObject("costOptimizing");

    m_costOptimizingHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCategorySpecificSummary::Jsonize() const
{
  JsonValue payload;

  if(m_costOptimizingHasBeenSet)
  {
   payload.WithObject("costOptimizing", m_costOptimizing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws