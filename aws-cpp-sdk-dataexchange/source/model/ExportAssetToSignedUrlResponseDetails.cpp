/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dataexchange/model/ExportAssetToSignedUrlResponseDetails.h>
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

ExportAssetToSignedUrlResponseDetails::ExportAssetToSignedUrlResponseDetails() : 
    m_assetIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_signedUrlHasBeenSet(false),
    m_signedUrlExpiresAtHasBeenSet(false)
{
}

ExportAssetToSignedUrlResponseDetails::ExportAssetToSignedUrlResponseDetails(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_signedUrlHasBeenSet(false),
    m_signedUrlExpiresAtHasBeenSet(false)
{
  *this = jsonValue;
}

ExportAssetToSignedUrlResponseDetails& ExportAssetToSignedUrlResponseDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
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

JsonValue ExportAssetToSignedUrlResponseDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

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
