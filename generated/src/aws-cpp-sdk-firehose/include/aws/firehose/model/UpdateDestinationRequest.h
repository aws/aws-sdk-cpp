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
    AWS_FIREHOSE_API UpdateDestinationRequest() = default;

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
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    UpdateDestinationRequest& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
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
    inline const Aws::String& GetCurrentDeliveryStreamVersionId() const { return m_currentDeliveryStreamVersionId; }
    inline bool CurrentDeliveryStreamVersionIdHasBeenSet() const { return m_currentDeliveryStreamVersionIdHasBeenSet; }
    template<typename CurrentDeliveryStreamVersionIdT = Aws::String>
    void SetCurrentDeliveryStreamVersionId(CurrentDeliveryStreamVersionIdT&& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = std::forward<CurrentDeliveryStreamVersionIdT>(value); }
    template<typename CurrentDeliveryStreamVersionIdT = Aws::String>
    UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(CurrentDeliveryStreamVersionIdT&& value) { SetCurrentDeliveryStreamVersionId(std::forward<CurrentDeliveryStreamVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationId() const { return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    template<typename DestinationIdT = Aws::String>
    void SetDestinationId(DestinationIdT&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::forward<DestinationIdT>(value); }
    template<typename DestinationIdT = Aws::String>
    UpdateDestinationRequest& WithDestinationId(DestinationIdT&& value) { SetDestinationId(std::forward<DestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline const ExtendedS3DestinationUpdate& GetExtendedS3DestinationUpdate() const { return m_extendedS3DestinationUpdate; }
    inline bool ExtendedS3DestinationUpdateHasBeenSet() const { return m_extendedS3DestinationUpdateHasBeenSet; }
    template<typename ExtendedS3DestinationUpdateT = ExtendedS3DestinationUpdate>
    void SetExtendedS3DestinationUpdate(ExtendedS3DestinationUpdateT&& value) { m_extendedS3DestinationUpdateHasBeenSet = true; m_extendedS3DestinationUpdate = std::forward<ExtendedS3DestinationUpdateT>(value); }
    template<typename ExtendedS3DestinationUpdateT = ExtendedS3DestinationUpdate>
    UpdateDestinationRequest& WithExtendedS3DestinationUpdate(ExtendedS3DestinationUpdateT&& value) { SetExtendedS3DestinationUpdate(std::forward<ExtendedS3DestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationUpdate& GetRedshiftDestinationUpdate() const { return m_redshiftDestinationUpdate; }
    inline bool RedshiftDestinationUpdateHasBeenSet() const { return m_redshiftDestinationUpdateHasBeenSet; }
    template<typename RedshiftDestinationUpdateT = RedshiftDestinationUpdate>
    void SetRedshiftDestinationUpdate(RedshiftDestinationUpdateT&& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = std::forward<RedshiftDestinationUpdateT>(value); }
    template<typename RedshiftDestinationUpdateT = RedshiftDestinationUpdate>
    UpdateDestinationRequest& WithRedshiftDestinationUpdate(RedshiftDestinationUpdateT&& value) { SetRedshiftDestinationUpdate(std::forward<RedshiftDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon OpenSearch Service.</p>
     */
    inline const ElasticsearchDestinationUpdate& GetElasticsearchDestinationUpdate() const { return m_elasticsearchDestinationUpdate; }
    inline bool ElasticsearchDestinationUpdateHasBeenSet() const { return m_elasticsearchDestinationUpdateHasBeenSet; }
    template<typename ElasticsearchDestinationUpdateT = ElasticsearchDestinationUpdate>
    void SetElasticsearchDestinationUpdate(ElasticsearchDestinationUpdateT&& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = std::forward<ElasticsearchDestinationUpdateT>(value); }
    template<typename ElasticsearchDestinationUpdateT = ElasticsearchDestinationUpdate>
    UpdateDestinationRequest& WithElasticsearchDestinationUpdate(ElasticsearchDestinationUpdateT&& value) { SetElasticsearchDestinationUpdate(std::forward<ElasticsearchDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Amazon OpenSearch Service.</p>
     */
    inline const AmazonopensearchserviceDestinationUpdate& GetAmazonopensearchserviceDestinationUpdate() const { return m_amazonopensearchserviceDestinationUpdate; }
    inline bool AmazonopensearchserviceDestinationUpdateHasBeenSet() const { return m_amazonopensearchserviceDestinationUpdateHasBeenSet; }
    template<typename AmazonopensearchserviceDestinationUpdateT = AmazonopensearchserviceDestinationUpdate>
    void SetAmazonopensearchserviceDestinationUpdate(AmazonopensearchserviceDestinationUpdateT&& value) { m_amazonopensearchserviceDestinationUpdateHasBeenSet = true; m_amazonopensearchserviceDestinationUpdate = std::forward<AmazonopensearchserviceDestinationUpdateT>(value); }
    template<typename AmazonopensearchserviceDestinationUpdateT = AmazonopensearchserviceDestinationUpdate>
    UpdateDestinationRequest& WithAmazonopensearchserviceDestinationUpdate(AmazonopensearchserviceDestinationUpdateT&& value) { SetAmazonopensearchserviceDestinationUpdate(std::forward<AmazonopensearchserviceDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline const SplunkDestinationUpdate& GetSplunkDestinationUpdate() const { return m_splunkDestinationUpdate; }
    inline bool SplunkDestinationUpdateHasBeenSet() const { return m_splunkDestinationUpdateHasBeenSet; }
    template<typename SplunkDestinationUpdateT = SplunkDestinationUpdate>
    void SetSplunkDestinationUpdate(SplunkDestinationUpdateT&& value) { m_splunkDestinationUpdateHasBeenSet = true; m_splunkDestinationUpdate = std::forward<SplunkDestinationUpdateT>(value); }
    template<typename SplunkDestinationUpdateT = SplunkDestinationUpdate>
    UpdateDestinationRequest& WithSplunkDestinationUpdate(SplunkDestinationUpdateT&& value) { SetSplunkDestinationUpdate(std::forward<SplunkDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointDestinationUpdate& GetHttpEndpointDestinationUpdate() const { return m_httpEndpointDestinationUpdate; }
    inline bool HttpEndpointDestinationUpdateHasBeenSet() const { return m_httpEndpointDestinationUpdateHasBeenSet; }
    template<typename HttpEndpointDestinationUpdateT = HttpEndpointDestinationUpdate>
    void SetHttpEndpointDestinationUpdate(HttpEndpointDestinationUpdateT&& value) { m_httpEndpointDestinationUpdateHasBeenSet = true; m_httpEndpointDestinationUpdate = std::forward<HttpEndpointDestinationUpdateT>(value); }
    template<typename HttpEndpointDestinationUpdateT = HttpEndpointDestinationUpdate>
    UpdateDestinationRequest& WithHttpEndpointDestinationUpdate(HttpEndpointDestinationUpdateT&& value) { SetHttpEndpointDestinationUpdate(std::forward<HttpEndpointDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update for a destination in the Serverless offering for Amazon
     * OpenSearch Service.</p>
     */
    inline const AmazonOpenSearchServerlessDestinationUpdate& GetAmazonOpenSearchServerlessDestinationUpdate() const { return m_amazonOpenSearchServerlessDestinationUpdate; }
    inline bool AmazonOpenSearchServerlessDestinationUpdateHasBeenSet() const { return m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet; }
    template<typename AmazonOpenSearchServerlessDestinationUpdateT = AmazonOpenSearchServerlessDestinationUpdate>
    void SetAmazonOpenSearchServerlessDestinationUpdate(AmazonOpenSearchServerlessDestinationUpdateT&& value) { m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet = true; m_amazonOpenSearchServerlessDestinationUpdate = std::forward<AmazonOpenSearchServerlessDestinationUpdateT>(value); }
    template<typename AmazonOpenSearchServerlessDestinationUpdateT = AmazonOpenSearchServerlessDestinationUpdate>
    UpdateDestinationRequest& WithAmazonOpenSearchServerlessDestinationUpdate(AmazonOpenSearchServerlessDestinationUpdateT&& value) { SetAmazonOpenSearchServerlessDestinationUpdate(std::forward<AmazonOpenSearchServerlessDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update to the Snowflake destination configuration settings.</p>
     */
    inline const SnowflakeDestinationUpdate& GetSnowflakeDestinationUpdate() const { return m_snowflakeDestinationUpdate; }
    inline bool SnowflakeDestinationUpdateHasBeenSet() const { return m_snowflakeDestinationUpdateHasBeenSet; }
    template<typename SnowflakeDestinationUpdateT = SnowflakeDestinationUpdate>
    void SetSnowflakeDestinationUpdate(SnowflakeDestinationUpdateT&& value) { m_snowflakeDestinationUpdateHasBeenSet = true; m_snowflakeDestinationUpdate = std::forward<SnowflakeDestinationUpdateT>(value); }
    template<typename SnowflakeDestinationUpdateT = SnowflakeDestinationUpdate>
    UpdateDestinationRequest& WithSnowflakeDestinationUpdate(SnowflakeDestinationUpdateT&& value) { SetSnowflakeDestinationUpdate(std::forward<SnowflakeDestinationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes an update for a destination in Apache Iceberg Tables. </p>
     */
    inline const IcebergDestinationUpdate& GetIcebergDestinationUpdate() const { return m_icebergDestinationUpdate; }
    inline bool IcebergDestinationUpdateHasBeenSet() const { return m_icebergDestinationUpdateHasBeenSet; }
    template<typename IcebergDestinationUpdateT = IcebergDestinationUpdate>
    void SetIcebergDestinationUpdate(IcebergDestinationUpdateT&& value) { m_icebergDestinationUpdateHasBeenSet = true; m_icebergDestinationUpdate = std::forward<IcebergDestinationUpdateT>(value); }
    template<typename IcebergDestinationUpdateT = IcebergDestinationUpdate>
    UpdateDestinationRequest& WithIcebergDestinationUpdate(IcebergDestinationUpdateT&& value) { SetIcebergDestinationUpdate(std::forward<IcebergDestinationUpdateT>(value)); return *this;}
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
