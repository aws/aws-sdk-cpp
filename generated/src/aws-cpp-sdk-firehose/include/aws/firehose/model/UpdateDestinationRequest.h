/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/ExtendedS3DestinationUpdate.h>
#include <aws/firehose/model/RedshiftDestinationUpdate.h>
#include <aws/firehose/model/ElasticsearchDestinationUpdate.h>
#include <aws/firehose/model/AmazonopensearchserviceDestinationUpdate.h>
#include <aws/firehose/model/SplunkDestinationUpdate.h>
#include <aws/firehose/model/HttpEndpointDestinationUpdate.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessDestinationUpdate.h>
#include <aws/firehose/model/SnowflakeDestinationUpdate.h>
#include <aws/firehose/model/IcebergDestinationUpdate.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class UpdateDestinationRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API UpdateDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDestination"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }
    inline UpdateDestinationRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}
    inline UpdateDestinationRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}
    inline UpdateDestinationRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline const Aws::String& GetCurrentDeliveryStreamVersionId() const{ return m_currentDeliveryStreamVersionId; }
    inline bool CurrentDeliveryStreamVersionIdHasBeenSet() const { return m_currentDeliveryStreamVersionIdHasBeenSet; }
    inline void SetCurrentDeliveryStreamVersionId(const Aws::String& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = value; }
    inline void SetCurrentDeliveryStreamVersionId(Aws::String&& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = std::move(value); }
    inline void SetCurrentDeliveryStreamVersionId(const char* value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId.assign(value); }
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(const Aws::String& value) { SetCurrentDeliveryStreamVersionId(value); return *this;}
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(Aws::String&& value) { SetCurrentDeliveryStreamVersionId(std::move(value)); return *this;}
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(const char* value) { SetCurrentDeliveryStreamVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }
    inline UpdateDestinationRequest& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}
    inline UpdateDestinationRequest& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}
    inline UpdateDestinationRequest& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline const ExtendedS3DestinationUpdate& GetExtendedS3DestinationUpdate() const{ return m_extendedS3DestinationUpdate; }
    inline bool ExtendedS3DestinationUpdateHasBeenSet() const { return m_extendedS3DestinationUpdateHasBeenSet; }
    inline void SetExtendedS3DestinationUpdate(const ExtendedS3DestinationUpdate& value) { m_extendedS3DestinationUpdateHasBeenSet = true; m_extendedS3DestinationUpdate = value; }
    inline void SetExtendedS3DestinationUpdate(ExtendedS3DestinationUpdate&& value) { m_extendedS3DestinationUpdateHasBeenSet = true; m_extendedS3DestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithExtendedS3DestinationUpdate(const ExtendedS3DestinationUpdate& value) { SetExtendedS3DestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithExtendedS3DestinationUpdate(ExtendedS3DestinationUpdate&& value) { SetExtendedS3DestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationUpdate& GetRedshiftDestinationUpdate() const{ return m_redshiftDestinationUpdate; }
    inline bool RedshiftDestinationUpdateHasBeenSet() const { return m_redshiftDestinationUpdateHasBeenSet; }
    inline void SetRedshiftDestinationUpdate(const RedshiftDestinationUpdate& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = value; }
    inline void SetRedshiftDestinationUpdate(RedshiftDestinationUpdate&& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithRedshiftDestinationUpdate(const RedshiftDestinationUpdate& value) { SetRedshiftDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithRedshiftDestinationUpdate(RedshiftDestinationUpdate&& value) { SetRedshiftDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline const ElasticsearchDestinationUpdate& GetElasticsearchDestinationUpdate() const{ return m_elasticsearchDestinationUpdate; }
    inline bool ElasticsearchDestinationUpdateHasBeenSet() const { return m_elasticsearchDestinationUpdateHasBeenSet; }
    inline void SetElasticsearchDestinationUpdate(const ElasticsearchDestinationUpdate& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = value; }
    inline void SetElasticsearchDestinationUpdate(ElasticsearchDestinationUpdate&& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithElasticsearchDestinationUpdate(const ElasticsearchDestinationUpdate& value) { SetElasticsearchDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithElasticsearchDestinationUpdate(ElasticsearchDestinationUpdate&& value) { SetElasticsearchDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon OpenSearch Service.</p>
     */
    inline const AmazonopensearchserviceDestinationUpdate& GetAmazonopensearchserviceDestinationUpdate() const{ return m_amazonopensearchserviceDestinationUpdate; }
    inline bool AmazonopensearchserviceDestinationUpdateHasBeenSet() const { return m_amazonopensearchserviceDestinationUpdateHasBeenSet; }
    inline void SetAmazonopensearchserviceDestinationUpdate(const AmazonopensearchserviceDestinationUpdate& value) { m_amazonopensearchserviceDestinationUpdateHasBeenSet = true; m_amazonopensearchserviceDestinationUpdate = value; }
    inline void SetAmazonopensearchserviceDestinationUpdate(AmazonopensearchserviceDestinationUpdate&& value) { m_amazonopensearchserviceDestinationUpdateHasBeenSet = true; m_amazonopensearchserviceDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithAmazonopensearchserviceDestinationUpdate(const AmazonopensearchserviceDestinationUpdate& value) { SetAmazonopensearchserviceDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithAmazonopensearchserviceDestinationUpdate(AmazonopensearchserviceDestinationUpdate&& value) { SetAmazonopensearchserviceDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline const SplunkDestinationUpdate& GetSplunkDestinationUpdate() const{ return m_splunkDestinationUpdate; }
    inline bool SplunkDestinationUpdateHasBeenSet() const { return m_splunkDestinationUpdateHasBeenSet; }
    inline void SetSplunkDestinationUpdate(const SplunkDestinationUpdate& value) { m_splunkDestinationUpdateHasBeenSet = true; m_splunkDestinationUpdate = value; }
    inline void SetSplunkDestinationUpdate(SplunkDestinationUpdate&& value) { m_splunkDestinationUpdateHasBeenSet = true; m_splunkDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithSplunkDestinationUpdate(const SplunkDestinationUpdate& value) { SetSplunkDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithSplunkDestinationUpdate(SplunkDestinationUpdate&& value) { SetSplunkDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointDestinationUpdate& GetHttpEndpointDestinationUpdate() const{ return m_httpEndpointDestinationUpdate; }
    inline bool HttpEndpointDestinationUpdateHasBeenSet() const { return m_httpEndpointDestinationUpdateHasBeenSet; }
    inline void SetHttpEndpointDestinationUpdate(const HttpEndpointDestinationUpdate& value) { m_httpEndpointDestinationUpdateHasBeenSet = true; m_httpEndpointDestinationUpdate = value; }
    inline void SetHttpEndpointDestinationUpdate(HttpEndpointDestinationUpdate&& value) { m_httpEndpointDestinationUpdateHasBeenSet = true; m_httpEndpointDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithHttpEndpointDestinationUpdate(const HttpEndpointDestinationUpdate& value) { SetHttpEndpointDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithHttpEndpointDestinationUpdate(HttpEndpointDestinationUpdate&& value) { SetHttpEndpointDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in the Serverless offering for Amazon
     * OpenSearch Service.</p>
     */
    inline const AmazonOpenSearchServerlessDestinationUpdate& GetAmazonOpenSearchServerlessDestinationUpdate() const{ return m_amazonOpenSearchServerlessDestinationUpdate; }
    inline bool AmazonOpenSearchServerlessDestinationUpdateHasBeenSet() const { return m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet; }
    inline void SetAmazonOpenSearchServerlessDestinationUpdate(const AmazonOpenSearchServerlessDestinationUpdate& value) { m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet = true; m_amazonOpenSearchServerlessDestinationUpdate = value; }
    inline void SetAmazonOpenSearchServerlessDestinationUpdate(AmazonOpenSearchServerlessDestinationUpdate&& value) { m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet = true; m_amazonOpenSearchServerlessDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithAmazonOpenSearchServerlessDestinationUpdate(const AmazonOpenSearchServerlessDestinationUpdate& value) { SetAmazonOpenSearchServerlessDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithAmazonOpenSearchServerlessDestinationUpdate(AmazonOpenSearchServerlessDestinationUpdate&& value) { SetAmazonOpenSearchServerlessDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update to the Snowflake destination configuration settings.</p>
     */
    inline const SnowflakeDestinationUpdate& GetSnowflakeDestinationUpdate() const{ return m_snowflakeDestinationUpdate; }
    inline bool SnowflakeDestinationUpdateHasBeenSet() const { return m_snowflakeDestinationUpdateHasBeenSet; }
    inline void SetSnowflakeDestinationUpdate(const SnowflakeDestinationUpdate& value) { m_snowflakeDestinationUpdateHasBeenSet = true; m_snowflakeDestinationUpdate = value; }
    inline void SetSnowflakeDestinationUpdate(SnowflakeDestinationUpdate&& value) { m_snowflakeDestinationUpdateHasBeenSet = true; m_snowflakeDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithSnowflakeDestinationUpdate(const SnowflakeDestinationUpdate& value) { SetSnowflakeDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithSnowflakeDestinationUpdate(SnowflakeDestinationUpdate&& value) { SetSnowflakeDestinationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes an update for a destination in Apache Iceberg Tables. </p>
     */
    inline const IcebergDestinationUpdate& GetIcebergDestinationUpdate() const{ return m_icebergDestinationUpdate; }
    inline bool IcebergDestinationUpdateHasBeenSet() const { return m_icebergDestinationUpdateHasBeenSet; }
    inline void SetIcebergDestinationUpdate(const IcebergDestinationUpdate& value) { m_icebergDestinationUpdateHasBeenSet = true; m_icebergDestinationUpdate = value; }
    inline void SetIcebergDestinationUpdate(IcebergDestinationUpdate&& value) { m_icebergDestinationUpdateHasBeenSet = true; m_icebergDestinationUpdate = std::move(value); }
    inline UpdateDestinationRequest& WithIcebergDestinationUpdate(const IcebergDestinationUpdate& value) { SetIcebergDestinationUpdate(value); return *this;}
    inline UpdateDestinationRequest& WithIcebergDestinationUpdate(IcebergDestinationUpdate&& value) { SetIcebergDestinationUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_currentDeliveryStreamVersionId;
    bool m_currentDeliveryStreamVersionIdHasBeenSet = false;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    ExtendedS3DestinationUpdate m_extendedS3DestinationUpdate;
    bool m_extendedS3DestinationUpdateHasBeenSet = false;

    RedshiftDestinationUpdate m_redshiftDestinationUpdate;
    bool m_redshiftDestinationUpdateHasBeenSet = false;

    ElasticsearchDestinationUpdate m_elasticsearchDestinationUpdate;
    bool m_elasticsearchDestinationUpdateHasBeenSet = false;

    AmazonopensearchserviceDestinationUpdate m_amazonopensearchserviceDestinationUpdate;
    bool m_amazonopensearchserviceDestinationUpdateHasBeenSet = false;

    SplunkDestinationUpdate m_splunkDestinationUpdate;
    bool m_splunkDestinationUpdateHasBeenSet = false;

    HttpEndpointDestinationUpdate m_httpEndpointDestinationUpdate;
    bool m_httpEndpointDestinationUpdateHasBeenSet = false;

    AmazonOpenSearchServerlessDestinationUpdate m_amazonOpenSearchServerlessDestinationUpdate;
    bool m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet = false;

    SnowflakeDestinationUpdate m_snowflakeDestinationUpdate;
    bool m_snowflakeDestinationUpdateHasBeenSet = false;

    IcebergDestinationUpdate m_icebergDestinationUpdate;
    bool m_icebergDestinationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
