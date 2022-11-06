/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/Summary.h>
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

Summary::Summary() : 
    m_name(Finding::NOT_SET),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_reasonCodeSummariesHasBeenSet(false)
{
}

Summary::Summary(JsonView jsonValue) : 
    m_name(Finding::NOT_SET),
    m_nameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_reasonCodeSummariesHasBeenSet(false)
{
  *this = jsonValue;
}

Summary& Summary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = FindingMapper::GetFindingForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reasonCodeSummaries"))
  {
    Aws::Utils::Array<JsonView> reasonCodeSummariesJsonList = jsonValue.GetArray("reasonCodeSummaries");
    for(unsigned reasonCodeSummariesIndex = 0; reasonCodeSummariesIndex < reasonCodeSummariesJsonList.GetLength(); ++reasonCodeSummariesIndex)
    {
      m_reasonCodeSummaries.push_back(reasonCodeSummariesJsonList[reasonCodeSummariesIndex].AsObject());
    }
    m_reasonCodeSummariesHasBeenSet = true;
  }

  return *this;
}

JsonValue Summary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", FindingMapper::GetNameForFinding(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  if(m_reasonCodeSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonCodeSummariesJsonList(m_reasonCodeSummaries.size());
   for(unsigned reasonCodeSummariesIndex = 0; reasonCodeSummariesIndex < reasonCodeSummariesJsonList.GetLength(); ++reasonCodeSummariesIndex)
   {
     reasonCodeSummariesJsonList[reasonCodeSummariesIndex].AsObject(m_reasonCodeSummaries[reasonCodeSummariesIndex].Jsonize());
   }
   payload.WithArray("reasonCodeSummaries", std::move(reasonCodeSummariesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
