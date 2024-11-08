/**
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
#include <aws/firehose/model/S3DestinationConfiguration.h>
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
   * <p>Describes the configuration of a destination in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ExtendedS3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class ExtendedS3DestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API ExtendedS3DestinationConfiguration();
    AWS_FIREHOSE_API ExtendedS3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ExtendedS3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline ExtendedS3DestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline ExtendedS3DestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }
    inline ExtendedS3DestinationConfiguration& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}
    inline ExtendedS3DestinationConfiguration& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline ExtendedS3DestinationConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline ExtendedS3DestinationConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix that Firehose evaluates and adds to failed records before writing
     * them to S3. This prefix appears immediately following the bucket name. For
     * information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetErrorOutputPrefix() const{ return m_errorOutputPrefix; }
    inline bool ErrorOutputPrefixHasBeenSet() const { return m_errorOutputPrefixHasBeenSet; }
    inline void SetErrorOutputPrefix(const Aws::String& value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix = value; }
    inline void SetErrorOutputPrefix(Aws::String&& value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix = std::move(value); }
    inline void SetErrorOutputPrefix(const char* value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix.assign(value); }
    inline ExtendedS3DestinationConfiguration& WithErrorOutputPrefix(const Aws::String& value) { SetErrorOutputPrefix(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithErrorOutputPrefix(Aws::String&& value) { SetErrorOutputPrefix(std::move(value)); return *this;}
    inline ExtendedS3DestinationConfiguration& WithErrorOutputPrefix(const char* value) { SetErrorOutputPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering option.</p>
     */
    inline const BufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const BufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(BufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithBufferingHints(const BufferingHints& value) { SetBufferingHints(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithBufferingHints(BufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression format. If no value is specified, the default is
     * UNCOMPRESSED.</p>
     */
    inline const CompressionFormat& GetCompressionFormat() const{ return m_compressionFormat; }
    inline bool CompressionFormatHasBeenSet() const { return m_compressionFormatHasBeenSet; }
    inline void SetCompressionFormat(const CompressionFormat& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }
    inline void SetCompressionFormat(CompressionFormat&& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithCompressionFormat(const CompressionFormat& value) { SetCompressionFormat(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithCompressionFormat(CompressionFormat&& value) { SetCompressionFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 backup mode. After you create a Firehose stream, you can update
     * it to enable Amazon S3 backup if it is disabled. If backup is enabled, you can't
     * update the Firehose stream to disable it. </p>
     */
    inline const S3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const S3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(S3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithS3BackupMode(const S3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithS3BackupMode(S3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for backup in Amazon S3.</p>
     */
    inline const S3DestinationConfiguration& GetS3BackupConfiguration() const{ return m_s3BackupConfiguration; }
    inline bool S3BackupConfigurationHasBeenSet() const { return m_s3BackupConfigurationHasBeenSet; }
    inline void SetS3BackupConfiguration(const S3DestinationConfiguration& value) { m_s3BackupConfigurationHasBeenSet = true; m_s3BackupConfiguration = value; }
    inline void SetS3BackupConfiguration(S3DestinationConfiguration&& value) { m_s3BackupConfigurationHasBeenSet = true; m_s3BackupConfiguration = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithS3BackupConfiguration(const S3DestinationConfiguration& value) { SetS3BackupConfiguration(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithS3BackupConfiguration(S3DestinationConfiguration&& value) { SetS3BackupConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline const DataFormatConversionConfiguration& GetDataFormatConversionConfiguration() const{ return m_dataFormatConversionConfiguration; }
    inline bool DataFormatConversionConfigurationHasBeenSet() const { return m_dataFormatConversionConfigurationHasBeenSet; }
    inline void SetDataFormatConversionConfiguration(const DataFormatConversionConfiguration& value) { m_dataFormatConversionConfigurationHasBeenSet = true; m_dataFormatConversionConfiguration = value; }
    inline void SetDataFormatConversionConfiguration(DataFormatConversionConfiguration&& value) { m_dataFormatConversionConfigurationHasBeenSet = true; m_dataFormatConversionConfiguration = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithDataFormatConversionConfiguration(const DataFormatConversionConfiguration& value) { SetDataFormatConversionConfiguration(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithDataFormatConversionConfiguration(DataFormatConversionConfiguration&& value) { SetDataFormatConversionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * </p>
     */
    inline const DynamicPartitioningConfiguration& GetDynamicPartitioningConfiguration() const{ return m_dynamicPartitioningConfiguration; }
    inline bool DynamicPartitioningConfigurationHasBeenSet() const { return m_dynamicPartitioningConfigurationHasBeenSet; }
    inline void SetDynamicPartitioningConfiguration(const DynamicPartitioningConfiguration& value) { m_dynamicPartitioningConfigurationHasBeenSet = true; m_dynamicPartitioningConfiguration = value; }
    inline void SetDynamicPartitioningConfiguration(DynamicPartitioningConfiguration&& value) { m_dynamicPartitioningConfigurationHasBeenSet = true; m_dynamicPartitioningConfiguration = std::move(value); }
    inline ExtendedS3DestinationConfiguration& WithDynamicPartitioningConfiguration(const DynamicPartitioningConfiguration& value) { SetDynamicPartitioningConfiguration(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithDynamicPartitioningConfiguration(DynamicPartitioningConfiguration&& value) { SetDynamicPartitioningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a file extension. It will override the default file extension</p>
     */
    inline const Aws::String& GetFileExtension() const{ return m_fileExtension; }
    inline bool FileExtensionHasBeenSet() const { return m_fileExtensionHasBeenSet; }
    inline void SetFileExtension(const Aws::String& value) { m_fileExtensionHasBeenSet = true; m_fileExtension = value; }
    inline void SetFileExtension(Aws::String&& value) { m_fileExtensionHasBeenSet = true; m_fileExtension = std::move(value); }
    inline void SetFileExtension(const char* value) { m_fileExtensionHasBeenSet = true; m_fileExtension.assign(value); }
    inline ExtendedS3DestinationConfiguration& WithFileExtension(const Aws::String& value) { SetFileExtension(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithFileExtension(Aws::String&& value) { SetFileExtension(std::move(value)); return *this;}
    inline ExtendedS3DestinationConfiguration& WithFileExtension(const char* value) { SetFileExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone you prefer. UTC is the default.</p>
     */
    inline const Aws::String& GetCustomTimeZone() const{ return m_customTimeZone; }
    inline bool CustomTimeZoneHasBeenSet() const { return m_customTimeZoneHasBeenSet; }
    inline void SetCustomTimeZone(const Aws::String& value) { m_customTimeZoneHasBeenSet = true; m_customTimeZone = value; }
    inline void SetCustomTimeZone(Aws::String&& value) { m_customTimeZoneHasBeenSet = true; m_customTimeZone = std::move(value); }
    inline void SetCustomTimeZone(const char* value) { m_customTimeZoneHasBeenSet = true; m_customTimeZone.assign(value); }
    inline ExtendedS3DestinationConfiguration& WithCustomTimeZone(const Aws::String& value) { SetCustomTimeZone(value); return *this;}
    inline ExtendedS3DestinationConfiguration& WithCustomTimeZone(Aws::String&& value) { SetCustomTimeZone(std::move(value)); return *this;}
    inline ExtendedS3DestinationConfiguration& WithCustomTimeZone(const char* value) { SetCustomTimeZone(value); return *this;}
    ///@}
  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_errorOutputPrefix;
    bool m_errorOutputPrefixHasBeenSet = false;

    BufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    CompressionFormat m_compressionFormat;
    bool m_compressionFormatHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    S3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationConfiguration m_s3BackupConfiguration;
    bool m_s3BackupConfigurationHasBeenSet = false;

    DataFormatConversionConfiguration m_dataFormatConversionConfiguration;
    bool m_dataFormatConversionConfigurationHasBeenSet = false;

    DynamicPartitioningConfiguration m_dynamicPartitioningConfiguration;
    bool m_dynamicPartitioningConfigurationHasBeenSet = false;

    Aws::String m_fileExtension;
    bool m_fileExtensionHasBeenSet = false;

    Aws::String m_customTimeZone;
    bool m_customTimeZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
