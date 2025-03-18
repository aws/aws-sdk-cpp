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
    AWS_DATAEXCHANGE_API ApiGatewayApiAsset() = default;
    AWS_DATAEXCHANGE_API ApiGatewayApiAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ApiGatewayApiAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API description of the API asset.</p>
     */
    inline const Aws::String& GetApiDescription() const { return m_apiDescription; }
    inline bool ApiDescriptionHasBeenSet() const { return m_apiDescriptionHasBeenSet; }
    template<typename ApiDescriptionT = Aws::String>
    void SetApiDescription(ApiDescriptionT&& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = std::forward<ApiDescriptionT>(value); }
    template<typename ApiDescriptionT = Aws::String>
    ApiGatewayApiAsset& WithApiDescription(ApiDescriptionT&& value) { SetApiDescription(std::forward<ApiDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API endpoint of the API asset.</p>
     */
    inline const Aws::String& GetApiEndpoint() const { return m_apiEndpoint; }
    inline bool ApiEndpointHasBeenSet() const { return m_apiEndpointHasBeenSet; }
    template<typename ApiEndpointT = Aws::String>
    void SetApiEndpoint(ApiEndpointT&& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = std::forward<ApiEndpointT>(value); }
    template<typename ApiEndpointT = Aws::String>
    ApiGatewayApiAsset& WithApiEndpoint(ApiEndpointT&& value) { SetApiEndpoint(std::forward<ApiEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the API asset.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ApiGatewayApiAsset& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key of the API asset.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    ApiGatewayApiAsset& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API name of the API asset.</p>
     */
    inline const Aws::String& GetApiName() const { return m_apiName; }
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }
    template<typename ApiNameT = Aws::String>
    void SetApiName(ApiNameT&& value) { m_apiNameHasBeenSet = true; m_apiName = std::forward<ApiNameT>(value); }
    template<typename ApiNameT = Aws::String>
    ApiGatewayApiAsset& WithApiName(ApiNameT&& value) { SetApiName(std::forward<ApiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The download URL of the API specification of the API asset.</p>
     */
    inline const Aws::String& GetApiSpecificationDownloadUrl() const { return m_apiSpecificationDownloadUrl; }
    inline bool ApiSpecificationDownloadUrlHasBeenSet() const { return m_apiSpecificationDownloadUrlHasBeenSet; }
    template<typename ApiSpecificationDownloadUrlT = Aws::String>
    void SetApiSpecificationDownloadUrl(ApiSpecificationDownloadUrlT&& value) { m_apiSpecificationDownloadUrlHasBeenSet = true; m_apiSpecificationDownloadUrl = std::forward<ApiSpecificationDownloadUrlT>(value); }
    template<typename ApiSpecificationDownloadUrlT = Aws::String>
    ApiGatewayApiAsset& WithApiSpecificationDownloadUrl(ApiSpecificationDownloadUrlT&& value) { SetApiSpecificationDownloadUrl(std::forward<ApiSpecificationDownloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetApiSpecificationDownloadUrlExpiresAt() const { return m_apiSpecificationDownloadUrlExpiresAt; }
    inline bool ApiSpecificationDownloadUrlExpiresAtHasBeenSet() const { return m_apiSpecificationDownloadUrlExpiresAtHasBeenSet; }
    template<typename ApiSpecificationDownloadUrlExpiresAtT = Aws::Utils::DateTime>
    void SetApiSpecificationDownloadUrlExpiresAt(ApiSpecificationDownloadUrlExpiresAtT&& value) { m_apiSpecificationDownloadUrlExpiresAtHasBeenSet = true; m_apiSpecificationDownloadUrlExpiresAt = std::forward<ApiSpecificationDownloadUrlExpiresAtT>(value); }
    template<typename ApiSpecificationDownloadUrlExpiresAtT = Aws::Utils::DateTime>
    ApiGatewayApiAsset& WithApiSpecificationDownloadUrlExpiresAt(ApiSpecificationDownloadUrlExpiresAtT&& value) { SetApiSpecificationDownloadUrlExpiresAt(std::forward<ApiSpecificationDownloadUrlExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol type of the API asset.</p>
     */
    inline ProtocolType GetProtocolType() const { return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(ProtocolType value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline ApiGatewayApiAsset& WithProtocolType(ProtocolType value) { SetProtocolType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage of the API asset.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    ApiGatewayApiAsset& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_apiSpecificationDownloadUrlExpiresAt{};
    bool m_apiSpecificationDownloadUrlExpiresAtHasBeenSet = false;

    ProtocolType m_protocolType{ProtocolType::NOT_SET};
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
