/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetItemAdditionalAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetItemAdditionalAttributes::AssetItemAdditionalAttributes() : 
    m_formsOutputHasBeenSet(false),
    m_latestTimeSeriesDataPointFormsOutputHasBeenSet(false),
    m_readOnlyFormsOutputHasBeenSet(false)
{
}

AssetItemAdditionalAttributes::AssetItemAdditionalAttributes(JsonView jsonValue) : 
    m_formsOutputHasBeenSet(false),
    m_latestTimeSeriesDataPointFormsOutputHasBeenSet(false),
    m_readOnlyFormsOutputHasBeenSet(false)
{
  *this = jsonValue;
}

AssetItemAdditionalAttributes& AssetItemAdditionalAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("formsOutput"))
  {
    Aws::Utils::Array<JsonView> formsOutputJsonList = jsonValue.GetArray("formsOutput");
    for(unsigned formsOutputIndex = 0; formsOutputIndex < formsOutputJsonList.GetLength(); ++formsOutputIndex)
    {
      m_formsOutput.push_back(formsOutputJsonList[formsOutputIndex].AsObject());
    }
    m_formsOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestTimeSeriesDataPointFormsOutput"))
  {
    Aws::Utils::Array<JsonView> latestTimeSeriesDataPointFormsOutputJsonList = jsonValue.GetArray("latestTimeSeriesDataPointFormsOutput");
    for(unsigned latestTimeSeriesDataPointFormsOutputIndex = 0; latestTimeSeriesDataPointFormsOutputIndex < latestTimeSeriesDataPointFormsOutputJsonList.GetLength(); ++latestTimeSeriesDataPointFormsOutputIndex)
    {
      m_latestTimeSeriesDataPointFormsOutput.push_back(latestTimeSeriesDataPointFormsOutputJsonList[latestTimeSeriesDataPointFormsOutputIndex].AsObject());
    }
    m_latestTimeSeriesDataPointFormsOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readOnlyFormsOutput"))
  {
    Aws::Utils::Array<JsonView> readOnlyFormsOutputJsonList = jsonValue.GetArray("readOnlyFormsOutput");
    for(unsigned readOnlyFormsOutputIndex = 0; readOnlyFormsOutputIndex < readOnlyFormsOutputJsonList.GetLength(); ++readOnlyFormsOutputIndex)
    {
      m_readOnlyFormsOutput.push_back(readOnlyFormsOutputJsonList[readOnlyFormsOutputIndex].AsObject());
    }
    m_readOnlyFormsOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetItemAdditionalAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_formsOutputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formsOutputJsonList(m_formsOutput.size());
   for(unsigned formsOutputIndex = 0; formsOutputIndex < formsOutputJsonList.GetLength(); ++formsOutputIndex)
   {
     formsOutputJsonList[formsOutputIndex].AsObject(m_formsOutput[formsOutputIndex].Jsonize());
   }
   payload.WithArray("formsOutput", std::move(formsOutputJsonList));

  }

  if(m_latestTimeSeriesDataPointFormsOutputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> latestTimeSeriesDataPointFormsOutputJsonList(m_latestTimeSeriesDataPointFormsOutput.size());
   for(unsigned latestTimeSeriesDataPointFormsOutputIndex = 0; latestTimeSeriesDataPointFormsOutputIndex < latestTimeSeriesDataPointFormsOutputJsonList.GetLength(); ++latestTimeSeriesDataPointFormsOutputIndex)
   {
     latestTimeSeriesDataPointFormsOutputJsonList[latestTimeSeriesDataPointFormsOutputIndex].AsObject(m_latestTimeSeriesDataPointFormsOutput[latestTimeSeriesDataPointFormsOutputIndex].Jsonize());
   }
   payload.WithArray("latestTimeSeriesDataPointFormsOutput", std::move(latestTimeSeriesDataPointFormsOutputJsonList));

  }

  if(m_readOnlyFormsOutputHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readOnlyFormsOutputJsonList(m_readOnlyFormsOutput.size());
   for(unsigned readOnlyFormsOutputIndex = 0; readOnlyFormsOutputIndex < readOnlyFormsOutputJsonList.GetLength(); ++readOnlyFormsOutputIndex)
   {
     readOnlyFormsOutputJsonList[readOnlyFormsOutputIndex].AsObject(m_readOnlyFormsOutput[readOnlyFormsOutputIndex].Jsonize());
   }
   payload.WithArray("readOnlyFormsOutput", std::move(readOnlyFormsOutputJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
