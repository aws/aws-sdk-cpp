/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingS3DataType.h>
#include <aws/sagemaker/model/ProcessingS3InputMode.h>
#include <aws/sagemaker/model/ProcessingS3DataDistributionType.h>
#include <aws/sagemaker/model/ProcessingS3CompressionType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration for downloading input data from Amazon S3 into the processing
   * container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingS3Input">AWS
   * API Reference</a></p>
   */
  class ProcessingS3Input
  {
  public:
    AWS_SAGEMAKER_API ProcessingS3Input();
    AWS_SAGEMAKER_API ProcessingS3Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingS3Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline ProcessingS3Input& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline ProcessingS3Input& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI of the Amazon S3 prefix Amazon SageMaker downloads data required to
     * run a processing job.</p>
     */
    inline ProcessingS3Input& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline ProcessingS3Input& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline ProcessingS3Input& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>The local path in your container where you want Amazon SageMaker to write
     * input data to. <code>LocalPath</code> is an absolute path to the input data and
     * must begin with <code>/opt/ml/processing/</code>. <code>LocalPath</code> is a
     * required parameter when <code>AppManaged</code> is <code>False</code>
     * (default).</p>
     */
    inline ProcessingS3Input& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Whether you use an <code>S3Prefix</code> or a <code>ManifestFile</code> for
     * the data type. If you choose <code>S3Prefix</code>, <code>S3Uri</code>
     * identifies a key name prefix. Amazon SageMaker uses all objects with the
     * specified key name prefix for the processing job. If you choose
     * <code>ManifestFile</code>, <code>S3Uri</code> identifies an object that is a
     * manifest file containing a list of object keys that you want Amazon SageMaker to
     * use for the processing job.</p>
     */
    inline const ProcessingS3DataType& GetS3DataType() const{ return m_s3DataType; }

    /**
     * <p>Whether you use an <code>S3Prefix</code> or a <code>ManifestFile</code> for
     * the data type. If you choose <code>S3Prefix</code>, <code>S3Uri</code>
     * identifies a key name prefix. Amazon SageMaker uses all objects with the
     * specified key name prefix for the processing job. If you choose
     * <code>ManifestFile</code>, <code>S3Uri</code> identifies an object that is a
     * manifest file containing a list of object keys that you want Amazon SageMaker to
     * use for the processing job.</p>
     */
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }

    /**
     * <p>Whether you use an <code>S3Prefix</code> or a <code>ManifestFile</code> for
     * the data type. If you choose <code>S3Prefix</code>, <code>S3Uri</code>
     * identifies a key name prefix. Amazon SageMaker uses all objects with the
     * specified key name prefix for the processing job. If you choose
     * <code>ManifestFile</code>, <code>S3Uri</code> identifies an object that is a
     * manifest file containing a list of object keys that you want Amazon SageMaker to
     * use for the processing job.</p>
     */
    inline void SetS3DataType(const ProcessingS3DataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }

    /**
     * <p>Whether you use an <code>S3Prefix</code> or a <code>ManifestFile</code> for
     * the data type. If you choose <code>S3Prefix</code>, <code>S3Uri</code>
     * identifies a key name prefix. Amazon SageMaker uses all objects with the
     * specified key name prefix for the processing job. If you choose
     * <code>ManifestFile</code>, <code>S3Uri</code> identifies an object that is a
     * manifest file containing a list of object keys that you want Amazon SageMaker to
     * use for the processing job.</p>
     */
    inline void SetS3DataType(ProcessingS3DataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }

    /**
     * <p>Whether you use an <code>S3Prefix</code> or a <code>ManifestFile</code> for
     * the data type. If you choose <code>S3Prefix</code>, <code>S3Uri</code>
     * identifies a key name prefix. Amazon SageMaker uses all objects with the
     * specified key name prefix for the processing job. If you choose
     * <code>ManifestFile</code>, <code>S3Uri</code> identifies an object that is a
     * manifest file containing a list of object keys that you want Amazon SageMaker to
     * use for the processing job.</p>
     */
    inline ProcessingS3Input& WithS3DataType(const ProcessingS3DataType& value) { SetS3DataType(value); return *this;}

    /**
     * <p>Whether you use an <code>S3Prefix</code> or a <code>ManifestFile</code> for
     * the data type. If you choose <code>S3Prefix</code>, <code>S3Uri</code>
     * identifies a key name prefix. Amazon SageMaker uses all objects with the
     * specified key name prefix for the processing job. If you choose
     * <code>ManifestFile</code>, <code>S3Uri</code> identifies an object that is a
     * manifest file containing a list of object keys that you want Amazon SageMaker to
     * use for the processing job.</p>
     */
    inline ProcessingS3Input& WithS3DataType(ProcessingS3DataType&& value) { SetS3DataType(std::move(value)); return *this;}


    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In File
     * mode, Amazon SageMaker copies the data from the input source onto the local ML
     * storage volume before starting your processing container. This is the most
     * commonly used input mode. In <code>Pipe</code> mode, Amazon SageMaker streams
     * input data from the source directly to your processing container into named
     * pipes without using the ML storage volume.</p>
     */
    inline const ProcessingS3InputMode& GetS3InputMode() const{ return m_s3InputMode; }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In File
     * mode, Amazon SageMaker copies the data from the input source onto the local ML
     * storage volume before starting your processing container. This is the most
     * commonly used input mode. In <code>Pipe</code> mode, Amazon SageMaker streams
     * input data from the source directly to your processing container into named
     * pipes without using the ML storage volume.</p>
     */
    inline bool S3InputModeHasBeenSet() const { return m_s3InputModeHasBeenSet; }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In File
     * mode, Amazon SageMaker copies the data from the input source onto the local ML
     * storage volume before starting your processing container. This is the most
     * commonly used input mode. In <code>Pipe</code> mode, Amazon SageMaker streams
     * input data from the source directly to your processing container into named
     * pipes without using the ML storage volume.</p>
     */
    inline void SetS3InputMode(const ProcessingS3InputMode& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = value; }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In File
     * mode, Amazon SageMaker copies the data from the input source onto the local ML
     * storage volume before starting your processing container. This is the most
     * commonly used input mode. In <code>Pipe</code> mode, Amazon SageMaker streams
     * input data from the source directly to your processing container into named
     * pipes without using the ML storage volume.</p>
     */
    inline void SetS3InputMode(ProcessingS3InputMode&& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = std::move(value); }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In File
     * mode, Amazon SageMaker copies the data from the input source onto the local ML
     * storage volume before starting your processing container. This is the most
     * commonly used input mode. In <code>Pipe</code> mode, Amazon SageMaker streams
     * input data from the source directly to your processing container into named
     * pipes without using the ML storage volume.</p>
     */
    inline ProcessingS3Input& WithS3InputMode(const ProcessingS3InputMode& value) { SetS3InputMode(value); return *this;}

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In File
     * mode, Amazon SageMaker copies the data from the input source onto the local ML
     * storage volume before starting your processing container. This is the most
     * commonly used input mode. In <code>Pipe</code> mode, Amazon SageMaker streams
     * input data from the source directly to your processing container into named
     * pipes without using the ML storage volume.</p>
     */
    inline ProcessingS3Input& WithS3InputMode(ProcessingS3InputMode&& value) { SetS3InputMode(std::move(value)); return *this;}


    /**
     * <p>Whether to distribute the data from Amazon S3 to all processing instances
     * with <code>FullyReplicated</code>, or whether the data from Amazon S3 is shared
     * by Amazon S3 key, downloading one shard of data to each processing instance.</p>
     */
    inline const ProcessingS3DataDistributionType& GetS3DataDistributionType() const{ return m_s3DataDistributionType; }

    /**
     * <p>Whether to distribute the data from Amazon S3 to all processing instances
     * with <code>FullyReplicated</code>, or whether the data from Amazon S3 is shared
     * by Amazon S3 key, downloading one shard of data to each processing instance.</p>
     */
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }

    /**
     * <p>Whether to distribute the data from Amazon S3 to all processing instances
     * with <code>FullyReplicated</code>, or whether the data from Amazon S3 is shared
     * by Amazon S3 key, downloading one shard of data to each processing instance.</p>
     */
    inline void SetS3DataDistributionType(const ProcessingS3DataDistributionType& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }

    /**
     * <p>Whether to distribute the data from Amazon S3 to all processing instances
     * with <code>FullyReplicated</code>, or whether the data from Amazon S3 is shared
     * by Amazon S3 key, downloading one shard of data to each processing instance.</p>
     */
    inline void SetS3DataDistributionType(ProcessingS3DataDistributionType&& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = std::move(value); }

    /**
     * <p>Whether to distribute the data from Amazon S3 to all processing instances
     * with <code>FullyReplicated</code>, or whether the data from Amazon S3 is shared
     * by Amazon S3 key, downloading one shard of data to each processing instance.</p>
     */
    inline ProcessingS3Input& WithS3DataDistributionType(const ProcessingS3DataDistributionType& value) { SetS3DataDistributionType(value); return *this;}

    /**
     * <p>Whether to distribute the data from Amazon S3 to all processing instances
     * with <code>FullyReplicated</code>, or whether the data from Amazon S3 is shared
     * by Amazon S3 key, downloading one shard of data to each processing instance.</p>
     */
    inline ProcessingS3Input& WithS3DataDistributionType(ProcessingS3DataDistributionType&& value) { SetS3DataDistributionType(std::move(value)); return *this;}


    /**
     * <p>Whether to GZIP-decompress the data in Amazon S3 as it is streamed into the
     * processing container. <code>Gzip</code> can only be used when <code>Pipe</code>
     * mode is specified as the <code>S3InputMode</code>. In <code>Pipe</code> mode,
     * Amazon SageMaker streams input data from the source directly to your container
     * without using the EBS volume.</p>
     */
    inline const ProcessingS3CompressionType& GetS3CompressionType() const{ return m_s3CompressionType; }

    /**
     * <p>Whether to GZIP-decompress the data in Amazon S3 as it is streamed into the
     * processing container. <code>Gzip</code> can only be used when <code>Pipe</code>
     * mode is specified as the <code>S3InputMode</code>. In <code>Pipe</code> mode,
     * Amazon SageMaker streams input data from the source directly to your container
     * without using the EBS volume.</p>
     */
    inline bool S3CompressionTypeHasBeenSet() const { return m_s3CompressionTypeHasBeenSet; }

    /**
     * <p>Whether to GZIP-decompress the data in Amazon S3 as it is streamed into the
     * processing container. <code>Gzip</code> can only be used when <code>Pipe</code>
     * mode is specified as the <code>S3InputMode</code>. In <code>Pipe</code> mode,
     * Amazon SageMaker streams input data from the source directly to your container
     * without using the EBS volume.</p>
     */
    inline void SetS3CompressionType(const ProcessingS3CompressionType& value) { m_s3CompressionTypeHasBeenSet = true; m_s3CompressionType = value; }

    /**
     * <p>Whether to GZIP-decompress the data in Amazon S3 as it is streamed into the
     * processing container. <code>Gzip</code> can only be used when <code>Pipe</code>
     * mode is specified as the <code>S3InputMode</code>. In <code>Pipe</code> mode,
     * Amazon SageMaker streams input data from the source directly to your container
     * without using the EBS volume.</p>
     */
    inline void SetS3CompressionType(ProcessingS3CompressionType&& value) { m_s3CompressionTypeHasBeenSet = true; m_s3CompressionType = std::move(value); }

    /**
     * <p>Whether to GZIP-decompress the data in Amazon S3 as it is streamed into the
     * processing container. <code>Gzip</code> can only be used when <code>Pipe</code>
     * mode is specified as the <code>S3InputMode</code>. In <code>Pipe</code> mode,
     * Amazon SageMaker streams input data from the source directly to your container
     * without using the EBS volume.</p>
     */
    inline ProcessingS3Input& WithS3CompressionType(const ProcessingS3CompressionType& value) { SetS3CompressionType(value); return *this;}

    /**
     * <p>Whether to GZIP-decompress the data in Amazon S3 as it is streamed into the
     * processing container. <code>Gzip</code> can only be used when <code>Pipe</code>
     * mode is specified as the <code>S3InputMode</code>. In <code>Pipe</code> mode,
     * Amazon SageMaker streams input data from the source directly to your container
     * without using the EBS volume.</p>
     */
    inline ProcessingS3Input& WithS3CompressionType(ProcessingS3CompressionType&& value) { SetS3CompressionType(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    ProcessingS3DataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet = false;

    ProcessingS3InputMode m_s3InputMode;
    bool m_s3InputModeHasBeenSet = false;

    ProcessingS3DataDistributionType m_s3DataDistributionType;
    bool m_s3DataDistributionTypeHasBeenSet = false;

    ProcessingS3CompressionType m_s3CompressionType;
    bool m_s3CompressionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
