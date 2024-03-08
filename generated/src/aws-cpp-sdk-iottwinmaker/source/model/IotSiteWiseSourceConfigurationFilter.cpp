/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/IotSiteWiseSourceConfigurationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

IotSiteWiseSourceConfigurationFilter::IotSiteWiseSourceConfigurationFilter() : 
    m_filterByAssetModelHasBeenSet(false),
    m_filterByAssetHasBeenSet(false)
{
}

IotSiteWiseSourceConfigurationFilter::IotSiteWiseSourceConfigurationFilter(JsonView jsonValue) : 
    m_filterByAssetModelHasBeenSet(false),
    m_filterByAssetHasBeenSet(false)
{
  *this = jsonValue;
}

IotSiteWiseSourceConfigurationFilter& IotSiteWiseSourceConfigurationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterByAssetModel"))
  {
    m_filterByAssetModel = jsonValue.GetObject("filterByAssetModel");

    m_filterByAssetModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterByAsset"))
  {
    m_filterByAsset = jsonValue.GetObject("filterByAsset");

    m_filterByAssetHasBeenSet = true;
  }

  return *this;
}

JsonValue IotSiteWiseSourceConfigurationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterByAssetModelHasBeenSet)
  {
   payload.WithObject("filterByAssetModel", m_filterByAssetModel.Jsonize());

  }

  if(m_filterByAssetHasBeenSet)
  {
   payload.WithObject("filterByAsset", m_filterByAsset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
