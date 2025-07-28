/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelDataBindingValue.h>
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

ComputationModelDataBindingValue::ComputationModelDataBindingValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputationModelDataBindingValue& ComputationModelDataBindingValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetModelProperty"))
  {
    m_assetModelProperty = jsonValue.GetObject("assetModelProperty");
    m_assetModelPropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetProperty"))
  {
    m_assetProperty = jsonValue.GetObject("assetProperty");
    m_assetPropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("list"))
  {
    Aws::Utils::Array<JsonView> listJsonList = jsonValue.GetArray("list");
    for(unsigned listIndex = 0; listIndex < listJsonList.GetLength(); ++listIndex)
    {
      m_list.push_back(listJsonList[listIndex].AsObject());
    }
    m_listHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputationModelDataBindingValue::Jsonize() const
{
  JsonValue payload;

  if(m_assetModelPropertyHasBeenSet)
  {
   payload.WithObject("assetModelProperty", m_assetModelProperty.Jsonize());

  }

  if(m_assetPropertyHasBeenSet)
  {
   payload.WithObject("assetProperty", m_assetProperty.Jsonize());

  }

  if(m_listHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listJsonList(m_list.size());
   for(unsigned listIndex = 0; listIndex < listJsonList.GetLength(); ++listIndex)
   {
     listJsonList[listIndex].AsObject(m_list[listIndex].Jsonize());
   }
   payload.WithArray("list", std::move(listJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
