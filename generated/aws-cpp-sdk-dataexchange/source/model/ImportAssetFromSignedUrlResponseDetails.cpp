﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ImportAssetFromSignedUrlResponseDetails.h>
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

ImportAssetFromSignedUrlResponseDetails::ImportAssetFromSignedUrlResponseDetails() : 
    m_assetNameHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_md5HashHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_signedUrlHasBeenSet(false),
    m_signedUrlExpiresAtHasBeenSet(false)
{
}

ImportAssetFromSignedUrlResponseDetails::ImportAssetFromSignedUrlResponseDetails(JsonView jsonValue) : 
    m_assetNameHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_md5HashHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_signedUrlHasBeenSet(false),
    m_signedUrlExpiresAtHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetFromSignedUrlResponseDetails& ImportAssetFromSignedUrlResponseDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetName"))
  {
    m_assetName = jsonValue.GetString("AssetName");

    m_assetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Md5Hash"))
  {
    m_md5Hash = jsonValue.GetString("Md5Hash");

    m_md5HashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignedUrl"))
  {
    m_signedUrl = jsonValue.GetString("SignedUrl");

    m_signedUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignedUrlExpiresAt"))
  {
    m_signedUrlExpiresAt = jsonValue.GetString("SignedUrlExpiresAt");

    m_signedUrlExpiresAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportAssetFromSignedUrlResponseDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetNameHasBeenSet)
  {
   payload.WithString("AssetName", m_assetName);

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_md5HashHasBeenSet)
  {
   payload.WithString("Md5Hash", m_md5Hash);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  if(m_signedUrlHasBeenSet)
  {
   payload.WithString("SignedUrl", m_signedUrl);

  }

  if(m_signedUrlExpiresAtHasBeenSet)
  {
   payload.WithString("SignedUrlExpiresAt", m_signedUrlExpiresAt.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
