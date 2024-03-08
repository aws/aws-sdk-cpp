/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/JobIdentifier.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A batch job identifier in which the batch jobs to run are identified by an
   * Amazon S3 location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/S3BatchJobIdentifier">AWS
   * API Reference</a></p>
   */
  class S3BatchJobIdentifier
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API S3BatchJobIdentifier();
    AWS_MAINFRAMEMODERNIZATION_API S3BatchJobIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API S3BatchJobIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline S3BatchJobIdentifier& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline S3BatchJobIdentifier& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the batch job definitions.</p>
     */
    inline S3BatchJobIdentifier& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Identifies the batch job definition. This identifier can also point to any
     * batch job definition that already exists in the application or to one of the
     * batch job definitions within the directory that is specified in
     * <code>keyPrefix</code>.</p>
     */
    inline const JobIdentifier& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Identifies the batch job definition. This identifier can also point to any
     * batch job definition that already exists in the application or to one of the
     * batch job definitions within the directory that is specified in
     * <code>keyPrefix</code>.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Identifies the batch job definition. This identifier can also point to any
     * batch job definition that already exists in the application or to one of the
     * batch job definitions within the directory that is specified in
     * <code>keyPrefix</code>.</p>
     */
    inline void SetIdentifier(const JobIdentifier& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Identifies the batch job definition. This identifier can also point to any
     * batch job definition that already exists in the application or to one of the
     * batch job definitions within the directory that is specified in
     * <code>keyPrefix</code>.</p>
     */
    inline void SetIdentifier(JobIdentifier&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Identifies the batch job definition. This identifier can also point to any
     * batch job definition that already exists in the application or to one of the
     * batch job definitions within the directory that is specified in
     * <code>keyPrefix</code>.</p>
     */
    inline S3BatchJobIdentifier& WithIdentifier(const JobIdentifier& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Identifies the batch job definition. This identifier can also point to any
     * batch job definition that already exists in the application or to one of the
     * batch job definitions within the directory that is specified in
     * <code>keyPrefix</code>.</p>
     */
    inline S3BatchJobIdentifier& WithIdentifier(JobIdentifier&& value) { SetIdentifier(std::move(value)); return *this;}


    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline S3BatchJobIdentifier& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline S3BatchJobIdentifier& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The key prefix that specifies the path to the folder in the S3 bucket that
     * has the batch job definitions.</p>
     */
    inline S3BatchJobIdentifier& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    JobIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
