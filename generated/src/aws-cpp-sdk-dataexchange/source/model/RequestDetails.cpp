/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RequestDetails.h>
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

RequestDetails::RequestDetails() : 
    m_exportAssetToSignedUrlHasBeenSet(false),
    m_exportAssetsToS3HasBeenSet(false),
    m_exportRevisionsToS3HasBeenSet(false),
    m_importAssetFromSignedUrlHasBeenSet(false),
    m_importAssetsFromS3HasBeenSet(false),
    m_importAssetsFromRedshiftDataSharesHasBeenSet(false),
    m_importAssetFromApiGatewayApiHasBeenSet(false),
    m_createS3DataAccessFromS3BucketHasBeenSet(false),
    m_importAssetsFromLakeFormationTagPolicyHasBeenSet(false)
{
}

RequestDetails::RequestDetails(JsonView jsonValue) : 
    m_exportAssetToSignedUrlHasBeenSet(false),
    m_exportAssetsToS3HasBeenSet(false),
    m_exportRevisionsToS3HasBeenSet(false),
    m_importAssetFromSignedUrlHasBeenSet(false),
    m_importAssetsFromS3HasBeenSet(false),
    m_importAssetsFromRedshiftDataSharesHasBeenSet(false),
    m_importAssetFromApiGatewayApiHasBeenSet(false),
    m_createS3DataAccessFromS3BucketHasBeenSet(false),
    m_importAssetsFromLakeFormationTagPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

RequestDetails& RequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportAssetToSignedUrl"))
  {
    m_exportAssetToSignedUrl = jsonValue.GetObject("ExportAssetToSignedUrl");

    m_exportAssetToSignedUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportAssetsToS3"))
  {
    m_exportAssetsToS3 = jsonValue.GetObject("ExportAssetsToS3");

    m_exportAssetsToS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportRevisionsToS3"))
  {
    m_exportRevisionsToS3 = jsonValue.GetObject("ExportRevisionsToS3");

    m_exportRevisionsToS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportAssetFromSignedUrl"))
  {
    m_importAssetFromSignedUrl = jsonValue.GetObject("ImportAssetFromSignedUrl");

    m_importAssetFromSignedUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportAssetsFromS3"))
  {
    m_importAssetsFromS3 = jsonValue.GetObject("ImportAssetsFromS3");

    m_importAssetsFromS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportAssetsFromRedshiftDataShares"))
  {
    m_importAssetsFromRedshiftDataShares = jsonValue.GetObject("ImportAssetsFromRedshiftDataShares");

    m_importAssetsFromRedshiftDataSharesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportAssetFromApiGatewayApi"))
  {
    m_importAssetFromApiGatewayApi = jsonValue.GetObject("ImportAssetFromApiGatewayApi");

    m_importAssetFromApiGatewayApiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateS3DataAccessFromS3Bucket"))
  {
    m_createS3DataAccessFromS3Bucket = jsonValue.GetObject("CreateS3DataAccessFromS3Bucket");

    m_createS3DataAccessFromS3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportAssetsFromLakeFormationTagPolicy"))
  {
    m_importAssetsFromLakeFormationTagPolicy = jsonValue.GetObject("ImportAssetsFromLakeFormationTagPolicy");

    m_importAssetsFromLakeFormationTagPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_exportAssetToSignedUrlHasBeenSet)
  {
   payload.WithObject("ExportAssetToSignedUrl", m_exportAssetToSignedUrl.Jsonize());

  }

  if(m_exportAssetsToS3HasBeenSet)
  {
   payload.WithObject("ExportAssetsToS3", m_exportAssetsToS3.Jsonize());

  }

  if(m_exportRevisionsToS3HasBeenSet)
  {
   payload.WithObject("ExportRevisionsToS3", m_exportRevisionsToS3.Jsonize());

  }

  if(m_importAssetFromSignedUrlHasBeenSet)
  {
   payload.WithObject("ImportAssetFromSignedUrl", m_importAssetFromSignedUrl.Jsonize());

  }

  if(m_importAssetsFromS3HasBeenSet)
  {
   payload.WithObject("ImportAssetsFromS3", m_importAssetsFromS3.Jsonize());

  }

  if(m_importAssetsFromRedshiftDataSharesHasBeenSet)
  {
   payload.WithObject("ImportAssetsFromRedshiftDataShares", m_importAssetsFromRedshiftDataShares.Jsonize());

  }

  if(m_importAssetFromApiGatewayApiHasBeenSet)
  {
   payload.WithObject("ImportAssetFromApiGatewayApi", m_importAssetFromApiGatewayApi.Jsonize());

  }

  if(m_createS3DataAccessFromS3BucketHasBeenSet)
  {
   payload.WithObject("CreateS3DataAccessFromS3Bucket", m_createS3DataAccessFromS3Bucket.Jsonize());

  }

  if(m_importAssetsFromLakeFormationTagPolicyHasBeenSet)
  {
   payload.WithObject("ImportAssetsFromLakeFormationTagPolicy", m_importAssetsFromLakeFormationTagPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
