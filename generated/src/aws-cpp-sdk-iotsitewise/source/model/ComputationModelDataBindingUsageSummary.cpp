/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelDataBindingUsageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ComputationModelDataBindingUsageSummary::ComputationModelDataBindingUsageSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputationModelDataBindingUsageSummary& ComputationModelDataBindingUsageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computationModelIds"))
  {
    Aws::Utils::Array<JsonView> computationModelIdsJsonList = jsonValue.GetArray("computationModelIds");
    for(unsigned computationModelIdsIndex = 0; computationModelIdsIndex < computationModelIdsJsonList.GetLength(); ++computationModelIdsIndex)
    {
      m_computationModelIds.push_back(computationModelIdsJsonList[computationModelIdsIndex].AsString());
    }
    m_computationModelIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchedDataBinding"))
  {
    m_matchedDataBinding = jsonValue.GetObject("matchedDataBinding");
    m_matchedDataBindingHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputationModelDataBindingUsageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_computationModelIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computationModelIdsJsonList(m_computationModelIds.size());
   for(unsigned computationModelIdsIndex = 0; computationModelIdsIndex < computationModelIdsJsonList.GetLength(); ++computationModelIdsIndex)
   {
     computationModelIdsJsonList[computationModelIdsIndex].AsString(m_computationModelIds[computationModelIdsIndex]);
   }
   payload.WithArray("computationModelIds", std::move(computationModelIdsJsonList));

  }

  if(m_matchedDataBindingHasBeenSet)
  {
   payload.WithObject("matchedDataBinding", m_matchedDataBinding.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
