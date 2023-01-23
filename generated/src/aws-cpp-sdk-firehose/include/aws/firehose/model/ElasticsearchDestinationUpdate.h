/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/ElasticsearchIndexRotationPeriod.h>
#include <aws/firehose/model/ElasticsearchBufferingHints.h>
#include <aws/firehose/model/ElasticsearchRetryOptions.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
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
   * <p>Describes an update for a destination in Amazon ES.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ElasticsearchDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API ElasticsearchDestinationUpdate();
    AWS_FIREHOSE_API ElasticsearchDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ElasticsearchDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon ES Configuration API and for indexing documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Kinesis Data Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the IAM role specified in
     * <code>RoleARN</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}


    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline ElasticsearchDestinationUpdate& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline ElasticsearchDestinationUpdate& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline ElasticsearchDestinationUpdate& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}


    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationUpdate& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationUpdate& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationUpdate& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline ElasticsearchDestinationUpdate& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline ElasticsearchDestinationUpdate& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Kinesis Data Firehose returns an error during
     * runtime.</p> <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update
     * your delivery stream, Kinesis Data Firehose still delivers data to Elasticsearch
     * with the old index name and type name. If you want to update your delivery
     * stream with a new index name, provide an empty string for <code>TypeName</code>.
     * </p>
     */
    inline ElasticsearchDestinationUpdate& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline const ElasticsearchIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline void SetIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline ElasticsearchDestinationUpdate& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}


    /**
     * <p>The buffering options. If no value is specified,
     * <code>ElasticsearchBufferingHints</code> object default values are used. </p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering options. If no value is specified,
     * <code>ElasticsearchBufferingHints</code> object default values are used. </p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering options. If no value is specified,
     * <code>ElasticsearchBufferingHints</code> object default values are used. </p>
     */
    inline void SetBufferingHints(const ElasticsearchBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering options. If no value is specified,
     * <code>ElasticsearchBufferingHints</code> object default values are used. </p>
     */
    inline void SetBufferingHints(ElasticsearchBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering options. If no value is specified,
     * <code>ElasticsearchBufferingHints</code> object default values are used. </p>
     */
    inline ElasticsearchDestinationUpdate& WithBufferingHints(const ElasticsearchBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering options. If no value is specified,
     * <code>ElasticsearchBufferingHints</code> object default values are used. </p>
     */
    inline ElasticsearchDestinationUpdate& WithBufferingHints(ElasticsearchBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon ES. The default value is 300 (5 minutes).</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon ES. The default value is 300 (5 minutes).</p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon ES. The default value is 300 (5 minutes).</p>
     */
    inline void SetRetryOptions(const ElasticsearchRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon ES. The default value is 300 (5 minutes).</p>
     */
    inline void SetRetryOptions(ElasticsearchRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon ES. The default value is 300 (5 minutes).</p>
     */
    inline ElasticsearchDestinationUpdate& WithRetryOptions(const ElasticsearchRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon ES. The default value is 300 (5 minutes).</p>
     */
    inline ElasticsearchDestinationUpdate& WithRetryOptions(ElasticsearchRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline const S3DestinationUpdate& GetS3Update() const{ return m_s3Update; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline void SetS3Update(const S3DestinationUpdate& value) { m_s3UpdateHasBeenSet = true; m_s3Update = value; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline void SetS3Update(S3DestinationUpdate&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::move(value); }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline ElasticsearchDestinationUpdate& WithS3Update(const S3DestinationUpdate& value) { SetS3Update(value); return *this;}

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline ElasticsearchDestinationUpdate& WithS3Update(S3DestinationUpdate&& value) { SetS3Update(std::move(value)); return *this;}


    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    /**
     * <p>The data processing configuration.</p>
     */
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    /**
     * <p>The data processing configuration.</p>
     */
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    /**
     * <p>The data processing configuration.</p>
     */
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    /**
     * <p>The data processing configuration.</p>
     */
    inline ElasticsearchDestinationUpdate& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    /**
     * <p>The data processing configuration.</p>
     */
    inline ElasticsearchDestinationUpdate& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline ElasticsearchDestinationUpdate& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline ElasticsearchDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}

  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_domainARN;
    bool m_domainARNHasBeenSet = false;

    Aws::String m_clusterEndpoint;
    bool m_clusterEndpointHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    ElasticsearchIndexRotationPeriod m_indexRotationPeriod;
    bool m_indexRotationPeriodHasBeenSet = false;

    ElasticsearchBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    ElasticsearchRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    S3DestinationUpdate m_s3Update;
    bool m_s3UpdateHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
