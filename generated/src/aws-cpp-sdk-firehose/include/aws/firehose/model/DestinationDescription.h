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
#include <aws/firehose/model/SnowflakeDestinationDescription.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessDestinationDescription.h>
#include <aws/firehose/model/IcebergDestinationDescription.h>
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
   * <p>Describes the destination for a Firehose stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DestinationDescription">AWS
   * API Reference</a></p>
   */
  class DestinationDescription
  {
  public:
    AWS_FIREHOSE_API DestinationDescription() = default;
    AWS_FIREHOSE_API DestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationId() const { return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    template<typename DestinationIdT = Aws::String>
    void SetDestinationId(DestinationIdT&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::forward<DestinationIdT>(value); }
    template<typename DestinationIdT = Aws::String>
    DestinationDescription& WithDestinationId(DestinationIdT&& value) { SetDestinationId(std::forward<DestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Deprecated] The destination in Amazon S3.</p>
     */
    inline const S3DestinationDescription& GetS3DestinationDescription() const { return m_s3DestinationDescription; }
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }
    template<typename S3DestinationDescriptionT = S3DestinationDescription>
    void SetS3DestinationDescription(S3DestinationDescriptionT&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::forward<S3DestinationDescriptionT>(value); }
    template<typename S3DestinationDescriptionT = S3DestinationDescription>
    DestinationDescription& WithS3DestinationDescription(S3DestinationDescriptionT&& value) { SetS3DestinationDescription(std::forward<S3DestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon S3.</p>
     */
    inline const ExtendedS3DestinationDescription& GetExtendedS3DestinationDescription() const { return m_extendedS3DestinationDescription; }
    inline bool ExtendedS3DestinationDescriptionHasBeenSet() const { return m_extendedS3DestinationDescriptionHasBeenSet; }
    template<typename ExtendedS3DestinationDescriptionT = ExtendedS3DestinationDescription>
    void SetExtendedS3DestinationDescription(ExtendedS3DestinationDescriptionT&& value) { m_extendedS3DestinationDescriptionHasBeenSet = true; m_extendedS3DestinationDescription = std::forward<ExtendedS3DestinationDescriptionT>(value); }
    template<typename ExtendedS3DestinationDescriptionT = ExtendedS3DestinationDescription>
    DestinationDescription& WithExtendedS3DestinationDescription(ExtendedS3DestinationDescriptionT&& value) { SetExtendedS3DestinationDescription(std::forward<ExtendedS3DestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationDescription& GetRedshiftDestinationDescription() const { return m_redshiftDestinationDescription; }
    inline bool RedshiftDestinationDescriptionHasBeenSet() const { return m_redshiftDestinationDescriptionHasBeenSet; }
    template<typename RedshiftDestinationDescriptionT = RedshiftDestinationDescription>
    void SetRedshiftDestinationDescription(RedshiftDestinationDescriptionT&& value) { m_redshiftDestinationDescriptionHasBeenSet = true; m_redshiftDestinationDescription = std::forward<RedshiftDestinationDescriptionT>(value); }
    template<typename RedshiftDestinationDescriptionT = RedshiftDestinationDescription>
    DestinationDescription& WithRedshiftDestinationDescription(RedshiftDestinationDescriptionT&& value) { SetRedshiftDestinationDescription(std::forward<RedshiftDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline const ElasticsearchDestinationDescription& GetElasticsearchDestinationDescription() const { return m_elasticsearchDestinationDescription; }
    inline bool ElasticsearchDestinationDescriptionHasBeenSet() const { return m_elasticsearchDestinationDescriptionHasBeenSet; }
    template<typename ElasticsearchDestinationDescriptionT = ElasticsearchDestinationDescription>
    void SetElasticsearchDestinationDescription(ElasticsearchDestinationDescriptionT&& value) { m_elasticsearchDestinationDescriptionHasBeenSet = true; m_elasticsearchDestinationDescription = std::forward<ElasticsearchDestinationDescriptionT>(value); }
    template<typename ElasticsearchDestinationDescriptionT = ElasticsearchDestinationDescription>
    DestinationDescription& WithElasticsearchDestinationDescription(ElasticsearchDestinationDescriptionT&& value) { SetElasticsearchDestinationDescription(std::forward<ElasticsearchDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Amazon OpenSearch Service.</p>
     */
    inline const AmazonopensearchserviceDestinationDescription& GetAmazonopensearchserviceDestinationDescription() const { return m_amazonopensearchserviceDestinationDescription; }
    inline bool AmazonopensearchserviceDestinationDescriptionHasBeenSet() const { return m_amazonopensearchserviceDestinationDescriptionHasBeenSet; }
    template<typename AmazonopensearchserviceDestinationDescriptionT = AmazonopensearchserviceDestinationDescription>
    void SetAmazonopensearchserviceDestinationDescription(AmazonopensearchserviceDestinationDescriptionT&& value) { m_amazonopensearchserviceDestinationDescriptionHasBeenSet = true; m_amazonopensearchserviceDestinationDescription = std::forward<AmazonopensearchserviceDestinationDescriptionT>(value); }
    template<typename AmazonopensearchserviceDestinationDescriptionT = AmazonopensearchserviceDestinationDescription>
    DestinationDescription& WithAmazonopensearchserviceDestinationDescription(AmazonopensearchserviceDestinationDescriptionT&& value) { SetAmazonopensearchserviceDestinationDescription(std::forward<AmazonopensearchserviceDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in Splunk.</p>
     */
    inline const SplunkDestinationDescription& GetSplunkDestinationDescription() const { return m_splunkDestinationDescription; }
    inline bool SplunkDestinationDescriptionHasBeenSet() const { return m_splunkDestinationDescriptionHasBeenSet; }
    template<typename SplunkDestinationDescriptionT = SplunkDestinationDescription>
    void SetSplunkDestinationDescription(SplunkDestinationDescriptionT&& value) { m_splunkDestinationDescriptionHasBeenSet = true; m_splunkDestinationDescription = std::forward<SplunkDestinationDescriptionT>(value); }
    template<typename SplunkDestinationDescriptionT = SplunkDestinationDescription>
    DestinationDescription& WithSplunkDestinationDescription(SplunkDestinationDescriptionT&& value) { SetSplunkDestinationDescription(std::forward<SplunkDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointDestinationDescription& GetHttpEndpointDestinationDescription() const { return m_httpEndpointDestinationDescription; }
    inline bool HttpEndpointDestinationDescriptionHasBeenSet() const { return m_httpEndpointDestinationDescriptionHasBeenSet; }
    template<typename HttpEndpointDestinationDescriptionT = HttpEndpointDestinationDescription>
    void SetHttpEndpointDestinationDescription(HttpEndpointDestinationDescriptionT&& value) { m_httpEndpointDestinationDescriptionHasBeenSet = true; m_httpEndpointDestinationDescription = std::forward<HttpEndpointDestinationDescriptionT>(value); }
    template<typename HttpEndpointDestinationDescriptionT = HttpEndpointDestinationDescription>
    DestinationDescription& WithHttpEndpointDestinationDescription(HttpEndpointDestinationDescriptionT&& value) { SetHttpEndpointDestinationDescription(std::forward<HttpEndpointDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional description for the destination</p>
     */
    inline const SnowflakeDestinationDescription& GetSnowflakeDestinationDescription() const { return m_snowflakeDestinationDescription; }
    inline bool SnowflakeDestinationDescriptionHasBeenSet() const { return m_snowflakeDestinationDescriptionHasBeenSet; }
    template<typename SnowflakeDestinationDescriptionT = SnowflakeDestinationDescription>
    void SetSnowflakeDestinationDescription(SnowflakeDestinationDescriptionT&& value) { m_snowflakeDestinationDescriptionHasBeenSet = true; m_snowflakeDestinationDescription = std::forward<SnowflakeDestinationDescriptionT>(value); }
    template<typename SnowflakeDestinationDescriptionT = SnowflakeDestinationDescription>
    DestinationDescription& WithSnowflakeDestinationDescription(SnowflakeDestinationDescriptionT&& value) { SetSnowflakeDestinationDescription(std::forward<SnowflakeDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination in the Serverless offering for Amazon OpenSearch Service.</p>
     */
    inline const AmazonOpenSearchServerlessDestinationDescription& GetAmazonOpenSearchServerlessDestinationDescription() const { return m_amazonOpenSearchServerlessDestinationDescription; }
    inline bool AmazonOpenSearchServerlessDestinationDescriptionHasBeenSet() const { return m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet; }
    template<typename AmazonOpenSearchServerlessDestinationDescriptionT = AmazonOpenSearchServerlessDestinationDescription>
    void SetAmazonOpenSearchServerlessDestinationDescription(AmazonOpenSearchServerlessDestinationDescriptionT&& value) { m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet = true; m_amazonOpenSearchServerlessDestinationDescription = std::forward<AmazonOpenSearchServerlessDestinationDescriptionT>(value); }
    template<typename AmazonOpenSearchServerlessDestinationDescriptionT = AmazonOpenSearchServerlessDestinationDescription>
    DestinationDescription& WithAmazonOpenSearchServerlessDestinationDescription(AmazonOpenSearchServerlessDestinationDescriptionT&& value) { SetAmazonOpenSearchServerlessDestinationDescription(std::forward<AmazonOpenSearchServerlessDestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes a destination in Apache Iceberg Tables. </p>
     */
    inline const IcebergDestinationDescription& GetIcebergDestinationDescription() const { return m_icebergDestinationDescription; }
    inline bool IcebergDestinationDescriptionHasBeenSet() const { return m_icebergDestinationDescriptionHasBeenSet; }
    template<typename IcebergDestinationDescriptionT = IcebergDestinationDescription>
    void SetIcebergDestinationDescription(IcebergDestinationDescriptionT&& value) { m_icebergDestinationDescriptionHasBeenSet = true; m_icebergDestinationDescription = std::forward<IcebergDestinationDescriptionT>(value); }
    template<typename IcebergDestinationDescriptionT = IcebergDestinationDescription>
    DestinationDescription& WithIcebergDestinationDescription(IcebergDestinationDescriptionT&& value) { SetIcebergDestinationDescription(std::forward<IcebergDestinationDescriptionT>(value)); return *this;}
    ///@}
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

    SnowflakeDestinationDescription m_snowflakeDestinationDescription;
    bool m_snowflakeDestinationDescriptionHasBeenSet = false;

    AmazonOpenSearchServerlessDestinationDescription m_amazonOpenSearchServerlessDestinationDescription;
    bool m_amazonOpenSearchServerlessDestinationDescriptionHasBeenSet = false;

    IcebergDestinationDescription m_icebergDestinationDescription;
    bool m_icebergDestinationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
