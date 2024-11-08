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
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/S3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API S3DestinationConfiguration();
    AWS_FIREHOSE_API S3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API S3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline S3DestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline S3DestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline S3DestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
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
    inline S3DestinationConfiguration& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}
    inline S3DestinationConfiguration& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}
    inline S3DestinationConfiguration& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}
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
    inline S3DestinationConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline S3DestinationConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline S3DestinationConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}
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
    inline S3DestinationConfiguration& WithErrorOutputPrefix(const Aws::String& value) { SetErrorOutputPrefix(value); return *this;}
    inline S3DestinationConfiguration& WithErrorOutputPrefix(Aws::String&& value) { SetErrorOutputPrefix(std::move(value)); return *this;}
    inline S3DestinationConfiguration& WithErrorOutputPrefix(const char* value) { SetErrorOutputPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering option. If no value is specified, <code>BufferingHints</code>
     * object default values are used.</p>
     */
    inline const BufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const BufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(BufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline S3DestinationConfiguration& WithBufferingHints(const BufferingHints& value) { SetBufferingHints(value); return *this;}
    inline S3DestinationConfiguration& WithBufferingHints(BufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression format. If no value is specified, the default is
     * <code>UNCOMPRESSED</code>.</p> <p>The compression formats <code>SNAPPY</code> or
     * <code>ZIP</code> cannot be specified for Amazon Redshift destinations because
     * they are not supported by the Amazon Redshift <code>COPY</code> operation that
     * reads from the S3 bucket.</p>
     */
    inline const CompressionFormat& GetCompressionFormat() const{ return m_compressionFormat; }
    inline bool CompressionFormatHasBeenSet() const { return m_compressionFormatHasBeenSet; }
    inline void SetCompressionFormat(const CompressionFormat& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = value; }
    inline void SetCompressionFormat(CompressionFormat&& value) { m_compressionFormatHasBeenSet = true; m_compressionFormat = std::move(value); }
    inline S3DestinationConfiguration& WithCompressionFormat(const CompressionFormat& value) { SetCompressionFormat(value); return *this;}
    inline S3DestinationConfiguration& WithCompressionFormat(CompressionFormat&& value) { SetCompressionFormat(std::move(value)); return *this;}
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
    inline S3DestinationConfiguration& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline S3DestinationConfiguration& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline S3DestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline S3DestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
