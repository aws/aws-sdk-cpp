/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueSuccessEntry.h>
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

BatchGetAssetPropertyValueSuccessEntry::BatchGetAssetPropertyValueSuccessEntry() : 
    m_entryIdHasBeenSet(false),
    m_assetPropertyValueHasBeenSet(false)
{
}

BatchGetAssetPropertyValueSuccessEntry::BatchGetAssetPropertyValueSuccessEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_assetPropertyValueHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetAssetPropertyValueSuccessEntry& BatchGetAssetPropertyValueSuccessEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");

    m_entryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetPropertyValue"))
  {
    m_assetPropertyValue = jsonValue.GetObject("assetPropertyValue");

    m_assetPropertyValueHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetAssetPropertyValueSuccessEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_assetPropertyValueHasBeenSet)
  {
   payload.WithObject("assetPropertyValue", m_assetPropertyValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
