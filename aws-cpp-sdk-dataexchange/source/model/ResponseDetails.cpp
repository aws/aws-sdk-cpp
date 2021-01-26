/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ResponseDetails.h>
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

ResponseDetails::ResponseDetails() : 
    m_exportAssetToSignedUrlHasBeenSet(false),
    m_exportAssetsToS3HasBeenSet(false),
    m_importAssetFromSignedUrlHasBeenSet(false),
    m_importAssetsFromS3HasBeenSet(false)
{
}

ResponseDetails::ResponseDetails(JsonView jsonValue) : 
    m_exportAssetToSignedUrlHasBeenSet(false),
    m_exportAssetsToS3HasBeenSet(false),
    m_importAssetFromSignedUrlHasBeenSet(false),
    m_importAssetsFromS3HasBeenSet(false)
{
  *this = jsonValue;
}

ResponseDetails& ResponseDetails::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ResponseDetails::Jsonize() const
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

  if(m_importAssetFromSignedUrlHasBeenSet)
  {
   payload.WithObject("ImportAssetFromSignedUrl", m_importAssetFromSignedUrl.Jsonize());

  }

  if(m_importAssetsFromS3HasBeenSet)
  {
   payload.WithObject("ImportAssetsFromS3", m_importAssetsFromS3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
