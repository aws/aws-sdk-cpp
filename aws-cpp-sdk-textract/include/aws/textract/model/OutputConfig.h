/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Sets whether or not your output will go to a user created bucket. Used to set
   * the name of the bucket, and the prefix on the output file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/OutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API OutputConfig
  {
  public:
    OutputConfig();
    OutputConfig(Aws::Utils::Json::JsonView jsonValue);
    OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline OutputConfig& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline OutputConfig& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline OutputConfig& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline OutputConfig& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline OutputConfig& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline OutputConfig& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
