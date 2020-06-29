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
   * <p>Information about where and how you want to obtain the inputs for an
   * processing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingS3Input">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ProcessingS3Input
  {
  public:
    ProcessingS3Input();
    ProcessingS3Input(Aws::Utils::Json::JsonView jsonValue);
    ProcessingS3Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline ProcessingS3Input& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline ProcessingS3Input& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI for the Amazon S3 storage where you want Amazon SageMaker to download
     * the artifacts needed to run a processing job.</p>
     */
    inline ProcessingS3Input& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline ProcessingS3Input& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
     */
    inline ProcessingS3Input& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>The local path to the Amazon S3 bucket where you want Amazon SageMaker to
     * download the inputs to run a processing job. <code>LocalPath</code> is an
     * absolute path to the input data.</p>
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
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> mode, Amazon SageMaker copies the data from the input source
     * onto the local Amazon Elastic Block Store (Amazon EBS) volumes before starting
     * your training algorithm. This is the most commonly used input mode. In
     * <code>Pipe</code> mode, Amazon SageMaker streams input data from the source
     * directly to your algorithm without using the EBS volume.</p>
     */
    inline const ProcessingS3InputMode& GetS3InputMode() const{ return m_s3InputMode; }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> mode, Amazon SageMaker copies the data from the input source
     * onto the local Amazon Elastic Block Store (Amazon EBS) volumes before starting
     * your training algorithm. This is the most commonly used input mode. In
     * <code>Pipe</code> mode, Amazon SageMaker streams input data from the source
     * directly to your algorithm without using the EBS volume.</p>
     */
    inline bool S3InputModeHasBeenSet() const { return m_s3InputModeHasBeenSet; }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> mode, Amazon SageMaker copies the data from the input source
     * onto the local Amazon Elastic Block Store (Amazon EBS) volumes before starting
     * your training algorithm. This is the most commonly used input mode. In
     * <code>Pipe</code> mode, Amazon SageMaker streams input data from the source
     * directly to your algorithm without using the EBS volume.</p>
     */
    inline void SetS3InputMode(const ProcessingS3InputMode& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = value; }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> mode, Amazon SageMaker copies the data from the input source
     * onto the local Amazon Elastic Block Store (Amazon EBS) volumes before starting
     * your training algorithm. This is the most commonly used input mode. In
     * <code>Pipe</code> mode, Amazon SageMaker streams input data from the source
     * directly to your algorithm without using the EBS volume.</p>
     */
    inline void SetS3InputMode(ProcessingS3InputMode&& value) { m_s3InputModeHasBeenSet = true; m_s3InputMode = std::move(value); }

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> mode, Amazon SageMaker copies the data from the input source
     * onto the local Amazon Elastic Block Store (Amazon EBS) volumes before starting
     * your training algorithm. This is the most commonly used input mode. In
     * <code>Pipe</code> mode, Amazon SageMaker streams input data from the source
     * directly to your algorithm without using the EBS volume.</p>
     */
    inline ProcessingS3Input& WithS3InputMode(const ProcessingS3InputMode& value) { SetS3InputMode(value); return *this;}

    /**
     * <p>Whether to use <code>File</code> or <code>Pipe</code> input mode. In
     * <code>File</code> mode, Amazon SageMaker copies the data from the input source
     * onto the local Amazon Elastic Block Store (Amazon EBS) volumes before starting
     * your training algorithm. This is the most commonly used input mode. In
     * <code>Pipe</code> mode, Amazon SageMaker streams input data from the source
     * directly to your algorithm without using the EBS volume.</p>
     */
    inline ProcessingS3Input& WithS3InputMode(ProcessingS3InputMode&& value) { SetS3InputMode(std::move(value)); return *this;}


    /**
     * <p>Whether the data stored in Amazon S3 is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code>.</p>
     */
    inline const ProcessingS3DataDistributionType& GetS3DataDistributionType() const{ return m_s3DataDistributionType; }

    /**
     * <p>Whether the data stored in Amazon S3 is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code>.</p>
     */
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }

    /**
     * <p>Whether the data stored in Amazon S3 is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code>.</p>
     */
    inline void SetS3DataDistributionType(const ProcessingS3DataDistributionType& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }

    /**
     * <p>Whether the data stored in Amazon S3 is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code>.</p>
     */
    inline void SetS3DataDistributionType(ProcessingS3DataDistributionType&& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = std::move(value); }

    /**
     * <p>Whether the data stored in Amazon S3 is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code>.</p>
     */
    inline ProcessingS3Input& WithS3DataDistributionType(const ProcessingS3DataDistributionType& value) { SetS3DataDistributionType(value); return *this;}

    /**
     * <p>Whether the data stored in Amazon S3 is <code>FullyReplicated</code> or
     * <code>ShardedByS3Key</code>.</p>
     */
    inline ProcessingS3Input& WithS3DataDistributionType(ProcessingS3DataDistributionType&& value) { SetS3DataDistributionType(std::move(value)); return *this;}


    /**
     * <p>Whether to use <code>Gzip</code> compression for Amazon S3 storage.</p>
     */
    inline const ProcessingS3CompressionType& GetS3CompressionType() const{ return m_s3CompressionType; }

    /**
     * <p>Whether to use <code>Gzip</code> compression for Amazon S3 storage.</p>
     */
    inline bool S3CompressionTypeHasBeenSet() const { return m_s3CompressionTypeHasBeenSet; }

    /**
     * <p>Whether to use <code>Gzip</code> compression for Amazon S3 storage.</p>
     */
    inline void SetS3CompressionType(const ProcessingS3CompressionType& value) { m_s3CompressionTypeHasBeenSet = true; m_s3CompressionType = value; }

    /**
     * <p>Whether to use <code>Gzip</code> compression for Amazon S3 storage.</p>
     */
    inline void SetS3CompressionType(ProcessingS3CompressionType&& value) { m_s3CompressionTypeHasBeenSet = true; m_s3CompressionType = std::move(value); }

    /**
     * <p>Whether to use <code>Gzip</code> compression for Amazon S3 storage.</p>
     */
    inline ProcessingS3Input& WithS3CompressionType(const ProcessingS3CompressionType& value) { SetS3CompressionType(value); return *this;}

    /**
     * <p>Whether to use <code>Gzip</code> compression for Amazon S3 storage.</p>
     */
    inline ProcessingS3Input& WithS3CompressionType(ProcessingS3CompressionType&& value) { SetS3CompressionType(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet;

    ProcessingS3DataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet;

    ProcessingS3InputMode m_s3InputMode;
    bool m_s3InputModeHasBeenSet;

    ProcessingS3DataDistributionType m_s3DataDistributionType;
    bool m_s3DataDistributionTypeHasBeenSet;

    ProcessingS3CompressionType m_s3CompressionType;
    bool m_s3CompressionTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
