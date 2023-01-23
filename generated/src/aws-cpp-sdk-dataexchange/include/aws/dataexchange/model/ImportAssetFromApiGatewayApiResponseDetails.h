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
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiResponseDetails();
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromApiGatewayApiResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API description.</p>
     */
    inline const Aws::String& GetApiDescription() const{ return m_apiDescription; }

    /**
     * <p>The API description.</p>
     */
    inline bool ApiDescriptionHasBeenSet() const { return m_apiDescriptionHasBeenSet; }

    /**
     * <p>The API description.</p>
     */
    inline void SetApiDescription(const Aws::String& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = value; }

    /**
     * <p>The API description.</p>
     */
    inline void SetApiDescription(Aws::String&& value) { m_apiDescriptionHasBeenSet = true; m_apiDescription = std::move(value); }

    /**
     * <p>The API description.</p>
     */
    inline void SetApiDescription(const char* value) { m_apiDescriptionHasBeenSet = true; m_apiDescription.assign(value); }

    /**
     * <p>The API description.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiDescription(const Aws::String& value) { SetApiDescription(value); return *this;}

    /**
     * <p>The API description.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiDescription(Aws::String&& value) { SetApiDescription(std::move(value)); return *this;}

    /**
     * <p>The API description.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiDescription(const char* value) { SetApiDescription(value); return *this;}


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The API key.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The API key.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The API key.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The API key.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The API key.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The API key.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p>The API name.</p>
     */
    inline const Aws::String& GetApiName() const{ return m_apiName; }

    /**
     * <p>The API name.</p>
     */
    inline bool ApiNameHasBeenSet() const { return m_apiNameHasBeenSet; }

    /**
     * <p>The API name.</p>
     */
    inline void SetApiName(const Aws::String& value) { m_apiNameHasBeenSet = true; m_apiName = value; }

    /**
     * <p>The API name.</p>
     */
    inline void SetApiName(Aws::String&& value) { m_apiNameHasBeenSet = true; m_apiName = std::move(value); }

    /**
     * <p>The API name.</p>
     */
    inline void SetApiName(const char* value) { m_apiNameHasBeenSet = true; m_apiName.assign(value); }

    /**
     * <p>The API name.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiName(const Aws::String& value) { SetApiName(value); return *this;}

    /**
     * <p>The API name.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiName(Aws::String&& value) { SetApiName(std::move(value)); return *this;}

    /**
     * <p>The API name.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiName(const char* value) { SetApiName(value); return *this;}


    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline const Aws::String& GetApiSpecificationMd5Hash() const{ return m_apiSpecificationMd5Hash; }

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline bool ApiSpecificationMd5HashHasBeenSet() const { return m_apiSpecificationMd5HashHasBeenSet; }

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline void SetApiSpecificationMd5Hash(const Aws::String& value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash = value; }

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline void SetApiSpecificationMd5Hash(Aws::String&& value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash = std::move(value); }

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline void SetApiSpecificationMd5Hash(const char* value) { m_apiSpecificationMd5HashHasBeenSet = true; m_apiSpecificationMd5Hash.assign(value); }

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationMd5Hash(const Aws::String& value) { SetApiSpecificationMd5Hash(value); return *this;}

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationMd5Hash(Aws::String&& value) { SetApiSpecificationMd5Hash(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded Md5 hash for the API asset, used to ensure the integrity
     * of the API at that location.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationMd5Hash(const char* value) { SetApiSpecificationMd5Hash(value); return *this;}


    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline const Aws::String& GetApiSpecificationUploadUrl() const{ return m_apiSpecificationUploadUrl; }

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline bool ApiSpecificationUploadUrlHasBeenSet() const { return m_apiSpecificationUploadUrlHasBeenSet; }

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline void SetApiSpecificationUploadUrl(const Aws::String& value) { m_apiSpecificationUploadUrlHasBeenSet = true; m_apiSpecificationUploadUrl = value; }

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline void SetApiSpecificationUploadUrl(Aws::String&& value) { m_apiSpecificationUploadUrlHasBeenSet = true; m_apiSpecificationUploadUrl = std::move(value); }

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline void SetApiSpecificationUploadUrl(const char* value) { m_apiSpecificationUploadUrlHasBeenSet = true; m_apiSpecificationUploadUrl.assign(value); }

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrl(const Aws::String& value) { SetApiSpecificationUploadUrl(value); return *this;}

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrl(Aws::String&& value) { SetApiSpecificationUploadUrl(std::move(value)); return *this;}

    /**
     * <p>The upload URL of the API specification.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrl(const char* value) { SetApiSpecificationUploadUrl(value); return *this;}


    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetApiSpecificationUploadUrlExpiresAt() const{ return m_apiSpecificationUploadUrlExpiresAt; }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline bool ApiSpecificationUploadUrlExpiresAtHasBeenSet() const { return m_apiSpecificationUploadUrlExpiresAtHasBeenSet; }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline void SetApiSpecificationUploadUrlExpiresAt(const Aws::Utils::DateTime& value) { m_apiSpecificationUploadUrlExpiresAtHasBeenSet = true; m_apiSpecificationUploadUrlExpiresAt = value; }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline void SetApiSpecificationUploadUrlExpiresAt(Aws::Utils::DateTime&& value) { m_apiSpecificationUploadUrlExpiresAtHasBeenSet = true; m_apiSpecificationUploadUrlExpiresAt = std::move(value); }

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrlExpiresAt(const Aws::Utils::DateTime& value) { SetApiSpecificationUploadUrlExpiresAt(value); return *this;}

    /**
     * <p>The date and time that the upload URL expires, in ISO 8601 format.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithApiSpecificationUploadUrlExpiresAt(Aws::Utils::DateTime&& value) { SetApiSpecificationUploadUrlExpiresAt(std::move(value)); return *this;}


    /**
     * <p>The data set ID.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The data set ID.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The data set ID.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The data set ID.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The data set ID.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The data set ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The data set ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The data set ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The protocol type.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }

    /**
     * <p>The protocol type.</p>
     */
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }

    /**
     * <p>The protocol type.</p>
     */
    inline void SetProtocolType(const ProtocolType& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }

    /**
     * <p>The protocol type.</p>
     */
    inline void SetProtocolType(ProtocolType&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }

    /**
     * <p>The protocol type.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The protocol type.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}


    /**
     * <p>The revision ID.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The revision ID.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The revision ID.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The revision ID.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The revision ID.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The revision ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The revision ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The API stage.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>The API stage.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline ImportAssetFromApiGatewayApiResponseDetails& WithStage(const char* value) { SetStage(value); return *this;}

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

    Aws::Utils::DateTime m_apiSpecificationUploadUrlExpiresAt;
    bool m_apiSpecificationUploadUrlExpiresAtHasBeenSet = false;

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
