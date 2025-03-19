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
   * <p>The response details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromApiGatewayApiResponseDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetFromApiGatewayApiResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiResponseDetails() = default;
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API description.</p>
     */
    inline const Aws::String& GetApiDescription() const { return m_apiDescription; }
    inline bool ApiDescriptionHasBeenSet() const { return m_apiDescriptionHasBeenSet; }
    template<typename ApiDescriptionT = Aws::String>
    void SetApiDescription(ApiDescriptionT&& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = std::forward<ApiDescriptionT>(value); }
    template<typename ApiDescriptionT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiDescription(ApiDescriptionT&& value) { SetApiDescription(std::forward<ApiDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API name.</p>
     */
    inline const Aws::String& GetApiName() const { return m_apiName; }
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }
    template<typename ApiNameT = Aws::String>
    void SetApiName(ApiNameT&& value) { m_apiNameHasBeenSet = true; m_apiName = std::forward<ApiNameT>(value); }
    template<typename ApiNameT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiName(ApiNameT&& value) { SetApiName(std::forward<ApiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline const Aws::String& GetApiSpecificationMd5Hash() const { return m_apiSpecificationMd5Hash; }
    inline bool ApiSpecificationMd5HashHasBeenSet() const { return m_apiSpecificationMd5HashHasBeenSet; }
    template<typename ApiSpecificationMd5HashT = Aws::String>
    void SetApiSpecificationMd5Hash(ApiSpecificationMd5HashT&& value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash = std::forward<ApiSpecificationMd5HashT>(value); }
    template<typename ApiSpecificationMd5HashT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationMd5Hash(ApiSpecificationMd5HashT&& value) { SetApiSpecificationMd5Hash(std::forward<ApiSpecificationMd5HashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline const Aws::String& GetApiSpecificationUploadUrl() const { return m_apiSpecificationUploadUrl; }
    inline bool ApiSpecificationUploadUrlHasBeenSet() const { return m_apiSpecificationUploadUrlHasBeenSet; }
    template<typename ApiSpecificationUploadUrlT = Aws::String>
    void SetApiSpecificationUploadUrl(ApiSpecificationUploadUrlT&& value) { m_apiSpecificationUploadUrlHasBeenSet = true; m_apiSpecificationUploadUrl = std::forward<ApiSpecificationUploadUrlT>(value); }
    template<typename ApiSpecificationUploadUrlT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrl(ApiSpecificationUploadUrlT&& value) { SetApiSpecificationUploadUrl(std::forward<ApiSpecificationUploadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetApiSpecificationUploadUrlExpiresAt() const { return m_apiSpecificationUploadUrlExpiresAt; }
    inline bool ApiSpecificationUploadUrlExpiresAtHasBeenSet() const { return m_apiSpecificationUploadUrlExpiresAtHasBeenSet; }
    template<typename ApiSpecificationUploadUrlExpiresAtT = Aws::Utils::DateTime>
    void SetApiSpecificationUploadUrlExpiresAt(ApiSpecificationUploadUrlExpiresAtT&& value) { m_apiSpecificationUploadUrlExpiresAtHasBeenSet = true; m_apiSpecificationUploadUrlExpiresAt = std::forward<ApiSpecificationUploadUrlExpiresAtT>(value); }
    template<typename ApiSpecificationUploadUrlExpiresAtT = Aws::Utils::DateTime>
    ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrlExpiresAt(ApiSpecificationUploadUrlExpiresAtT&& value) { SetApiSpecificationUploadUrlExpiresAt(std::forward<ApiSpecificationUploadUrlExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set ID.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol type.</p>
     */
    inline ProtocolType GetProtocolType() const { return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(ProtocolType value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline ImportAssetFromApiGatewayApiResponseDetails& WithProtocolType(ProtocolType value) { SetProtocolType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    ImportAssetFromApiGatewayApiResponseDetails& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiDescription;
    bool m_apiDescriptionHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_apiName;
    bool m_apiNameHasBeenSet = false;

    Aws::String m_apiSpecificationMd5Hash;
    bool m_apiSpecificationMd5HashHasBeenSet = false;

    Aws::String m_apiSpecificationUploadUrl;
    bool m_apiSpecificationUploadUrlHasBeenSet = false;

    Aws::Utils::DateTime m_apiSpecificationUploadUrlExpiresAt{};
    bool m_apiSpecificationUploadUrlExpiresAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    ProtocolType m_protocolType{ProtocolType::NOT_SET};
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
