/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ReasonCodeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

ReasonCodeSummary::ReasonCodeSummary() : 
    m_name(FindingReasonCode::NOT_SET),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

ReasonCodeSummary::ReasonCodeSummary(JsonView jsonValue) : 
    m_name(FindingReasonCode::NOT_SET),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ReasonCodeSummary& ReasonCodeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = FindingReasonCodeMapper::GetFindingReasonCodeForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ReasonCodeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", FindingReasonCodeMapper::GetNameForFindingReasonCode(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
