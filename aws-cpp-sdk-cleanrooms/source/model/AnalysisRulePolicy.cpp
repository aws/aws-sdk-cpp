/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRulePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisRulePolicy::AnalysisRulePolicy() : 
    m_v1HasBeenSet(false)
{
}

AnalysisRulePolicy::AnalysisRulePolicy(JsonView jsonValue) : 
    m_v1HasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisRulePolicy& AnalysisRulePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("v1"))
  {
    m_v1 = jsonValue.GetObject("v1");

    m_v1HasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisRulePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_v1HasBeenSet)
  {
   payload.WithObject("v1", m_v1.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
