/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ResultFormat.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Contains the configuration to write the query results to S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryS3OutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryS3OutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryS3OutputConfiguration();
    AWS_CLEANROOMS_API ProtectedQueryS3OutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryS3OutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Intended file format of the result.</p>
     */
    inline const ResultFormat& GetResultFormat() const{ return m_resultFormat; }

    /**
     * <p>Intended file format of the result.</p>
     */
    inline bool ResultFormatHasBeenSet() const { return m_resultFormatHasBeenSet; }

    /**
     * <p>Intended file format of the result.</p>
     */
    inline void SetResultFormat(const ResultFormat& value) { m_resultFormatHasBeenSet = true; m_resultFormat = value; }

    /**
     * <p>Intended file format of the result.</p>
     */
    inline void SetResultFormat(ResultFormat&& value) { m_resultFormatHasBeenSet = true; m_resultFormat = std::move(value); }

    /**
     * <p>Intended file format of the result.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithResultFormat(const ResultFormat& value) { SetResultFormat(value); return *this;}

    /**
     * <p>Intended file format of the result.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithResultFormat(ResultFormat&& value) { SetResultFormat(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline ProtectedQueryS3OutputConfiguration& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}

  private:

    ResultFormat m_resultFormat;
    bool m_resultFormatHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
