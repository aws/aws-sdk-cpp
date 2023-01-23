/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Determines how Amazon AppFlow handles the success response that it gets from
   * the connector after placing data.</p> <p>For example, this setting would
   * determine where to write the response from the destination connector upon a
   * successful insert operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SuccessResponseHandlingConfig">AWS
   * API Reference</a></p>
   */
  class SuccessResponseHandlingConfig
  {
  public:
    AWS_APPFLOW_API SuccessResponseHandlingConfig();
    AWS_APPFLOW_API SuccessResponseHandlingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SuccessResponseHandlingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline SuccessResponseHandlingConfig& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline SuccessResponseHandlingConfig& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix.</p>
     */
    inline SuccessResponseHandlingConfig& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline SuccessResponseHandlingConfig& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline SuccessResponseHandlingConfig& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket.</p>
     */
    inline SuccessResponseHandlingConfig& WithBucketName(const char* value) { SetBucketName(value); return *this;}

  private:

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
