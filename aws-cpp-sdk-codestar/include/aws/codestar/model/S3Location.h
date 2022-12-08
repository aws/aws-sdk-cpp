/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>The Amazon S3 location where the source code files provided with the project
   * request are stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_CODESTAR_API S3Location();
    AWS_CODESTAR_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline S3Location& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline S3Location& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket name where the source code files provided with the
     * project request are stored.</p>
     */
    inline S3Location& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline const Aws::String& GetBucketKey() const{ return m_bucketKey; }

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline bool BucketKeyHasBeenSet() const { return m_bucketKeyHasBeenSet; }

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline void SetBucketKey(const Aws::String& value) { m_bucketKeyHasBeenSet = true; m_bucketKey = value; }

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline void SetBucketKey(Aws::String&& value) { m_bucketKeyHasBeenSet = true; m_bucketKey = std::move(value); }

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline void SetBucketKey(const char* value) { m_bucketKeyHasBeenSet = true; m_bucketKey.assign(value); }

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline S3Location& WithBucketKey(const Aws::String& value) { SetBucketKey(value); return *this;}

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline S3Location& WithBucketKey(Aws::String&& value) { SetBucketKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 object key where the source code files provided with the
     * project request are stored.</p>
     */
    inline S3Location& WithBucketKey(const char* value) { SetBucketKey(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketKey;
    bool m_bucketKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
