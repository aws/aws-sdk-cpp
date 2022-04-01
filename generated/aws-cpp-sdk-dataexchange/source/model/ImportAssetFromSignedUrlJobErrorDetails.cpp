/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ImportAssetFromSignedUrlJobErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ImportAssetFromSignedUrlJobErrorDetails::ImportAssetFromSignedUrlJobErrorDetails() : 
    m_assetNameHasBeenSet(false)
{
}

ImportAssetFromSignedUrlJobErrorDetails::ImportAssetFromSignedUrlJobErrorDetails(JsonView jsonValue) : 
    m_assetNameHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetFromSignedUrlJobErrorDetails& ImportAssetFromSignedUrlJobErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetName"))
  {
    m_assetName = jsonValue.GetString("AssetName");

    m_assetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportAssetFromSignedUrlJobErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetNameHasBeenSet)
  {
   payload.WithString("AssetName", m_assetName);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
