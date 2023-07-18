﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/BufferingHints.h>
#include <aws/firehose/model/CompressionFormat.h>
#include <aws/firehose/model/EncryptionConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/S3BackupMode.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/DataFormatConversionConfiguration.h>
#include <aws/firehose/model/DynamicPartitioningConfiguration.h>
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
   * <p>Describes an update for a destination in Amazon S3.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ExtendedS3DestinationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_FIREHOSE_API ExtendedS3DestinationUpdate
  {
  public:
    ExtendedS3DestinationUpdate();
    ExtendedS3DestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    ExtendedS3DestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetErrorOutputPrefix() const{ return m_errorOutputPrefix; }

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline bool ErrorOutputPrefixHasBeenSet() const { return m_errorOutputPrefixHasBeenSet; }

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline void SetErrorOutputPrefix(const Aws::String& value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix = value; }

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline void SetErrorOutputPrefix(Aws::String&& value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix = std::move(value); }

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline void SetErrorOutputPrefix(const char* value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix.assign(value); }

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithErrorOutputPrefix(const Aws::String& value) { SetErrorOutputPrefix(value); return *this;}

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithErrorOutputPrefix(Aws::String&& value) { SetErrorOutputPrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix that Kinesis Data Firehose evaluates and adds to failed records
     * before writing them to S3. This prefix appears immediately following the bucket
     * name. For information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithErrorOutputPrefix(const char* value) { SetErrorOutputPrefix(value); return *this;}


    /**
     * <p>The buffering option.</p>
     */
    inline const BufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering option.</p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering option.</p>
     */
    inline void SetBufferingHints(const BufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering option.</p>
     */
    inline void SetBufferingHints(BufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering option.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBufferingHints(const BufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering option.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBufferingHints(BufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline const CompressionFormat& GetCompressionFormat() const{ return m_compressionFormat; }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline bool CompressionFormatHasBeenSet() const { return m_compressionFormatHasBeenSet; }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline void SetCompressionFormat(const CompressionFormat& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline void SetCompressionFormat(CompressionFormat&& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = std::move(value); }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline ExtendedS3DestinationUpdate& WithCompressionFormat(const CompressionFormat& value) { SetCompressionFormat(value); return *this;}

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline ExtendedS3DestinationUpdate& WithCompressionFormat(CompressionFormat&& value) { SetCompressionFormat(std::move(value)); return *this;}


    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline ExtendedS3DestinationUpdate& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline ExtendedS3DestinationUpdate& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon CloudWatch logging options for your delivery stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>The Amazon CloudWatch logging options for your delivery stream.</p>
     */
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>The Amazon CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    /**
     * <p>The Amazon CloudWatch logging options for your delivery stream.</p>
     */
    inline ExtendedS3DestinationUpdate& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>The Amazon CloudWatch logging options for your delivery stream.</p>
     */
    inline ExtendedS3DestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}


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
    inline ExtendedS3DestinationUpdate& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    /**
     * <p>The data processing configuration.</p>
     */
    inline ExtendedS3DestinationUpdate& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>You can update a delivery stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the delivery stream to disable
     * it. </p>
     */
    inline const S3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>You can update a delivery stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the delivery stream to disable
     * it. </p>
     */
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    /**
     * <p>You can update a delivery stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the delivery stream to disable
     * it. </p>
     */
    inline void SetS3BackupMode(const S3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>You can update a delivery stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the delivery stream to disable
     * it. </p>
     */
    inline void SetS3BackupMode(S3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    /**
     * <p>You can update a delivery stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the delivery stream to disable
     * it. </p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupMode(const S3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>You can update a delivery stream to enable Amazon S3 backup if it is
     * disabled. If backup is enabled, you can't update the delivery stream to disable
     * it. </p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupMode(S3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline const S3DestinationUpdate& GetS3BackupUpdate() const{ return m_s3BackupUpdate; }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline bool S3BackupUpdateHasBeenSet() const { return m_s3BackupUpdateHasBeenSet; }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline void SetS3BackupUpdate(const S3DestinationUpdate& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = value; }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline void SetS3BackupUpdate(S3DestinationUpdate&& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = std::move(value); }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupUpdate(const S3DestinationUpdate& value) { SetS3BackupUpdate(value); return *this;}

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupUpdate(S3DestinationUpdate&& value) { SetS3BackupUpdate(std::move(value)); return *this;}


    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline const DataFormatConversionConfiguration& GetDataFormatConversionConfiguration() const{ return m_dataFormatConversionConfiguration; }

    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline bool DataFormatConversionConfigurationHasBeenSet() const { return m_dataFormatConversionConfigurationHasBeenSet; }

    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline void SetDataFormatConversionConfiguration(const DataFormatConversionConfiguration& value) { m_dataFormatConversionConfigurationHasBeenSet = true; m_dataFormatConversionConfiguration = value; }

    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline void SetDataFormatConversionConfiguration(DataFormatConversionConfiguration&& value) { m_dataFormatConversionConfigurationHasBeenSet = true; m_dataFormatConversionConfiguration = std::move(value); }

    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline ExtendedS3DestinationUpdate& WithDataFormatConversionConfiguration(const DataFormatConversionConfiguration& value) { SetDataFormatConversionConfiguration(value); return *this;}

    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline ExtendedS3DestinationUpdate& WithDataFormatConversionConfiguration(DataFormatConversionConfiguration&& value) { SetDataFormatConversionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html">https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html</a>
     * </p>
     */
    inline const DynamicPartitioningConfiguration& GetDynamicPartitioningConfiguration() const{ return m_dynamicPartitioningConfiguration; }

    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html">https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html</a>
     * </p>
     */
    inline bool DynamicPartitioningConfigurationHasBeenSet() const { return m_dynamicPartitioningConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html">https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html</a>
     * </p>
     */
    inline void SetDynamicPartitioningConfiguration(const DynamicPartitioningConfiguration& value) { m_dynamicPartitioningConfigurationHasBeenSet = true; m_dynamicPartitioningConfiguration = value; }

    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html">https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html</a>
     * </p>
     */
    inline void SetDynamicPartitioningConfiguration(DynamicPartitioningConfiguration&& value) { m_dynamicPartitioningConfigurationHasBeenSet = true; m_dynamicPartitioningConfiguration = std::move(value); }

    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html">https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html</a>
     * </p>
     */
    inline ExtendedS3DestinationUpdate& WithDynamicPartitioningConfiguration(const DynamicPartitioningConfiguration& value) { SetDynamicPartitioningConfiguration(value); return *this;}

    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html">https://docs.aws.amazon.com/firehose/latest/dev/dynamic-partitioning.html</a>
     * </p>
     */
    inline ExtendedS3DestinationUpdate& WithDynamicPartitioningConfiguration(DynamicPartitioningConfiguration&& value) { SetDynamicPartitioningConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet;

    Aws::String m_errorOutputPrefix;
    bool m_errorOutputPrefixHasBeenSet;

    BufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet;

    CompressionFormat m_compressionFormat;
    bool m_compressionFormatHasBeenSet;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet;

    S3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet;

    S3DestinationUpdate m_s3BackupUpdate;
    bool m_s3BackupUpdateHasBeenSet;

    DataFormatConversionConfiguration m_dataFormatConversionConfiguration;
    bool m_dataFormatConversionConfigurationHasBeenSet;

    DynamicPartitioningConfiguration m_dynamicPartitioningConfiguration;
    bool m_dynamicPartitioningConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
