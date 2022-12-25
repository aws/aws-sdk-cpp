/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/IngestionInputConfiguration.h>
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
  class StartDataIngestionJobRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API StartDataIngestionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataIngestionJob"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline StartDataIngestionJobRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline StartDataIngestionJobRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset being used by the data ingestion job. </p>
     */
    inline StartDataIngestionJobRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p> Specifies information for the input data for the data ingestion job,
     * including dataset S3 location. </p>
     */
    inline const IngestionInputConfiguration& GetIngestionInputConfiguration() const{ return m_ingestionInputConfiguration; }

    /**
     * <p> Specifies information for the input data for the data ingestion job,
     * including dataset S3 location. </p>
     */
    inline bool IngestionInputConfigurationHasBeenSet() const { return m_ingestionInputConfigurationHasBeenSet; }

    /**
     * <p> Specifies information for the input data for the data ingestion job,
     * including dataset S3 location. </p>
     */
    inline void SetIngestionInputConfiguration(const IngestionInputConfiguration& value) { m_ingestionInputConfigurationHasBeenSet = true; m_ingestionInputConfiguration = value; }

    /**
     * <p> Specifies information for the input data for the data ingestion job,
     * including dataset S3 location. </p>
     */
    inline void SetIngestionInputConfiguration(IngestionInputConfiguration&& value) { m_ingestionInputConfigurationHasBeenSet = true; m_ingestionInputConfiguration = std::move(value); }

    /**
     * <p> Specifies information for the input data for the data ingestion job,
     * including dataset S3 location. </p>
     */
    inline StartDataIngestionJobRequest& WithIngestionInputConfiguration(const IngestionInputConfiguration& value) { SetIngestionInputConfiguration(value); return *this;}

    /**
     * <p> Specifies information for the input data for the data ingestion job,
     * including dataset S3 location. </p>
     */
    inline StartDataIngestionJobRequest& WithIngestionInputConfiguration(IngestionInputConfiguration&& value) { SetIngestionInputConfiguration(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline StartDataIngestionJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline StartDataIngestionJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a role with permission to access the data
     * source for the data ingestion job. </p>
     */
    inline StartDataIngestionJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline StartDataIngestionJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline StartDataIngestionJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline StartDataIngestionJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    IngestionInputConfiguration m_ingestionInputConfiguration;
    bool m_ingestionInputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
