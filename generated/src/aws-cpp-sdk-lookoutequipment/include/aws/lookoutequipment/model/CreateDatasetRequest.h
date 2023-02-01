/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/DatasetSchema.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class CreateDatasetRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CreateDatasetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the dataset being created. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline CreateDatasetRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline CreateDatasetRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset being created. </p>
     */
    inline CreateDatasetRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline const DatasetSchema& GetDatasetSchema() const{ return m_datasetSchema; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline bool DatasetSchemaHasBeenSet() const { return m_datasetSchemaHasBeenSet; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetDatasetSchema(const DatasetSchema& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = value; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetDatasetSchema(DatasetSchema&& value) { m_datasetSchemaHasBeenSet = true; m_datasetSchema = std::move(value); }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline CreateDatasetRequest& WithDatasetSchema(const DatasetSchema& value) { SetDatasetSchema(value); return *this;}

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline CreateDatasetRequest& WithDatasetSchema(DatasetSchema&& value) { SetDatasetSchema(std::move(value)); return *this;}


    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline bool ServerSideKmsKeyIdHasBeenSet() const { return m_serverSideKmsKeyIdHasBeenSet; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline CreateDatasetRequest& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline CreateDatasetRequest& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline CreateDatasetRequest& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateDatasetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateDatasetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline CreateDatasetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline CreateDatasetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline CreateDatasetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline CreateDatasetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags associated with the ingested data described in the dataset. </p>
     */
    inline CreateDatasetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetSchema m_datasetSchema;
    bool m_datasetSchemaHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
