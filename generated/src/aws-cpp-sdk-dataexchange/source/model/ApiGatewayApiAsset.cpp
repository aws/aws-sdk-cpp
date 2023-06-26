/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ApiGatewayApiAsset.h>
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

ApiGatewayApiAsset::ApiGatewayApiAsset() : 
    m_apiDescriptionHasBeenSet(false),
    m_apiEndpointHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiSpecificationDownloadUrlHasBeenSet(false),
    m_apiSpecificationDownloadUrlExpiresAtHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_stageHasBeenSet(false)
{
}

ApiGatewayApiAsset::ApiGatewayApiAsset(JsonView jsonValue) : 
    m_apiDescriptionHasBeenSet(false),
    m_apiEndpointHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiSpecificationDownloadUrlHasBeenSet(false),
    m_apiSpecificationDownloadUrlExpiresAtHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_stageHasBeenSet(false)
{
  *this = jsonValue;
}

ApiGatewayApiAsset& ApiGatewayApiAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiDescription"))
  {
    m_apiDescription = jsonValue.GetString("ApiDescription");

    m_apiDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiEndpoint"))
  {
    m_apiEndpoint = jsonValue.GetString("ApiEndpoint");

    m_apiEndpointHasBeenSet = true;
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

  if(jsonValue.ValueExists("ApiSpecificationDownloadUrl"))
  {
    m_apiSpecificationDownloadUrl = jsonValue.GetString("ApiSpecificationDownloadUrl");

    m_apiSpecificationDownloadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiSpecificationDownloadUrlExpiresAt"))
  {
    m_apiSpecificationDownloadUrlExpiresAt = jsonValue.GetString("ApiSpecificationDownloadUrlExpiresAt");

    m_apiSpecificationDownloadUrlExpiresAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtocolType"))
  {
    m_protocolType = ProtocolTypeMapper::GetProtocolTypeForName(jsonValue.GetString("ProtocolType"));

    m_protocolTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stage"))
  {
    m_stage = jsonValue.GetString("Stage");

    m_stageHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiGatewayApiAsset::Jsonize() const
{
  JsonValue payload;

  if(m_apiDescriptionHasBeenSet)
  {
   payload.WithString("ApiDescription", m_apiDescription);

  }

  if(m_apiEndpointHasBeenSet)
  {
   payload.WithString("ApiEndpoint", m_apiEndpoint);

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

  if(m_apiSpecificationDownloadUrlHasBeenSet)
  {
   payload.WithString("ApiSpecificationDownloadUrl", m_apiSpecificationDownloadUrl);

  }

  if(m_apiSpecificationDownloadUrlExpiresAtHasBeenSet)
  {
   payload.WithString("ApiSpecificationDownloadUrlExpiresAt", m_apiSpecificationDownloadUrlExpiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_protocolTypeHasBeenSet)
  {
   payload.WithString("ProtocolType", ProtocolTypeMapper::GetNameForProtocolType(m_protocolType));
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
