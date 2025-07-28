/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DataBindingValue.h>
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

DataBindingValue::DataBindingValue(JsonView jsonValue)
{
  *this = jsonValue;
}

DataBindingValue& DataBindingValue::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue DataBindingValue::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
