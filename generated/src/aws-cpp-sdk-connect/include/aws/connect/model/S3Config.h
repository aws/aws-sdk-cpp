/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EncryptionConfig.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the Amazon Simple Storage Service (Amazon S3) storage
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/S3Config">AWS
   * API Reference</a></p>
   */
  class S3Config
  {
  public:
    AWS_CONNECT_API S3Config();
    AWS_CONNECT_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket name.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The S3 bucket name.</p>
     */
    inline S3Config& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The S3 bucket name.</p>
     */
    inline S3Config& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket name.</p>
     */
    inline S3Config& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline S3Config& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline S3Config& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket prefix.</p>
     */
    inline S3Config& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p>The Amazon S3 encryption configuration.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The Amazon S3 encryption configuration.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>The Amazon S3 encryption configuration.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>The Amazon S3 encryption configuration.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>The Amazon S3 encryption configuration.</p>
     */
    inline S3Config& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The Amazon S3 encryption configuration.</p>
     */
    inline S3Config& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
