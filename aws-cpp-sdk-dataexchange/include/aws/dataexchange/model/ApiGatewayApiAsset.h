/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/ProtocolType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The API Gateway API that is the asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ApiGatewayApiAsset">AWS
   * API Reference</a></p>
   */
  class ApiGatewayApiAsset
  {
  public:
    AWS_DATAEXCHANGE_API ApiGatewayApiAsset();
    AWS_DATAEXCHANGE_API ApiGatewayApiAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ApiGatewayApiAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API description of the API asset.</p>
     */
    inline const Aws::String& GetApiDescription() const{ return m_apiDescription; }

    /**
     * <p>The API description of the API asset.</p>
     */
    inline bool ApiDescriptionHasBeenSet() const { return m_apiDescriptionHasBeenSet; }

    /**
     * <p>The API description of the API asset.</p>
     */
    inline void SetApiDescription(const Aws::String& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = value; }

    /**
     * <p>The API description of the API asset.</p>
     */
    inline void SetApiDescription(Aws::String&& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = std::move(value); }

    /**
     * <p>The API description of the API asset.</p>
     */
    inline void SetApiDescription(const char* value) { m_apiDescriptionHasBeenSet = true; m_apiDescription.assign(value); }

    /**
     * <p>The API description of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiDescription(const Aws::String& value) { SetApiDescription(value); return *this;}

    /**
     * <p>The API description of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiDescription(Aws::String&& value) { SetApiDescription(std::move(value)); return *this;}

    /**
     * <p>The API description of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiDescription(const char* value) { SetApiDescription(value); return *this;}


    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline const Aws::String& GetApiEndpoint() const{ return m_apiEndpoint; }

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline bool ApiEndpointHasBeenSet() const { return m_apiEndpointHasBeenSet; }

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline void SetApiEndpoint(const Aws::String& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = value; }

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline void SetApiEndpoint(Aws::String&& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = std::move(value); }

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline void SetApiEndpoint(const char* value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint.assign(value); }

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiEndpoint(const Aws::String& value) { SetApiEndpoint(value); return *this;}

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiEndpoint(Aws::String&& value) { SetApiEndpoint(std::move(value)); return *this;}

    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiEndpoint(const char* value) { SetApiEndpoint(value); return *this;}


    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The API key of the API asset.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key of the API asset.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The API key of the API asset.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The API key of the API asset.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The API key of the API asset.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The API key of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The API key of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>The API name of the API asset.</p>
     */
    inline const Aws::String& GetApiName() const{ return m_apiName; }

    /**
     * <p>The API name of the API asset.</p>
     */
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }

    /**
     * <p>The API name of the API asset.</p>
     */
    inline void SetApiName(const Aws::String& value) { m_apiNameHasBeenSet = true; m_apiName = value; }

    /**
     * <p>The API name of the API asset.</p>
     */
    inline void SetApiName(Aws::String&& value) { m_apiNameHasBeenSet = true; m_apiName = std::move(value); }

    /**
     * <p>The API name of the API asset.</p>
     */
    inline void SetApiName(const char* value) { m_apiNameHasBeenSet = true; m_apiName.assign(value); }

    /**
     * <p>The API name of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiName(const Aws::String& value) { SetApiName(value); return *this;}

    /**
     * <p>The API name of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiName(Aws::String&& value) { SetApiName(std::move(value)); return *this;}

    /**
     * <p>The API name of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiName(const char* value) { SetApiName(value); return *this;}


    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline const Aws::String& GetApiSpecificationDownloadUrl() const{ return m_apiSpecificationDownloadUrl; }

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline bool ApiSpecificationDownloadUrlHasBeenSet() const { return m_apiSpecificationDownloadUrlHasBeenSet; }

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline void SetApiSpecificationDownloadUrl(const Aws::String& value) { m_apiSpecificationDownloadUrlHasBeenSet = true; m_apiSpecificationDownloadUrl = value; }

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline void SetApiSpecificationDownloadUrl(Aws::String&& value) { m_apiSpecificationDownloadUrlHasBeenSet = true; m_apiSpecificationDownloadUrl = std::move(value); }

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline void SetApiSpecificationDownloadUrl(const char* value) { m_apiSpecificationDownloadUrlHasBeenSet = true; m_apiSpecificationDownloadUrl.assign(value); }

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiSpecificationDownloadUrl(const Aws::String& value) { SetApiSpecificationDownloadUrl(value); return *this;}

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiSpecificationDownloadUrl(Aws::String&& value) { SetApiSpecificationDownloadUrl(std::move(value)); return *this;}

    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithApiSpecificationDownloadUrl(const char* value) { SetApiSpecificationDownloadUrl(value); return *this;}


    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetApiSpecificationDownloadUrlExpiresAt() const{ return m_apiSpecificationDownloadUrlExpiresAt; }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline bool ApiSpecificationDownloadUrlExpiresAtHasBeenSet() const { return m_apiSpecificationDownloadUrlExpiresAtHasBeenSet; }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline void SetApiSpecificationDownloadUrlExpiresAt(const Aws::Utils::DateTime& value) { m_apiSpecificationDownloadUrlExpiresAtHasBeenSet = true; m_apiSpecificationDownloadUrlExpiresAt = value; }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline void SetApiSpecificationDownloadUrlExpiresAt(Aws::Utils::DateTime&& value) { m_apiSpecificationDownloadUrlExpiresAtHasBeenSet = true; m_apiSpecificationDownloadUrlExpiresAt = std::move(value); }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline ApiGatewayApiAsset& WithApiSpecificationDownloadUrlExpiresAt(const Aws::Utils::DateTime& value) { SetApiSpecificationDownloadUrlExpiresAt(value); return *this;}

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline ApiGatewayApiAsset& WithApiSpecificationDownloadUrlExpiresAt(Aws::Utils::DateTime&& value) { SetApiSpecificationDownloadUrlExpiresAt(std::move(value)); return *this;}


    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }

    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }

    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline void SetProtocolType(const ProtocolType& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }

    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline void SetProtocolType(ProtocolType&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }

    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}


    /**
     * <p>The stage of the API asset.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The stage of the API asset.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The stage of the API asset.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The stage of the API asset.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The stage of the API asset.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>The stage of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The stage of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The stage of the API asset.</p>
     */
    inline ApiGatewayApiAsset& WithStage(const char* value) { SetStage(value); return *this;}

  private:

    Aws::String m_apiDescription;
    bool m_apiDescriptionHasBeenSet = false;

    Aws::String m_apiEndpoint;
    bool m_apiEndpointHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_apiName;
    bool m_apiNameHasBeenSet = false;

    Aws::String m_apiSpecificationDownloadUrl;
    bool m_apiSpecificationDownloadUrlHasBeenSet = false;

    Aws::Utils::DateTime m_apiSpecificationDownloadUrlExpiresAt;
    bool m_apiSpecificationDownloadUrlExpiresAtHasBeenSet = false;

    ProtocolType m_protocolType;
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
