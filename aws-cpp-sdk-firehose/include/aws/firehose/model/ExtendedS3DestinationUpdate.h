﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/BufferingHints.h>
#include <aws/firehose/model/CompressionFormat.h>
#include <aws/firehose/model/EncryptionConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/S3BackupMode.h>
#include <aws/firehose/model/S3DestinationUpdate.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    ExtendedS3DestinationUpdate(const Aws::Utils::Json::JsonValue& jsonValue);
    ExtendedS3DestinationUpdate& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline ExtendedS3DestinationUpdate& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline ExtendedS3DestinationUpdate& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline ExtendedS3DestinationUpdate& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBucketARN(Aws::String&& value) { SetBucketARN(value); return *this;}

    /**
     * <p>The ARN of the S3 bucket.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithPrefix(Aws::String&& value) { SetPrefix(value); return *this;}

    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered S3
     * files. You can specify an extra prefix to be added in front of the time format
     * prefix. Note that if the prefix ends with a slash, it appears as a folder in the
     * S3 bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html">Amazon
     * S3 Object Name Format</a> in the <i>Amazon Kinesis Firehose Developer
     * Guide</i>.</p>
     */
    inline ExtendedS3DestinationUpdate& WithPrefix(const char* value) { SetPrefix(value); return *this;}

    /**
     * <p>The buffering option.</p>
     */
    inline const BufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering option.</p>
     */
    inline void SetBufferingHints(const BufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering option.</p>
     */
    inline void SetBufferingHints(BufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering option.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBufferingHints(const BufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering option.</p>
     */
    inline ExtendedS3DestinationUpdate& WithBufferingHints(BufferingHints&& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline const CompressionFormat& GetCompressionFormat() const{ return m_compressionFormat; }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline void SetCompressionFormat(const CompressionFormat& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline void SetCompressionFormat(CompressionFormat&& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline ExtendedS3DestinationUpdate& WithCompressionFormat(const CompressionFormat& value) { SetCompressionFormat(value); return *this;}

    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>. </p>
     */
    inline ExtendedS3DestinationUpdate& WithCompressionFormat(CompressionFormat&& value) { SetCompressionFormat(value); return *this;}

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline ExtendedS3DestinationUpdate& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline ExtendedS3DestinationUpdate& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline ExtendedS3DestinationUpdate& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>The CloudWatch logging options for your delivery stream.</p>
     */
    inline ExtendedS3DestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    /**
     * <p>The data processing configuration.</p>
     */
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    /**
     * <p>The data processing configuration.</p>
     */
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    /**
     * <p>The data processing configuration.</p>
     */
    inline ExtendedS3DestinationUpdate& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    /**
     * <p>The data processing configuration.</p>
     */
    inline ExtendedS3DestinationUpdate& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(value); return *this;}

    /**
     * <p>Enables or disables Amazon S3 backup mode.</p>
     */
    inline const S3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>Enables or disables Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(const S3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Enables or disables Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(S3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Enables or disables Amazon S3 backup mode.</p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupMode(const S3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>Enables or disables Amazon S3 backup mode.</p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupMode(S3BackupMode&& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline const S3DestinationUpdate& GetS3BackupUpdate() const{ return m_s3BackupUpdate; }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline void SetS3BackupUpdate(const S3DestinationUpdate& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = value; }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline void SetS3BackupUpdate(S3DestinationUpdate&& value) { m_s3BackupUpdateHasBeenSet = true; m_s3BackupUpdate = value; }

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupUpdate(const S3DestinationUpdate& value) { SetS3BackupUpdate(value); return *this;}

    /**
     * <p>The Amazon S3 destination for backup.</p>
     */
    inline ExtendedS3DestinationUpdate& WithS3BackupUpdate(S3DestinationUpdate&& value) { SetS3BackupUpdate(value); return *this;}

  private:
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;
    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
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
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
