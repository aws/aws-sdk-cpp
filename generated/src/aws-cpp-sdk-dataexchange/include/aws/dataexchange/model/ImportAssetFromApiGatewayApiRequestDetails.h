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
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiRequestDetails();
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API description. Markdown supported.</p>
     */
    inline const Aws::String& GetApiDescription() const{ return m_apiDescription; }
    inline bool ApiDescriptionHasBeenSet() const { return m_apiDescriptionHasBeenSet; }
    inline void SetApiDescription(const Aws::String& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = value; }
    inline void SetApiDescription(Aws::String&& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = std::move(value); }
    inline void SetApiDescription(const char* value) { m_apiDescriptionHasBeenSet = true; m_apiDescription.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiDescription(const Aws::String& value) { SetApiDescription(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiDescription(Aws::String&& value) { SetApiDescription(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiDescription(const char* value) { SetApiDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Gateway API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API Gateway API key.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiKey(const char* value) { SetApiKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API name.</p>
     */
    inline const Aws::String& GetApiName() const{ return m_apiName; }
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }
    inline void SetApiName(const Aws::String& value) { m_apiNameHasBeenSet = true; m_apiName = value; }
    inline void SetApiName(Aws::String&& value) { m_apiNameHasBeenSet = true; m_apiName = std::move(value); }
    inline void SetApiName(const char* value) { m_apiNameHasBeenSet = true; m_apiName.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiName(const Aws::String& value) { SetApiName(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiName(Aws::String&& value) { SetApiName(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiName(const char* value) { SetApiName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded MD5 hash of the OpenAPI 3.0 JSON API specification file.
     * It is used to ensure the integrity of the file.</p>
     */
    inline const Aws::String& GetApiSpecificationMd5Hash() const{ return m_apiSpecificationMd5Hash; }
    inline bool ApiSpecificationMd5HashHasBeenSet() const { return m_apiSpecificationMd5HashHasBeenSet; }
    inline void SetApiSpecificationMd5Hash(const Aws::String& value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash = value; }
    inline void SetApiSpecificationMd5Hash(Aws::String&& value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash = std::move(value); }
    inline void SetApiSpecificationMd5Hash(const char* value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiSpecificationMd5Hash(const Aws::String& value) { SetApiSpecificationMd5Hash(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiSpecificationMd5Hash(Aws::String&& value) { SetApiSpecificationMd5Hash(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithApiSpecificationMd5Hash(const char* value) { SetApiSpecificationMd5Hash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set ID.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol type.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(const ProtocolType& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline void SetProtocolType(ProtocolType&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }
    inline ImportAssetFromApiGatewayApiRequestDetails& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline ImportAssetFromApiGatewayApiRequestDetails& WithStage(const char* value) { SetStage(value); return *this;}
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

    ProtocolType m_protocolType;
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
