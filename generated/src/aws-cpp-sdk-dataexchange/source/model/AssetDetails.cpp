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
    m_s3SnapshotAssetHasBeenSet(false),
    m_redshiftDataShareAssetHasBeenSet(false),
    m_apiGatewayApiAssetHasBeenSet(false),
    m_s3DataAccessAssetHasBeenSet(false),
    m_lakeFormationDataPermissionAssetHasBeenSet(false)
{
}

AssetDetails::AssetDetails(JsonView jsonValue) : 
    m_s3SnapshotAssetHasBeenSet(false),
    m_redshiftDataShareAssetHasBeenSet(false),
    m_apiGatewayApiAssetHasBeenSet(false),
    m_s3DataAccessAssetHasBeenSet(false),
    m_lakeFormationDataPermissionAssetHasBeenSet(false)
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

  if(jsonValue.ValueExists("RedshiftDataShareAsset"))
  {
    m_redshiftDataShareAsset = jsonValue.GetObject("RedshiftDataShareAsset");

    m_redshiftDataShareAssetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiGatewayApiAsset"))
  {
    m_apiGatewayApiAsset = jsonValue.GetObject("ApiGatewayApiAsset");

    m_apiGatewayApiAssetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataAccessAsset"))
  {
    m_s3DataAccessAsset = jsonValue.GetObject("S3DataAccessAsset");

    m_s3DataAccessAssetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LakeFormationDataPermissionAsset"))
  {
    m_lakeFormationDataPermissionAsset = jsonValue.GetObject("LakeFormationDataPermissionAsset");

    m_lakeFormationDataPermissionAssetHasBeenSet = true;
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

  if(m_redshiftDataShareAssetHasBeenSet)
  {
   payload.WithObject("RedshiftDataShareAsset", m_redshiftDataShareAsset.Jsonize());

  }

  if(m_apiGatewayApiAssetHasBeenSet)
  {
   payload.WithObject("ApiGatewayApiAsset", m_apiGatewayApiAsset.Jsonize());

  }

  if(m_s3DataAccessAssetHasBeenSet)
  {
   payload.WithObject("S3DataAccessAsset", m_s3DataAccessAsset.Jsonize());

  }

  if(m_lakeFormationDataPermissionAssetHasBeenSet)
  {
   payload.WithObject("LakeFormationDataPermissionAsset", m_lakeFormationDataPermissionAsset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
