/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The Amazon S3 location that stores the notebook execution
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/OutputNotebookS3LocationForOutput">AWS
   * API Reference</a></p>
   */
  class OutputNotebookS3LocationForOutput
  {
  public:
    AWS_EMR_API OutputNotebookS3LocationForOutput();
    AWS_EMR_API OutputNotebookS3LocationForOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API OutputNotebookS3LocationForOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline OutputNotebookS3LocationForOutput& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline OutputNotebookS3LocationForOutput& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that stores the notebook execution output.</p>
     */
    inline OutputNotebookS3LocationForOutput& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline OutputNotebookS3LocationForOutput& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline OutputNotebookS3LocationForOutput& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * output.</p>
     */
    inline OutputNotebookS3LocationForOutput& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
