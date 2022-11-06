/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/PartialMatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

PartialMatch::PartialMatch() : 
    m_referenceHasBeenSet(false),
    m_targetViolationReasonsHasBeenSet(false)
{
}

PartialMatch::PartialMatch(JsonView jsonValue) : 
    m_referenceHasBeenSet(false),
    m_targetViolationReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

PartialMatch& PartialMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reference"))
  {
    m_reference = jsonValue.GetString("Reference");

    m_referenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetViolationReasons"))
  {
    Aws::Utils::Array<JsonView> targetViolationReasonsJsonList = jsonValue.GetArray("TargetViolationReasons");
    for(unsigned targetViolationReasonsIndex = 0; targetViolationReasonsIndex < targetViolationReasonsJsonList.GetLength(); ++targetViolationReasonsIndex)
    {
      m_targetViolationReasons.push_back(targetViolationReasonsJsonList[targetViolationReasonsIndex].AsString());
    }
    m_targetViolationReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue PartialMatch::Jsonize() const
{
  JsonValue payload;

  if(m_referenceHasBeenSet)
  {
   payload.WithString("Reference", m_reference);

  }

  if(m_targetViolationReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetViolationReasonsJsonList(m_targetViolationReasons.size());
   for(unsigned targetViolationReasonsIndex = 0; targetViolationReasonsIndex < targetViolationReasonsJsonList.GetLength(); ++targetViolationReasonsIndex)
   {
     targetViolationReasonsJsonList[targetViolationReasonsIndex].AsString(m_targetViolationReasons[targetViolationReasonsIndex]);
   }
   payload.WithArray("TargetViolationReasons", std::move(targetViolationReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
