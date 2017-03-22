/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/ExtendedS3DestinationConfiguration.h>
#include <aws/firehose/model/RedshiftDestinationConfiguration.h>
#include <aws/firehose/model/ElasticsearchDestinationConfiguration.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class AWS_FIREHOSE_API CreateDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    CreateDeliveryStreamRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream. This name must be unique per AWS account in
     * the same region. You can have multiple delivery streams with the same name if
     * they are in different accounts or different regions.</p>
     */
    inline CreateDeliveryStreamRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline const ExtendedS3DestinationConfiguration& GetExtendedS3DestinationConfiguration() const{ return m_extendedS3DestinationConfiguration; }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline void SetExtendedS3DestinationConfiguration(const ExtendedS3DestinationConfiguration& value) { m_extendedS3DestinationConfigurationHasBeenSet = true; m_extendedS3DestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline void SetExtendedS3DestinationConfiguration(ExtendedS3DestinationConfiguration&& value) { m_extendedS3DestinationConfigurationHasBeenSet = true; m_extendedS3DestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithExtendedS3DestinationConfiguration(const ExtendedS3DestinationConfiguration& value) { SetExtendedS3DestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon S3. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithExtendedS3DestinationConfiguration(ExtendedS3DestinationConfiguration&& value) { SetExtendedS3DestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline const RedshiftDestinationConfiguration& GetRedshiftDestinationConfiguration() const{ return m_redshiftDestinationConfiguration; }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline void SetRedshiftDestinationConfiguration(const RedshiftDestinationConfiguration& value) { m_redshiftDestinationConfigurationHasBeenSet = true; m_redshiftDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline void SetRedshiftDestinationConfiguration(RedshiftDestinationConfiguration&& value) { m_redshiftDestinationConfigurationHasBeenSet = true; m_redshiftDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithRedshiftDestinationConfiguration(const RedshiftDestinationConfiguration& value) { SetRedshiftDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon Redshift. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithRedshiftDestinationConfiguration(RedshiftDestinationConfiguration&& value) { SetRedshiftDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline const ElasticsearchDestinationConfiguration& GetElasticsearchDestinationConfiguration() const{ return m_elasticsearchDestinationConfiguration; }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline void SetElasticsearchDestinationConfiguration(const ElasticsearchDestinationConfiguration& value) { m_elasticsearchDestinationConfigurationHasBeenSet = true; m_elasticsearchDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline void SetElasticsearchDestinationConfiguration(ElasticsearchDestinationConfiguration&& value) { m_elasticsearchDestinationConfigurationHasBeenSet = true; m_elasticsearchDestinationConfiguration = value; }

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithElasticsearchDestinationConfiguration(const ElasticsearchDestinationConfiguration& value) { SetElasticsearchDestinationConfiguration(value); return *this;}

    /**
     * <p>The destination in Amazon ES. You can specify only one destination.</p>
     */
    inline CreateDeliveryStreamRequest& WithElasticsearchDestinationConfiguration(ElasticsearchDestinationConfiguration&& value) { SetElasticsearchDestinationConfiguration(value); return *this;}

  private:
    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet;
    ExtendedS3DestinationConfiguration m_extendedS3DestinationConfiguration;
    bool m_extendedS3DestinationConfigurationHasBeenSet;
    RedshiftDestinationConfiguration m_redshiftDestinationConfiguration;
    bool m_redshiftDestinationConfigurationHasBeenSet;
    ElasticsearchDestinationConfiguration m_elasticsearchDestinationConfiguration;
    bool m_elasticsearchDestinationConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
