/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedApplicationStepOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

M2ManagedApplicationStepOutput::M2ManagedApplicationStepOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedApplicationStepOutput& M2ManagedApplicationStepOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("importDataSetSummary"))
  {
    Aws::Map<Aws::String, JsonView> importDataSetSummaryJsonMap = jsonValue.GetObject("importDataSetSummary").GetAllObjects();
    for(auto& importDataSetSummaryItem : importDataSetSummaryJsonMap)
    {
      m_importDataSetSummary[importDataSetSummaryItem.first] = importDataSetSummaryItem.second.AsString();
    }
    m_importDataSetSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue M2ManagedApplicationStepOutput::Jsonize() const
{
  JsonValue payload;

  if(m_importDataSetSummaryHasBeenSet)
  {
   JsonValue importDataSetSummaryJsonMap;
   for(auto& importDataSetSummaryItem : m_importDataSetSummary)
   {
     importDataSetSummaryJsonMap.WithString(importDataSetSummaryItem.first, importDataSetSummaryItem.second);
   }
   payload.WithObject("importDataSetSummary", std::move(importDataSetSummaryJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
