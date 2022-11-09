/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AppflowIntegration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AppflowIntegration::AppflowIntegration() : 
    m_flowDefinitionHasBeenSet(false),
    m_batchesHasBeenSet(false)
{
}

AppflowIntegration::AppflowIntegration(JsonView jsonValue) : 
    m_flowDefinitionHasBeenSet(false),
    m_batchesHasBeenSet(false)
{
  *this = jsonValue;
}

AppflowIntegration& AppflowIntegration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlowDefinition"))
  {
    m_flowDefinition = jsonValue.GetObject("FlowDefinition");

    m_flowDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Batches"))
  {
    Aws::Utils::Array<JsonView> batchesJsonList = jsonValue.GetArray("Batches");
    for(unsigned batchesIndex = 0; batchesIndex < batchesJsonList.GetLength(); ++batchesIndex)
    {
      m_batches.push_back(batchesJsonList[batchesIndex].AsObject());
    }
    m_batchesHasBeenSet = true;
  }

  return *this;
}

JsonValue AppflowIntegration::Jsonize() const
{
  JsonValue payload;

  if(m_flowDefinitionHasBeenSet)
  {
   payload.WithObject("FlowDefinition", m_flowDefinition.Jsonize());

  }

  if(m_batchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> batchesJsonList(m_batches.size());
   for(unsigned batchesIndex = 0; batchesIndex < batchesJsonList.GetLength(); ++batchesIndex)
   {
     batchesJsonList[batchesIndex].AsObject(m_batches[batchesIndex].Jsonize());
   }
   payload.WithArray("Batches", std::move(batchesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
