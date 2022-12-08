/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/S3DestinationDescription.h>
#include <aws/firehose/model/ExtendedS3DestinationDescription.h>
#include <aws/firehose/model/RedshiftDestinationDescription.h>
#include <aws/firehose/model/ElasticsearchDestinationDescription.h>
#include <aws/firehose/model/AmazonopensearchserviceDestinationDescription.h>
#include <aws/firehose/model/SplunkDestinationDescription.h>
#include <aws/firehose/model/HttpEndpointDestinationDescription.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessDestinationDescription.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the destination for a delivery stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DestinationDescription">AWS
   * API Reference</a></p>
   */
  class DestinationDescription
  {
  public:
    AWS_FIREHOSE_API DestinationDescription();
    AWS_FIREHOSE_API DestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline DestinationDescription& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline DestinationDescription& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline DestinationDescription& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}


    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }

    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }

    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::move(value); }

    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline DestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}

    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline DestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline const ExtendedS3DestinationDescription& GetExtendedS3DestinationDescription() const{ return m_extendedS3DestinationDescription; }

    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline bool ExtendedS3DestinationDescriptionHasBeenSet() const { return m_extendedS3DestinationDescriptionHasBeenSet; }

    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline void SetExtendedS3DestinationDescription(const ExtendedS3DestinationDescription& value) { m_extendedS3DestinationDescriptionHasBeenSet = true; m_extendedS3DestinationDescription = value; }

    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline void SetExtendedS3DestinationDescription(ExtendedS3DestinationDescription&& value) { m_extendedS3DestinationDescriptionHasBeenSet = true; m_extendedS3DestinationDescription = std::move(value); }

    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline DestinationDescription& WithExtendedS3DestinationDescription(const ExtendedS3DestinationDescription& value) { SetExtendedS3DestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline DestinationDescription& WithExtendedS3DestinationDescription(ExtendedS3DestinationDescription&& value) { SetExtendedS3DestinationDescription(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationDescription& GetRedshiftDestinationDescription() const{ return m_redshiftDestinationDescription; }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline bool RedshiftDestinationDescriptionHasBeenSet() const { return m_redshiftDestinationDescriptionHasBeenSet; }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationDescription(const RedshiftDestinationDescription& value) { m_redshiftDestinationDescriptionHasBeenSet = true; m_redshiftDestinationDescription = value; }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationDescription(RedshiftDestinationDescription&& value) { m_redshiftDestinationDescriptionHasBeenSet = true; m_redshiftDestinationDescription = std::move(value); }

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline DestinationDescription& WithRedshiftDestinationDescription(const RedshiftDestinationDescription& value) { SetRedshiftDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline DestinationDescription& WithRedshiftDestinationDescription(RedshiftDestinationDescription&& value) { SetRedshiftDestinationDescription(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline const ElasticsearchDestinationDescription& GetElasticsearchDestinationDescription() const{ return m_elasticsearchDestinationDescription; }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline bool ElasticsearchDestinationDescriptionHasBeenSet() const { return m_elasticsearchDestinationDescriptionHasBeenSet; }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationDescription(const ElasticsearchDestinationDescription& value) { m_elasticsearchDestinationDescriptionHasBeenSet = true; m_elasticsearchDestinationDescription = value; }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationDescription(ElasticsearchDestinationDescription&& value) { m_elasticsearchDestinationDescriptionHasBeenSet = true; m_elasticsearchDestinationDescription = std::move(value); }

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline DestinationDescription& WithElasticsearchDestinationDescription(const ElasticsearchDestinationDescription& value) { SetElasticsearchDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon ES.</p>
     */
    inline DestinationDescription& WithElasticsearchDestinationDescription(ElasticsearchDestinationDescription&& value) { SetElasticsearchDestinationDescription(std::move(value)); return *this;}


    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline const AmazonopensearchserviceDestinationDescription& GetAmazonopensearchserviceDestinationDescription() const{ return m_amazonopensearchserviceDestinationDescription; }

    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline bool AmazonopensearchserviceDestinationDescriptionHasBeenSet() const { return m_amazonopensearchserviceDestinationDescriptionHasBeenSet; }

    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline void SetAmazonopensearchserviceDestinationDescription(const AmazonopensearchserviceDestinationDescription& value) { m_amazonopensearchserviceDestinationDescriptionHasBeenSet = true; m_amazonopensearchserviceDestinationDescription = value; }

    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline void SetAmazonopensearchserviceDestinationDescription(AmazonopensearchserviceDestinationDescription&& value) { m_amazonopensearchserviceDestinationDescriptionHasBeenSet = true; m_amazonopensearchserviceDestinationDescription = std::move(value); }

    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline DestinationDescription& WithAmazonopensearchserviceDestinationDescription(const AmazonopensearchserviceDestinationDescription& value) { SetAmazonopensearchserviceDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline DestinationDescription& WithAmazonopensearchserviceDestinationDescription(AmazonopensearchserviceDestinationDescription&& value) { SetAmazonopensearchserviceDestinationDescription(std::move(value)); return *this;}


    /**
     * <p>The destination in Splunk.</p>
     */
    inline const SplunkDestinationDescription& GetSplunkDestinationDescription() const{ return m_splunkDestinationDescription; }

    /**
     * <p>The destination in Splunk.</p>
     */
    inline bool SplunkDestinationDescriptionHasBeenSet() const { return m_splunkDestinationDescriptionHasBeenSet; }

    /**
     * <p>The destination in Splunk.</p>
     */
    inline void SetSplunkDestinationDescription(const SplunkDestinationDescription& value) { m_splunkDestinationDescriptionHasBeenSet = true; m_splunkDestinationDescription = value; }

    /**
     * <p>The destination in Splunk.</p>
     */
    inline void SetSplunkDestinationDescription(SplunkDestinationDescription&& value) { m_splunkDestinationDescriptionHasBeenSet = true; m_splunkDestinationDescription = std::move(value); }

    /**
     * <p>The destination in Splunk.</p>
     */
    inline DestinationDescription& WithSplunkDestinationDescription(const SplunkDestinationDescription& value) { SetSplunkDestinationDescription(value); return *this;}

    /**
     * <p>The destination in Splunk.</p>
     */
    inline DestinationDescription& WithSplunkDestinationDescription(SplunkDestinationDescription&& value) { SetSplunkDestinationDescription(std::move(value)); return *this;}


    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointDestinationDescription& GetHttpEndpointDestinationDescription() const{ return m_httpEndpointDestinationDescription; }

    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline bool HttpEndpointDestinationDescriptionHasBeenSet() const { return m_httpEndpointDestinationDescriptionHasBeenSet; }

    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline void SetHttpEndpointDestinationDescription(const HttpEndpointDestinationDescription& value) { m_httpEndpointDestinationDescriptionHasBeenSet = true; m_httpEndpointDestinationDescription = value; }

    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline void SetHttpEndpointDestinationDescription(HttpEndpointDestinationDescription&& value) { m_httpEndpointDestinationDescriptionHasBeenSet = true; m_httpEndpointDestinationDescription = std::move(value); }

    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline DestinationDescription& WithHttpEndpointDestinationDescription(const HttpEndpointDestinationDescription& value) { SetHttpEndpointDestinationDescription(value); return *this;}

    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline DestinationDescription& WithHttpEndpointDestinationDescription(HttpEndpointDestinationDescription&& value) { SetHttpEndpointDestinationDescription(std::move(value)); return *this;}


    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline const AmazonOpenSearchServerlessDestinationDescription& GetAmazonOpenSearchServerlessDestinationDescription() const{ return m_amazonOpenSearchServerlessDestinationDescription; }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline bool AmazonOpenSearchServerlessDestinationDescriptionHasBeenSet() const { return m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet; }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline void SetAmazonOpenSearchServerlessDestinationDescription(const AmazonOpenSearchServerlessDestinationDescription& value) { m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet = true; m_amazonOpenSearchServerlessDestinationDescription = value; }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline void SetAmazonOpenSearchServerlessDestinationDescription(AmazonOpenSearchServerlessDestinationDescription&& value) { m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet = true; m_amazonOpenSearchServerlessDestinationDescription = std::move(value); }

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline DestinationDescription& WithAmazonOpenSearchServerlessDestinationDescription(const AmazonOpenSearchServerlessDestinationDescription& value) { SetAmazonOpenSearchServerlessDestinationDescription(value); return *this;}

    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline DestinationDescription& WithAmazonOpenSearchServerlessDestinationDescription(AmazonOpenSearchServerlessDestinationDescription&& value) { SetAmazonOpenSearchServerlessDestinationDescription(std::move(value)); return *this;}

  private:

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet = false;

    ExtendedS3DestinationDescription m_extendedS3DestinationDescription;
    bool m_extendedS3DestinationDescriptionHasBeenSet = false;

    RedshiftDestinationDescription m_redshiftDestinationDescription;
    bool m_redshiftDestinationDescriptionHasBeenSet = false;

    ElasticsearchDestinationDescription m_elasticsearchDestinationDescription;
    bool m_elasticsearchDestinationDescriptionHasBeenSet = false;

    AmazonopensearchserviceDestinationDescription m_amazonopensearchserviceDestinationDescription;
    bool m_amazonopensearchserviceDestinationDescriptionHasBeenSet = false;

    SplunkDestinationDescription m_splunkDestinationDescription;
    bool m_splunkDestinationDescriptionHasBeenSet = false;

    HttpEndpointDestinationDescription m_httpEndpointDestinationDescription;
    bool m_httpEndpointDestinationDescriptionHasBeenSet = false;

    AmazonOpenSearchServerlessDestinationDescription m_amazonOpenSearchServerlessDestinationDescription;
    bool m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
