/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The request details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromApiGatewayApiRequestDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetFromApiGatewayApiRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiRequestDetails() = default;
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API description. Markdown supported.</p>
     */
    inline const Aws::String& GetApiDescription() const { return m_apiDescription; }
    inline bool ApiDescriptionHasBeenSet() const { return m_apiDescriptionHasBeenSet; }
    template<typename ApiDescriptionT = Aws::String>
    void SetApiDescription(ApiDescriptionT&& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = std::forward<ApiDescriptionT>(value); }
    template<typename ApiDescriptionT = Aws::String>
    ImportAssetFromApiGatewayApiRequestDetails& WithApiDescription(ApiDescriptionT&& value) { SetApiDescription(std::forward<ApiDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Gateway API ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ImportAssetFromApiGatewayApiRequestDetails& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Gateway API key.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    ImportAssetFromApiGatewayApiRequestDetails& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
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
    ImportAssetFromApiGatewayApiRequestDetails& WithApiName(ApiNameT&& value) { SetApiName(std::forward<ApiNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded MD5 hash of the OpenAPI 3.0 JSON API specification file.
     * It is used to ensure the integrity of the file.</p>
     */
    inline const Aws::String& GetApiSpecificationMd5Hash() const { return m_apiSpecificationMd5Hash; }
    inline bool ApiSpecificationMd5HashHasBeenSet() const { return m_apiSpecificationMd5HashHasBeenSet; }
    template<typename ApiSpecificationMd5HashT = Aws::String>
    void SetApiSpecificationMd5Hash(ApiSpecificationMd5HashT&& value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash = std::forward<ApiSpecificationMd5HashT>(value); }
    template<typename ApiSpecificationMd5HashT = Aws::String>
    ImportAssetFromApiGatewayApiRequestDetails& WithApiSpecificationMd5Hash(ApiSpecificationMd5HashT&& value) { SetApiSpecificationMd5Hash(std::forward<ApiSpecificationMd5HashT>(value)); return *this;}
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
    ImportAssetFromApiGatewayApiRequestDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol type.</p>
     */
    inline ProtocolType GetProtocolType() const { return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(ProtocolType value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithProtocolType(ProtocolType value) { SetProtocolType(value); return *this;}
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
    ImportAssetFromApiGatewayApiRequestDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
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
    ImportAssetFromApiGatewayApiRequestDetails& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
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
