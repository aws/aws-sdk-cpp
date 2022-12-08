/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/DeliveryStreamType.h>
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
    AWS_FIREHOSE_API CreateDeliveryStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeliveryStream"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery stream. This name must be unique per Amazon Web
     * Services account in the same Amazon Web Services Region. If the delivery streams
     * are in different accounts or different Regions, you can have multiple delivery
     * streams with the same name.</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>The delivery stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the delivery stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline const DeliveryStreamType& GetDeliveryStreamType() const{ return m_deliveryStreamType; }

    /**
     * <p>The delivery stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the delivery stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline bool DeliveryStreamTypeHasBeenSet() const { return m_deliveryStreamTypeHasBeenSet; }

    /**
     * <p>The delivery stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the delivery stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline void SetDeliveryStreamType(const DeliveryStreamType& value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = value; }

    /**
     * <p>The delivery stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the delivery stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline void SetDeliveryStreamType(DeliveryStreamType&& value) { m_deliveryStreamTypeHasBeenSet = true; m_deliveryStreamType = std::move(value); }

    /**
     * <p>The delivery stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the delivery stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamType(const DeliveryStreamType& value) { SetDeliveryStreamType(value); return *this;}

    /**
     * <p>The delivery stream type. This parameter can be one of the following
     * values:</p> <ul> <li> <p> <code>DirectPut</code>: Provider applications access
     * the delivery stream directly.</p> </li> <li> <p>
     * <code>KinesisStreamAsSource</code>: The delivery stream uses a Kinesis data
     * stream as a source.</p> </li> </ul>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamType(DeliveryStreamType&& value) { SetDeliveryStreamType(std::move(value)); return *this;}


    /**
     * <p>When a Kinesis data stream is used as the source for the delivery stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline const KinesisStreamSourceConfiguration& GetKinesisStreamSourceConfiguration() const{ return m_kinesisStreamSourceConfiguration; }

    /**
     * <p>When a Kinesis data stream is used as the source for the delivery stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline bool KinesisStreamSourceConfigurationHasBeenSet() const { return m_kinesisStreamSourceConfigurationHasBeenSet; }

    /**
     * <p>When a Kinesis data stream is used as the source for the delivery stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline void SetKinesisStreamSourceConfiguration(const KinesisStreamSourceConfiguration& value) { m_kinesisStreamSourceConfigurationHasBeenSet = true; m_kinesisStreamSourceConfiguration = value; }

    /**
     * <p>When a Kinesis data stream is used as the source for the delivery stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline void SetKinesisStreamSourceConfiguration(KinesisStreamSourceConfiguration&& value) { m_kinesisStreamSourceConfigurationHasBeenSet = true; m_kinesisStreamSourceConfiguration = std::move(value); }

    /**
     * <p>When a Kinesis data stream is used as the source for the delivery stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline CreateDeliveryStreamRequest& WithKinesisStreamSourceConfiguration(const KinesisStreamSourceConfiguration& value) { SetKinesisStreamSourceConfiguration(value); return *this;}

    /**
     * <p>When a Kinesis data stream is used as the source for the delivery stream, a
     * <a>KinesisStreamSourceConfiguration</a> containing the Kinesis data stream
     * Amazon Resource Name (ARN) and the role ARN for the source stream.</p>
     */
    inline CreateDeliveryStreamRequest& WithKinesisStreamSourceConfiguration(KinesisStreamSourceConfiguration&& value) { SetKinesisStreamSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline const DeliveryStreamEncryptionConfigurationInput& GetDeliveryStreamEncryptionConfigurationInput() const{ return m_deliveryStreamEncryptionConfigurationInput; }

    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline bool DeliveryStreamEncryptionConfigurationInputHasBeenSet() const { return m_deliveryStreamEncryptionConfigurationInputHasBeenSet; }

    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline void SetDeliveryStreamEncryptionConfigurationInput(const DeliveryStreamEncryptionConfigurationInput& value) { m_deliveryStreamEncryptionConfigurationInputHasBeenSet = true; m_deliveryStreamEncryptionConfigurationInput = value; }

    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline void SetDeliveryStreamEncryptionConfigurationInput(DeliveryStreamEncryptionConfigurationInput&& value) { m_deliveryStreamEncryptionConfigurationInputHasBeenSet = true; m_deliveryStreamEncryptionConfigurationInput = std::move(value); }

    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamEncryptionConfigurationInput(const DeliveryStreamEncryptionConfigurationInput& value) { SetDeliveryStreamEncryptionConfigurationInput(value); return *this;}

    /**
     * <p>Used to specify the type and Amazon Resource Name (ARN) of the KMS key needed
     * for Server-Side Encryption (SSE).</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamEncryptionConfigurationInput(DeliveryStreamEncryptionConfigurationInput&& value) { SetDeliveryStreamEncryptionConfigurationInput(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline const ExtendedS3DestinationConfiguration& GetExtendedS3DestinationConfiguration() const{ return m_extendedS3DestinationConfiguration; }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline bool ExtendedS3DestinationConfigurationHasBeenSet() const { return m_extendedS3DestinationConfigurationHasBeenSet; }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline void SetExtendedS3DestinationConfiguration(const ExtendedS3DestinationConfiguration& value) { m_extendedS3DestinationConfigurationHasBeenSet = true; m_extendedS3DestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline void SetExtendedS3DestinationConfiguration(ExtendedS3DestinationConfiguration&& value) { m_extendedS3DestinationConfigurationHasBeenSet = true; m_extendedS3DestinationConfiguration = std::move(value); }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithExtendedS3DestinationConfiguration(const ExtendedS3DestinationConfiguration& value) { SetExtendedS3DestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithExtendedS3DestinationConfiguration(ExtendedS3DestinationConfiguration&& value) { SetExtendedS3DestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline const RedshiftDestinationConfiguration& GetRedshiftDestinationConfiguration() const{ return m_redshiftDestinationConfiguration; }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline bool RedshiftDestinationConfigurationHasBeenSet() const { return m_redshiftDestinationConfigurationHasBeenSet; }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline void SetRedshiftDestinationConfiguration(const RedshiftDestinationConfiguration& value) { m_redshiftDestinationConfigurationHasBeenSet = true; m_redshiftDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline void SetRedshiftDestinationConfiguration(RedshiftDestinationConfiguration&& value) { m_redshiftDestinationConfigurationHasBeenSet = true; m_redshiftDestinationConfiguration = std::move(value); }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithRedshiftDestinationConfiguration(const RedshiftDestinationConfiguration& value) { SetRedshiftDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithRedshiftDestinationConfiguration(RedshiftDestinationConfiguration&& value) { SetRedshiftDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline const ElasticsearchDestinationConfiguration& GetElasticsearchDestinationConfiguration() const{ return m_elasticsearchDestinationConfiguration; }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline bool ElasticsearchDestinationConfigurationHasBeenSet() const { return m_elasticsearchDestinationConfigurationHasBeenSet; }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline void SetElasticsearchDestinationConfiguration(const ElasticsearchDestinationConfiguration& value) { m_elasticsearchDestinationConfigurationHasBeenSet = true; m_elasticsearchDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline void SetElasticsearchDestinationConfiguration(ElasticsearchDestinationConfiguration&& value) { m_elasticsearchDestinationConfigurationHasBeenSet = true; m_elasticsearchDestinationConfiguration = std::move(value); }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithElasticsearchDestinationConfiguration(const ElasticsearchDestinationConfiguration& value) { SetElasticsearchDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithElasticsearchDestinationConfiguration(ElasticsearchDestinationConfiguration&& value) { SetElasticsearchDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline const AmazonopensearchserviceDestinationConfiguration& GetAmazonopensearchserviceDestinationConfiguration() const{ return m_amazonopensearchserviceDestinationConfiguration; }

    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline bool AmazonopensearchserviceDestinationConfigurationHasBeenSet() const { return m_amazonopensearchserviceDestinationConfigurationHasBeenSet; }

    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline void SetAmazonopensearchserviceDestinationConfiguration(const AmazonopensearchserviceDestinationConfiguration& value) { m_amazonopensearchserviceDestinationConfigurationHasBeenSet = true; m_amazonopensearchserviceDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline void SetAmazonopensearchserviceDestinationConfiguration(AmazonopensearchserviceDestinationConfiguration&& value) { m_amazonopensearchserviceDestinationConfigurationHasBeenSet = true; m_amazonopensearchserviceDestinationConfiguration = std::move(value); }

    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithAmazonopensearchserviceDestinationConfiguration(const AmazonopensearchserviceDestinationConfiguration& value) { SetAmazonopensearchserviceDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon OpenSearch Service. You can specify only one
     * destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithAmazonopensearchserviceDestinationConfiguration(AmazonopensearchserviceDestinationConfiguration&& value) { SetAmazonopensearchserviceDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline const SplunkDestinationConfiguration& GetSplunkDestinationConfiguration() const{ return m_splunkDestinationConfiguration; }

    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline bool SplunkDestinationConfigurationHasBeenSet() const { return m_splunkDestinationConfigurationHasBeenSet; }

    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline void SetSplunkDestinationConfiguration(const SplunkDestinationConfiguration& value) { m_splunkDestinationConfigurationHasBeenSet = true; m_splunkDestinationConfiguration = value; }

    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline void SetSplunkDestinationConfiguration(SplunkDestinationConfiguration&& value) { m_splunkDestinationConfigurationHasBeenSet = true; m_splunkDestinationConfiguration = std::move(value); }

    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithSplunkDestinationConfiguration(const SplunkDestinationConfiguration& value) { SetSplunkDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Splunk. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithSplunkDestinationConfiguration(SplunkDestinationConfiguration&& value) { SetSplunkDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline const HttpEndpointDestinationConfiguration& GetHttpEndpointDestinationConfiguration() const{ return m_httpEndpointDestinationConfiguration; }

    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline bool HttpEndpointDestinationConfigurationHasBeenSet() const { return m_httpEndpointDestinationConfigurationHasBeenSet; }

    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline void SetHttpEndpointDestinationConfiguration(const HttpEndpointDestinationConfiguration& value) { m_httpEndpointDestinationConfigurationHasBeenSet = true; m_httpEndpointDestinationConfiguration = value; }

    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline void SetHttpEndpointDestinationConfiguration(HttpEndpointDestinationConfiguration&& value) { m_httpEndpointDestinationConfigurationHasBeenSet = true; m_httpEndpointDestinationConfiguration = std::move(value); }

    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithHttpEndpointDestinationConfiguration(const HttpEndpointDestinationConfiguration& value) { SetHttpEndpointDestinationConfiguration(value); return *this;}

    /**
     * <p>Enables configuring Kinesis Firehose to deliver data to any HTTP endpoint
     * destination. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithHttpEndpointDestinationConfiguration(HttpEndpointDestinationConfiguration&& value) { SetHttpEndpointDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline CreateDeliveryStreamRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline CreateDeliveryStreamRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline CreateDeliveryStreamRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A set of tags to assign to the delivery stream. A tag is a key-value pair
     * that you can define and assign to Amazon Web Services resources. Tags are
     * metadata. For example, you can add friendly names and descriptions or other
     * types of information that can help you distinguish the delivery stream. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the Amazon Web Services Billing and Cost Management
     * User Guide.</p> <p>You can specify up to 50 tags when creating a delivery
     * stream.</p>
     */
    inline CreateDeliveryStreamRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline const AmazonOpenSearchServerlessDestinationConfiguration& GetAmazonOpenSearchServerlessDestinationConfiguration() const{ return m_amazonOpenSearchServerlessDestinationConfiguration; }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline bool AmazonOpenSearchServerlessDestinationConfigurationHasBeenSet() const { return m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet; }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline void SetAmazonOpenSearchServerlessDestinationConfiguration(const AmazonOpenSearchServerlessDestinationConfiguration& value) { m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet = true; m_amazonOpenSearchServerlessDestinationConfiguration = value; }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline void SetAmazonOpenSearchServerlessDestinationConfiguration(AmazonOpenSearchServerlessDestinationConfiguration&& value) { m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet = true; m_amazonOpenSearchServerlessDestinationConfiguration = std::move(value); }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithAmazonOpenSearchServerlessDestinationConfiguration(const AmazonOpenSearchServerlessDestinationConfiguration& value) { SetAmazonOpenSearchServerlessDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service. You
     * can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithAmazonOpenSearchServerlessDestinationConfiguration(AmazonOpenSearchServerlessDestinationConfiguration&& value) { SetAmazonOpenSearchServerlessDestinationConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    DeliveryStreamType m_deliveryStreamType;
    bool m_deliveryStreamTypeHasBeenSet = false;

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
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
