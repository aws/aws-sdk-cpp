/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DataBindingValueFilter.h>
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

DataBindingValueFilter::DataBindingValueFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

DataBindingValueFilter& DataBindingValueFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("asset"))
  {
    m_asset = jsonValue.GetObject("asset");
    m_assetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModel"))
  {
    m_assetModel = jsonValue.GetObject("assetModel");
    m_assetModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetProperty"))
  {
    m_assetProperty = jsonValue.GetObject("assetProperty");
    m_assetPropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assetModelProperty"))
  {
    m_assetModelProperty = jsonValue.GetObject("assetModelProperty");
    m_assetModelPropertyHasBeenSet = true;
  }
  return *this;
}

JsonValue DataBindingValueFilter::Jsonize() const
{
  JsonValue payload;

  if(m_assetHasBeenSet)
  {
   payload.WithObject("asset", m_asset.Jsonize());

  }

  if(m_assetModelHasBeenSet)
  {
   payload.WithObject("assetModel", m_assetModel.Jsonize());

  }

  if(m_assetPropertyHasBeenSet)
  {
   payload.WithObject("assetProperty", m_assetProperty.Jsonize());

  }

  if(m_assetModelPropertyHasBeenSet)
  {
   payload.WithObject("assetModelProperty", m_assetModelProperty.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
