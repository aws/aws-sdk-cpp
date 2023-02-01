/**
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
   * <p>The input properties for an entities detection job. This includes the name of
   * the S3 bucket and the path to the files to be analyzed. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_COMPREHENDMEDICAL_API InputDataConfig();
    AWS_COMPREHENDMEDICAL_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline InputDataConfig& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline InputDataConfig& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The URI of the S3 bucket that contains the input data. The bucket must be in
     * the same region as the API endpoint that you are calling.</p> <p>Each file in
     * the document collection must be less than 40 KB. You can store a maximum of 30
     * GB in the bucket.</p>
     */
    inline InputDataConfig& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline InputDataConfig& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline InputDataConfig& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The path to the input data files in the S3 bucket.</p>
     */
    inline InputDataConfig& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
