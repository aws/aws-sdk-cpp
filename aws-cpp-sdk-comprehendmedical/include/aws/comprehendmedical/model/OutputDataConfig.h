﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p>The output properties for a detection job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHENDMEDICAL_API OutputDataConfig
  {
  public:
    OutputDataConfig();
    OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline OutputDataConfig& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline OutputDataConfig& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>When you use the <code>OutputDataConfig</code> object with asynchronous
     * operations, you specify the Amazon S3 location where you want to write the
     * output data. The URI must be in the same region as the API endpoint that you are
     * calling. The location is used as the prefix for the actual location of the
     * output.</p>
     */
    inline OutputDataConfig& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline OutputDataConfig& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline OutputDataConfig& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The path to the output data files in the S3 bucket. Comprehend Medical;
     * creates an output directory using the job ID so that the output from one job
     * does not overwrite the output of another.</p>
     */
    inline OutputDataConfig& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
