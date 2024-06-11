﻿/**
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
   * input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/NotebookS3LocationForOutput">AWS
   * API Reference</a></p>
   */
  class NotebookS3LocationForOutput
  {
  public:
    AWS_EMR_API NotebookS3LocationForOutput();
    AWS_EMR_API NotebookS3LocationForOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API NotebookS3LocationForOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket that stores the notebook execution input.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline NotebookS3LocationForOutput& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline NotebookS3LocationForOutput& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline NotebookS3LocationForOutput& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key to the Amazon S3 location that stores the notebook execution
     * input.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline NotebookS3LocationForOutput& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline NotebookS3LocationForOutput& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline NotebookS3LocationForOutput& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
