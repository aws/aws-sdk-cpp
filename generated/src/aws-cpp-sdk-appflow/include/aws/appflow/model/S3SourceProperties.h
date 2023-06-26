/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/S3InputFormatConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Amazon S3 is being used as the flow
   * source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/S3SourceProperties">AWS
   * API Reference</a></p>
   */
  class S3SourceProperties
  {
  public:
    AWS_APPFLOW_API S3SourceProperties();
    AWS_APPFLOW_API S3SourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API S3SourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline S3SourceProperties& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline S3SourceProperties& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 bucket name where the source files are stored. </p>
     */
    inline S3SourceProperties& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline S3SourceProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline S3SourceProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p> The object key for the Amazon S3 bucket in which the source files are
     * stored. </p>
     */
    inline S3SourceProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    
    inline const S3InputFormatConfig& GetS3InputFormatConfig() const{ return m_s3InputFormatConfig; }

    
    inline bool S3InputFormatConfigHasBeenSet() const { return m_s3InputFormatConfigHasBeenSet; }

    
    inline void SetS3InputFormatConfig(const S3InputFormatConfig& value) { m_s3InputFormatConfigHasBeenSet = true; m_s3InputFormatConfig = value; }

    
    inline void SetS3InputFormatConfig(S3InputFormatConfig&& value) { m_s3InputFormatConfigHasBeenSet = true; m_s3InputFormatConfig = std::move(value); }

    
    inline S3SourceProperties& WithS3InputFormatConfig(const S3InputFormatConfig& value) { SetS3InputFormatConfig(value); return *this;}

    
    inline S3SourceProperties& WithS3InputFormatConfig(S3InputFormatConfig&& value) { SetS3InputFormatConfig(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    S3InputFormatConfig m_s3InputFormatConfig;
    bool m_s3InputFormatConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
