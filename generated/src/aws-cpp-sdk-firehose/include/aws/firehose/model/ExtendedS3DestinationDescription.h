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
#include <aws/firehose/model/S3DestinationDescription.h>
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
   * <p>Describes a destination in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ExtendedS3DestinationDescription">AWS
   * API Reference</a></p>
   */
  class ExtendedS3DestinationDescription
  {
  public:
    AWS_FIREHOSE_API ExtendedS3DestinationDescription() = default;
    AWS_FIREHOSE_API ExtendedS3DestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ExtendedS3DestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    ExtendedS3DestinationDescription& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the S3 bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    template<typename BucketARNT = Aws::String>
    void SetBucketARN(BucketARNT&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::forward<BucketARNT>(value); }
    template<typename BucketARNT = Aws::String>
    ExtendedS3DestinationDescription& WithBucketARN(BucketARNT&& value) { SetBucketARN(std::forward<BucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The "YYYY/MM/DD/HH" time format prefix is automatically used for delivered
     * Amazon S3 files. You can also specify a custom prefix, as described in <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ExtendedS3DestinationDescription& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix that Firehose evaluates and adds to failed records before writing
     * them to S3. This prefix appears immediately following the bucket name. For
     * information about how to specify this prefix, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/s3-prefixes.html">Custom
     * Prefixes for Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetErrorOutputPrefix() const { return m_errorOutputPrefix; }
    inline bool ErrorOutputPrefixHasBeenSet() const { return m_errorOutputPrefixHasBeenSet; }
    template<typename ErrorOutputPrefixT = Aws::String>
    void SetErrorOutputPrefix(ErrorOutputPrefixT&& value) { m_errorOutputPrefixHasBeenSet = true; m_errorOutputPrefix = std::forward<ErrorOutputPrefixT>(value); }
    template<typename ErrorOutputPrefixT = Aws::String>
    ExtendedS3DestinationDescription& WithErrorOutputPrefix(ErrorOutputPrefixT&& value) { SetErrorOutputPrefix(std::forward<ErrorOutputPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering option.</p>
     */
    inline const BufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = BufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = BufferingHints>
    ExtendedS3DestinationDescription& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>.</p>
     */
    inline CompressionFormat GetCompressionFormat() const { return m_compressionFormat; }
    inline bool CompressionFormatHasBeenSet() const { return m_compressionFormatHasBeenSet; }
    inline void SetCompressionFormat(CompressionFormat value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }
    inline ExtendedS3DestinationDescription& WithCompressionFormat(CompressionFormat value) { SetCompressionFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration. If no value is specified, the default is no
     * encryption.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    ExtendedS3DestinationDescription& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    ExtendedS3DestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    ExtendedS3DestinationDescription& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline S3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(S3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline ExtendedS3DestinationDescription& WithS3BackupMode(S3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for backup in Amazon S3.</p>
     */
    inline const S3DestinationDescription& GetS3BackupDescription() const { return m_s3BackupDescription; }
    inline bool S3BackupDescriptionHasBeenSet() const { return m_s3BackupDescriptionHasBeenSet; }
    template<typename S3BackupDescriptionT = S3DestinationDescription>
    void SetS3BackupDescription(S3BackupDescriptionT&& value) { m_s3BackupDescriptionHasBeenSet = true; m_s3BackupDescription = std::forward<S3BackupDescriptionT>(value); }
    template<typename S3BackupDescriptionT = S3DestinationDescription>
    ExtendedS3DestinationDescription& WithS3BackupDescription(S3BackupDescriptionT&& value) { SetS3BackupDescription(std::forward<S3BackupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serializer, deserializer, and schema for converting data from the JSON
     * format to the Parquet or ORC format before writing it to Amazon S3.</p>
     */
    inline const DataFormatConversionConfiguration& GetDataFormatConversionConfiguration() const { return m_dataFormatConversionConfiguration; }
    inline bool DataFormatConversionConfigurationHasBeenSet() const { return m_dataFormatConversionConfigurationHasBeenSet; }
    template<typename DataFormatConversionConfigurationT = DataFormatConversionConfiguration>
    void SetDataFormatConversionConfiguration(DataFormatConversionConfigurationT&& value) { m_dataFormatConversionConfigurationHasBeenSet = true; m_dataFormatConversionConfiguration = std::forward<DataFormatConversionConfigurationT>(value); }
    template<typename DataFormatConversionConfigurationT = DataFormatConversionConfiguration>
    ExtendedS3DestinationDescription& WithDataFormatConversionConfiguration(DataFormatConversionConfigurationT&& value) { SetDataFormatConversionConfiguration(std::forward<DataFormatConversionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the dynamic partitioning mechanism that creates smaller
     * data sets from the streaming data by partitioning it based on partition keys.
     * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
     * </p>
     */
    inline const DynamicPartitioningConfiguration& GetDynamicPartitioningConfiguration() const { return m_dynamicPartitioningConfiguration; }
    inline bool DynamicPartitioningConfigurationHasBeenSet() const { return m_dynamicPartitioningConfigurationHasBeenSet; }
    template<typename DynamicPartitioningConfigurationT = DynamicPartitioningConfiguration>
    void SetDynamicPartitioningConfiguration(DynamicPartitioningConfigurationT&& value) { m_dynamicPartitioningConfigurationHasBeenSet = true; m_dynamicPartitioningConfiguration = std::forward<DynamicPartitioningConfigurationT>(value); }
    template<typename DynamicPartitioningConfigurationT = DynamicPartitioningConfiguration>
    ExtendedS3DestinationDescription& WithDynamicPartitioningConfiguration(DynamicPartitioningConfigurationT&& value) { SetDynamicPartitioningConfiguration(std::forward<DynamicPartitioningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a file extension. It will override the default file extension</p>
     */
    inline const Aws::String& GetFileExtension() const { return m_fileExtension; }
    inline bool FileExtensionHasBeenSet() const { return m_fileExtensionHasBeenSet; }
    template<typename FileExtensionT = Aws::String>
    void SetFileExtension(FileExtensionT&& value) { m_fileExtensionHasBeenSet = true; m_fileExtension = std::forward<FileExtensionT>(value); }
    template<typename FileExtensionT = Aws::String>
    ExtendedS3DestinationDescription& WithFileExtension(FileExtensionT&& value) { SetFileExtension(std::forward<FileExtensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone you prefer. UTC is the default.</p>
     */
    inline const Aws::String& GetCustomTimeZone() const { return m_customTimeZone; }
    inline bool CustomTimeZoneHasBeenSet() const { return m_customTimeZoneHasBeenSet; }
    template<typename CustomTimeZoneT = Aws::String>
    void SetCustomTimeZone(CustomTimeZoneT&& value) { m_customTimeZoneHasBeenSet = true; m_customTimeZone = std::forward<CustomTimeZoneT>(value); }
    template<typename CustomTimeZoneT = Aws::String>
    ExtendedS3DestinationDescription& WithCustomTimeZone(CustomTimeZoneT&& value) { SetCustomTimeZone(std::forward<CustomTimeZoneT>(value)); return *this;}
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

    CompressionFormat m_compressionFormat{CompressionFormat::NOT_SET};
    bool m_compressionFormatHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    S3BackupMode m_s3BackupMode{S3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationDescription m_s3BackupDescription;
    bool m_s3BackupDescriptionHasBeenSet = false;

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
