/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/DeliveryStreamType.h>
#include <aws/firehose/model/DirectPutSourceConfiguration.h>
#include <aws/firehose/model/KinesisStreamSourceConfiguration.h>
#include <aws/firehose/model/DeliveryStreamEncryptionConfigurationInput.h>
#include <aws/firehose/model/ExtendedS3DestinationConfiguration.h>
#include <aws/firehose/model/RedshiftDestinationConfiguration.h>
#include <aws/firehose/model/ElasticsearchDestinationConfiguration.h>
#include <aws/firehose/model/AmazonopensearchserviceDestinationConfiguration.h>
#include <aws/firehose/model/SplunkDestinationConfiguration.h>
#include <aws/firehose/model/HttpEndpointDestinationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessDestinationConfiguration.h>
#include <aws/firehose/model/MSKSourceConfiguration.h>
#include <aws/firehose/model/SnowflakeDestinationConfiguration.h>
#include <aws/firehose/model/IcebergDestinationConfiguration.h>
#include <aws/firehose/model/DatabaseSourceConfiguration.h>
#include <aws/firehose/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class CreateDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API CreateDeliveryStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeliveryStream"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the Firehose streams
     * are in different accounts or different Regions, you can have multiple Firehose
     * streams with the same name.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const { return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    template<typename DeliveryStreamNameT = Aws::String>
    void SetDeliveryStreamName(DeliveryStreamNameT&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::forward<DeliveryStreamNameT>(value); }
    template<typename DeliveryStreamNameT = Aws::String>
    CreateDeliveryStreamRequest& WithDeliveryStreamName(DeliveryStreamNameT&& value) { SetDeliveryStreamName(std::forward<DeliveryStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Firehose stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the Firehose stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The Firehose stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline DeliveryStreamType GetDeliveryStreamType() const { return m_deliveryStreamType; }
    inline bool DeliveryStreamTypeHasBeenSet() const { return m_deliveryStreamTypeHasBeenSet; }
    inline void SetDeliveryStreamType(DeliveryStreamType value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = value; }
    inline CreateDeliveryStreamRequest& WithDeliveryStreamType(DeliveryStreamType value) { SetDeliveryStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that configures parameters such as
     * <code>ThroughputHintInMBs</code> for a stream configured with Direct PUT as a
     * source. </p>
     */
    inline const DirectPutSourceConfiguration& GetDirectPutSourceConfiguration() const { return m_directPutSourceConfiguration; }
    inline bool DirectPutSourceConfigurationHasBeenSet() const { return m_directPutSourceConfigurationHasBeenSet; }
    template<typename DirectPutSourceConfigurationT = DirectPutSourceConfiguration>
    void SetDirectPutSourceConfiguration(DirectPutSourceConfigurationT&& value) { m_directPutSourceConfigurationHasBeenSet = true; m_directPutSourceConfiguration = std::forward<DirectPutSourceConfigurationT>(value); }
    template<typename DirectPutSourceConfigurationT = DirectPutSourceConfiguration>
    CreateDeliveryStreamRequest& WithDirectPutSourceConfiguration(DirectPutSourceConfigurationT&& value) { SetDirectPutSourceConfiguration(std::forward<DirectPutSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a Kinesis data stream is used as the source for the Firehose stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline const KinesisStreamSourceConfiguration& GetKinesisStreamSourceConfiguration() const { return m_kinesisStreamSourceConfiguration; }
    inline bool KinesisStreamSourceConfigurationHasBeenSet() const { return m_kinesisStreamSourceConfigurationHasBeenSet; }
    template<typename KinesisStreamSourceConfigurationT = KinesisStreamSourceConfiguration>
    void SetKinesisStreamSourceConfiguration(KinesisStreamSourceConfigurationT&& value) { m_kinesisStreamSourceConfigurationHasBeenSet = true; m_kinesisStreamSourceConfiguration = std::forward<KinesisStreamSourceConfigurationT>(value); }
    template<typename KinesisStreamSourceConfigurationT = KinesisStreamSourceConfiguration>
    CreateDeliveryStreamRequest& WithKinesisStreamSourceConfiguration(KinesisStreamSourceConfigurationT&& value) { SetKinesisStreamSourceConfiguration(std::forward<KinesisStreamSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline const DeliveryStreamEncryptionConfigurationInput& GetDeliveryStreamEncryptionConfigurationInput() const { return m_deliveryStreamEncryptionConfigurationInput; }
    inline bool DeliveryStreamEncryptionConfigurationInputHasBeenSet() const { return m_deliveryStreamEncryptionConfigurationInputHasBeenSet; }
    template<typename DeliveryStreamEncryptionConfigurationInputT = DeliveryStreamEncryptionConfigurationInput>
    void SetDeliveryStreamEncryptionConfigurationInput(DeliveryStreamEncryptionConfigurationInputT&& value) { m_deliveryStreamEncryptionConfigurationInputHasBeenSet = true; m_deliveryStreamEncryptionConfigurationInput = std::forward<DeliveryStreamEncryptionConfigurationInputT>(value); }
    template<typename DeliveryStreamEncryptionConfigurationInputT = DeliveryStreamEncryptionConfigurationInput>
    CreateDeliveryStreamRequest& WithDeliveryStreamEncryptionConfigurationInput(DeliveryStreamEncryptionConfigurationInputT&& value) { SetDeliveryStreamEncryptionConfigurationInput(std::forward<DeliveryStreamEncryptionConfigurationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline const ExtendedS3DestinationConfiguration& GetExtendedS3DestinationConfiguration() const { return m_extendedS3DestinationConfiguration; }
    inline bool ExtendedS3DestinationConfigurationHasBeenSet() const { return m_extendedS3DestinationConfigurationHasBeenSet; }
    template<typename ExtendedS3DestinationConfigurationT = ExtendedS3DestinationConfiguration>
    void SetExtendedS3DestinationConfiguration(ExtendedS3DestinationConfigurationT&& value) { m_extendedS3DestinationConfigurationHasBeenSet = true; m_extendedS3DestinationConfiguration = std::forward<ExtendedS3DestinationConfigurationT>(value); }
    template<typename ExtendedS3DestinationConfigurationT = ExtendedS3DestinationConfiguration>
    CreateDeliveryStreamRequest& WithExtendedS3DestinationConfiguration(ExtendedS3DestinationConfigurationT&& value) { SetExtendedS3DestinationConfiguration(std::forward<ExtendedS3DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline const RedshiftDestinationConfiguration& GetRedshiftDestinationConfiguration() const { return m_redshiftDestinationConfiguration; }
    inline bool RedshiftDestinationConfigurationHasBeenSet() const { return m_redshiftDestinationConfigurationHasBeenSet; }
    template<typename RedshiftDestinationConfigurationT = RedshiftDestinationConfiguration>
    void SetRedshiftDestinationConfiguration(RedshiftDestinationConfigurationT&& value) { m_redshiftDestinationConfigurationHasBeenSet = true; m_redshiftDestinationConfiguration = std::forward<RedshiftDestinationConfigurationT>(value); }
    template<typename RedshiftDestinationConfigurationT = RedshiftDestinationConfiguration>
    CreateDeliveryStreamRequest& WithRedshiftDestinationConfiguration(RedshiftDestinationConfigurationT&& value) { SetRedshiftDestinationConfiguration(std::forward<RedshiftDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline const ElasticsearchDestinationConfiguration& GetElasticsearchDestinationConfiguration() const { return m_elasticsearchDestinationConfiguration; }
    inline bool ElasticsearchDestinationConfigurationHasBeenSet() const { return m_elasticsearchDestinationConfigurationHasBeenSet; }
    template<typename ElasticsearchDestinationConfigurationT = ElasticsearchDestinationConfiguration>
    void SetElasticsearchDestinationConfiguration(ElasticsearchDestinationConfigurationT&& value) { m_elasticsearchDestinationConfigurationHasBeenSet = true; m_elasticsearchDestinationConfiguration = std::forward<ElasticsearchDestinationConfigurationT>(value); }
    template<typename ElasticsearchDestinationConfigurationT = ElasticsearchDestinationConfiguration>
    CreateDeliveryStreamRequest& WithElasticsearchDestinationConfiguration(ElasticsearchDestinationConfigurationT&& value) { SetElasticsearchDestinationConfiguration(std::forward<ElasticsearchDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline const AmazonopensearchserviceDestinationConfiguration& GetAmazonopensearchserviceDestinationConfiguration() const { return m_amazonopensearchserviceDestinationConfiguration; }
    inline bool AmazonopensearchserviceDestinationConfigurationHasBeenSet() const { return m_amazonopensearchserviceDestinationConfigurationHasBeenSet; }
    template<typename AmazonopensearchserviceDestinationConfigurationT = AmazonopensearchserviceDestinationConfiguration>
    void SetAmazonopensearchserviceDestinationConfiguration(AmazonopensearchserviceDestinationConfigurationT&& value) { m_amazonopensearchserviceDestinationConfigurationHasBeenSet = true; m_amazonopensearchserviceDestinationConfiguration = std::forward<AmazonopensearchserviceDestinationConfigurationT>(value); }
    template<typename AmazonopensearchserviceDestinationConfigurationT = AmazonopensearchserviceDestinationConfiguration>
    CreateDeliveryStreamRequest& WithAmazonopensearchserviceDestinationConfiguration(AmazonopensearchserviceDestinationConfigurationT&& value) { SetAmazonopensearchserviceDestinationConfiguration(std::forward<AmazonopensearchserviceDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline const SplunkDestinationConfiguration& GetSplunkDestinationConfiguration() const { return m_splunkDestinationConfiguration; }
    inline bool SplunkDestinationConfigurationHasBeenSet() const { return m_splunkDestinationConfigurationHasBeenSet; }
    template<typename SplunkDestinationConfigurationT = SplunkDestinationConfiguration>
    void SetSplunkDestinationConfiguration(SplunkDestinationConfigurationT&& value) { m_splunkDestinationConfigurationHasBeenSet = true; m_splunkDestinationConfiguration = std::forward<SplunkDestinationConfigurationT>(value); }
    template<typename SplunkDestinationConfigurationT = SplunkDestinationConfiguration>
    CreateDeliveryStreamRequest& WithSplunkDestinationConfiguration(SplunkDestinationConfigurationT&& value) { SetSplunkDestinationConfiguration(std::forward<SplunkDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline const HttpEndpointDestinationConfiguration& GetHttpEndpointDestinationConfiguration() const { return m_httpEndpointDestinationConfiguration; }
    inline bool HttpEndpointDestinationConfigurationHasBeenSet() const { return m_httpEndpointDestinationConfigurationHasBeenSet; }
    template<typename HttpEndpointDestinationConfigurationT = HttpEndpointDestinationConfiguration>
    void SetHttpEndpointDestinationConfiguration(HttpEndpointDestinationConfigurationT&& value) { m_httpEndpointDestinationConfigurationHasBeenSet = true; m_httpEndpointDestinationConfiguration = std::forward<HttpEndpointDestinationConfigurationT>(value); }
    template<typename HttpEndpointDestinationConfigurationT = HttpEndpointDestinationConfiguration>
    CreateDeliveryStreamRequest& WithHttpEndpointDestinationConfiguration(HttpEndpointDestinationConfigurationT&& value) { SetHttpEndpointDestinationConfiguration(std::forward<HttpEndpointDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags to assign to the Firehose stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the Firehose stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a Firehose
     * stream.</p> <p>If you specify tags in the <code>CreateDeliveryStream</code>
     * action, Amazon Data Firehose performs an additional authorization on the
     * <code>firehose:TagDeliveryStream</code> action to verify if users have
     * permissions to create tags. If you do not provide this permission, requests to
     * create new Firehose streams with IAM resource tags will fail with an
     * <code>AccessDeniedException</code> such as following.</p> <p>
     * <b>AccessDeniedException</b> </p> <p>User: arn:aws:sts::x:assumed-role/x/x is
     * not authorized to perform: firehose:TagDeliveryStream on resource:
     * arn:aws:firehose:us-east-1:x:deliverystream/x with an explicit deny in an
     * identity-based policy.</p> <p>For an example IAM policy, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/APIReference/API_CreateDeliveryStream.html#API_CreateDeliveryStream_Examples">Tag
     * example.</a> </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDeliveryStreamRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDeliveryStreamRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline const AmazonOpenSearchServerlessDestinationConfiguration& GetAmazonOpenSearchServerlessDestinationConfiguration() const { return m_amazonOpenSearchServerlessDestinationConfiguration; }
    inline bool AmazonOpenSearchServerlessDestinationConfigurationHasBeenSet() const { return m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet; }
    template<typename AmazonOpenSearchServerlessDestinationConfigurationT = AmazonOpenSearchServerlessDestinationConfiguration>
    void SetAmazonOpenSearchServerlessDestinationConfiguration(AmazonOpenSearchServerlessDestinationConfigurationT&& value) { m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet = true; m_amazonOpenSearchServerlessDestinationConfiguration = std::forward<AmazonOpenSearchServerlessDestinationConfigurationT>(value); }
    template<typename AmazonOpenSearchServerlessDestinationConfigurationT = AmazonOpenSearchServerlessDestinationConfiguration>
    CreateDeliveryStreamRequest& WithAmazonOpenSearchServerlessDestinationConfiguration(AmazonOpenSearchServerlessDestinationConfigurationT&& value) { SetAmazonOpenSearchServerlessDestinationConfiguration(std::forward<AmazonOpenSearchServerlessDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MSKSourceConfiguration& GetMSKSourceConfiguration() const { return m_mSKSourceConfiguration; }
    inline bool MSKSourceConfigurationHasBeenSet() const { return m_mSKSourceConfigurationHasBeenSet; }
    template<typename MSKSourceConfigurationT = MSKSourceConfiguration>
    void SetMSKSourceConfiguration(MSKSourceConfigurationT&& value) { m_mSKSourceConfigurationHasBeenSet = true; m_mSKSourceConfiguration = std::forward<MSKSourceConfigurationT>(value); }
    template<typename MSKSourceConfigurationT = MSKSourceConfiguration>
    CreateDeliveryStreamRequest& WithMSKSourceConfiguration(MSKSourceConfigurationT&& value) { SetMSKSourceConfiguration(std::forward<MSKSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configure Snowflake destination</p>
     */
    inline const SnowflakeDestinationConfiguration& GetSnowflakeDestinationConfiguration() const { return m_snowflakeDestinationConfiguration; }
    inline bool SnowflakeDestinationConfigurationHasBeenSet() const { return m_snowflakeDestinationConfigurationHasBeenSet; }
    template<typename SnowflakeDestinationConfigurationT = SnowflakeDestinationConfiguration>
    void SetSnowflakeDestinationConfiguration(SnowflakeDestinationConfigurationT&& value) { m_snowflakeDestinationConfigurationHasBeenSet = true; m_snowflakeDestinationConfiguration = std::forward<SnowflakeDestinationConfigurationT>(value); }
    template<typename SnowflakeDestinationConfigurationT = SnowflakeDestinationConfiguration>
    CreateDeliveryStreamRequest& WithSnowflakeDestinationConfiguration(SnowflakeDestinationConfigurationT&& value) { SetSnowflakeDestinationConfiguration(std::forward<SnowflakeDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configure Apache Iceberg Tables destination. </p>
     */
    inline const IcebergDestinationConfiguration& GetIcebergDestinationConfiguration() const { return m_icebergDestinationConfiguration; }
    inline bool IcebergDestinationConfigurationHasBeenSet() const { return m_icebergDestinationConfigurationHasBeenSet; }
    template<typename IcebergDestinationConfigurationT = IcebergDestinationConfiguration>
    void SetIcebergDestinationConfiguration(IcebergDestinationConfigurationT&& value) { m_icebergDestinationConfigurationHasBeenSet = true; m_icebergDestinationConfiguration = std::forward<IcebergDestinationConfigurationT>(value); }
    template<typename IcebergDestinationConfigurationT = IcebergDestinationConfiguration>
    CreateDeliveryStreamRequest& WithIcebergDestinationConfiguration(IcebergDestinationConfigurationT&& value) { SetIcebergDestinationConfiguration(std::forward<IcebergDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The top level object for configuring streams with database as a source. </p>
     * <p>Amazon Data Firehose is in preview release and is subject to change.</p>
     */
    inline const DatabaseSourceConfiguration& GetDatabaseSourceConfiguration() const { return m_databaseSourceConfiguration; }
    inline bool DatabaseSourceConfigurationHasBeenSet() const { return m_databaseSourceConfigurationHasBeenSet; }
    template<typename DatabaseSourceConfigurationT = DatabaseSourceConfiguration>
    void SetDatabaseSourceConfiguration(DatabaseSourceConfigurationT&& value) { m_databaseSourceConfigurationHasBeenSet = true; m_databaseSourceConfiguration = std::forward<DatabaseSourceConfigurationT>(value); }
    template<typename DatabaseSourceConfigurationT = DatabaseSourceConfiguration>
    CreateDeliveryStreamRequest& WithDatabaseSourceConfiguration(DatabaseSourceConfigurationT&& value) { SetDatabaseSourceConfiguration(std::forward<DatabaseSourceConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    DeliveryStreamType m_deliveryStreamType{DeliveryStreamType::NOT_SET};
    bool m_deliveryStreamTypeHasBeenSet = false;

    DirectPutSourceConfiguration m_directPutSourceConfiguration;
    bool m_directPutSourceConfigurationHasBeenSet = false;

    KinesisStreamSourceConfiguration m_kinesisStreamSourceConfiguration;
    bool m_kinesisStreamSourceConfigurationHasBeenSet = false;

    DeliveryStreamEncryptionConfigurationInput m_deliveryStreamEncryptionConfigurationInput;
    bool m_deliveryStreamEncryptionConfigurationInputHasBeenSet = false;

    ExtendedS3DestinationConfiguration m_extendedS3DestinationConfiguration;
    bool m_extendedS3DestinationConfigurationHasBeenSet = false;

    RedshiftDestinationConfiguration m_redshiftDestinationConfiguration;
    bool m_redshiftDestinationConfigurationHasBeenSet = false;

    ElasticsearchDestinationConfiguration m_elasticsearchDestinationConfiguration;
    bool m_elasticsearchDestinationConfigurationHasBeenSet = false;

    AmazonopensearchserviceDestinationConfiguration m_amazonopensearchserviceDestinationConfiguration;
    bool m_amazonopensearchserviceDestinationConfigurationHasBeenSet = false;

    SplunkDestinationConfiguration m_splunkDestinationConfiguration;
    bool m_splunkDestinationConfigurationHasBeenSet = false;

    HttpEndpointDestinationConfiguration m_httpEndpointDestinationConfiguration;
    bool m_httpEndpointDestinationConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AmazonOpenSearchServerlessDestinationConfiguration m_amazonOpenSearchServerlessDestinationConfiguration;
    bool m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet = false;

    MSKSourceConfiguration m_mSKSourceConfiguration;
    bool m_mSKSourceConfigurationHasBeenSet = false;

    SnowflakeDestinationConfiguration m_snowflakeDestinationConfiguration;
    bool m_snowflakeDestinationConfigurationHasBeenSet = false;

    IcebergDestinationConfiguration m_icebergDestinationConfiguration;
    bool m_icebergDestinationConfigurationHasBeenSet = false;

    DatabaseSourceConfiguration m_databaseSourceConfiguration;
    bool m_databaseSourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
