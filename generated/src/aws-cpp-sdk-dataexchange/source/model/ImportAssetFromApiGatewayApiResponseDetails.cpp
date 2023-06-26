/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ImportAssetFromApiGatewayApiResponseDetails.h>
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

ImportAssetFromApiGatewayApiResponseDetails::ImportAssetFromApiGatewayApiResponseDetails() : 
    m_apiDescriptionHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiSpecificationMd5HashHasBeenSet(false),
    m_apiSpecificationUploadUrlHasBeenSet(false),
    m_apiSpecificationUploadUrlExpiresAtHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_stageHasBeenSet(false)
{
}

ImportAssetFromApiGatewayApiResponseDetails::ImportAssetFromApiGatewayApiResponseDetails(JsonView jsonValue) : 
    m_apiDescriptionHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiSpecificationMd5HashHasBeenSet(false),
    m_apiSpecificationUploadUrlHasBeenSet(false),
    m_apiSpecificationUploadUrlExpiresAtHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_stageHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetFromApiGatewayApiResponseDetails& ImportAssetFromApiGatewayApiResponseDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiDescription"))
  {
    m_apiDescription = jsonValue.GetString("ApiDescription");

    m_apiDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiId"))
  {
    m_apiId = jsonValue.GetString("ApiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiKey"))
  {
    m_apiKey = jsonValue.GetString("ApiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiName"))
  {
    m_apiName = jsonValue.GetString("ApiName");

    m_apiNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiSpecificationMd5Hash"))
  {
    m_apiSpecificationMd5Hash = jsonValue.GetString("ApiSpecificationMd5Hash");

    m_apiSpecificationMd5HashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiSpecificationUploadUrl"))
  {
    m_apiSpecificationUploadUrl = jsonValue.GetString("ApiSpecificationUploadUrl");

    m_apiSpecificationUploadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiSpecificationUploadUrlExpiresAt"))
  {
    m_apiSpecificationUploadUrlExpiresAt = jsonValue.GetString("ApiSpecificationUploadUrlExpiresAt");

    m_apiSpecificationUploadUrlExpiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtocolType"))
  {
    m_protocolType = ProtocolTypeMapper::GetProtocolTypeForName(jsonValue.GetString("ProtocolType"));

    m_protocolTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stage"))
  {
    m_stage = jsonValue.GetString("Stage");

    m_stageHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportAssetFromApiGatewayApiResponseDetails::Jsonize() const
{
  JsonValue payload;

  if(m_apiDescriptionHasBeenSet)
  {
   payload.WithString("ApiDescription", m_apiDescription);

  }

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("ApiId", m_apiId);

  }

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("ApiKey", m_apiKey);

  }

  if(m_apiNameHasBeenSet)
  {
   payload.WithString("ApiName", m_apiName);

  }

  if(m_apiSpecificationMd5HashHasBeenSet)
  {
   payload.WithString("ApiSpecificationMd5Hash", m_apiSpecificationMd5Hash);

  }

  if(m_apiSpecificationUploadUrlHasBeenSet)
  {
   payload.WithString("ApiSpecificationUploadUrl", m_apiSpecificationUploadUrl);

  }

  if(m_apiSpecificationUploadUrlExpiresAtHasBeenSet)
  {
   payload.WithString("ApiSpecificationUploadUrlExpiresAt", m_apiSpecificationUploadUrlExpiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_protocolTypeHasBeenSet)
  {
   payload.WithString("ProtocolType", ProtocolTypeMapper::GetNameForProtocolType(m_protocolType));
  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("Stage", m_stage);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
