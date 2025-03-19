/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CreateCloudFormationStepOutput.h>
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

CreateCloudFormationStepOutput::CreateCloudFormationStepOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateCloudFormationStepOutput& CreateCloudFormationStepOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stackId"))
  {
    m_stackId = jsonValue.GetString("stackId");
    m_stackIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exports"))
  {
    Aws::Map<Aws::String, JsonView> exportsJsonMap = jsonValue.GetObject("exports").GetAllObjects();
    for(auto& exportsItem : exportsJsonMap)
    {
      m_exports[exportsItem.first] = exportsItem.second.AsString();
    }
    m_exportsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateCloudFormationStepOutput::Jsonize() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("stackId", m_stackId);

  }

  if(m_exportsHasBeenSet)
  {
   JsonValue exportsJsonMap;
   for(auto& exportsItem : m_exports)
   {
     exportsJsonMap.WithString(exportsItem.first, exportsItem.second);
   }
   payload.WithObject("exports", std::move(exportsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
