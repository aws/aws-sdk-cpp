/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AssetDetails.h>
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

AssetDetails::AssetDetails() : 
    m_s3SnapshotAssetHasBeenSet(false)
{
}

AssetDetails::AssetDetails(JsonView jsonValue) : 
    m_s3SnapshotAssetHasBeenSet(false)
{
  *this = jsonValue;
}

AssetDetails& AssetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3SnapshotAsset"))
  {
    m_s3SnapshotAsset = jsonValue.GetObject("S3SnapshotAsset");

    m_s3SnapshotAssetHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_s3SnapshotAssetHasBeenSet)
  {
   payload.WithObject("S3SnapshotAsset", m_s3SnapshotAsset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
