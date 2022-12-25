/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/S3EncryptionConfiguration.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>The Amazon Simple Storage Service (Amazon S3) bucket location in which a
   * journal export job writes the journal contents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/S3ExportConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExportConfiguration
  {
  public:
    AWS_QLDB_API S3ExportConfiguration();
    AWS_QLDB_API S3ExportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API S3ExportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline S3ExportConfiguration& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline S3ExportConfiguration& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket name in which a journal export job writes the journal
     * contents.</p> <p>The bucket name must comply with the Amazon S3 bucket naming
     * conventions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the <i>Amazon S3 Developer Guide</i>.</p>
     */
    inline S3ExportConfiguration& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline S3ExportConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline S3ExportConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the Amazon S3 bucket in which a journal export job writes the
     * journal contents.</p> <p>The prefix must comply with Amazon S3 key naming rules
     * and restrictions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 Developer Guide</i>.</p> <p>The
     * following are examples of valid <code>Prefix</code> values:</p> <ul> <li> <p>
     * <code>JournalExports-ForMyLedger/Testing/</code> </p> </li> <li> <p>
     * <code>JournalExports</code> </p> </li> <li> <p> <code>My:Tests/</code> </p>
     * </li> </ul>
     */
    inline S3ExportConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline const S3EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline void SetEncryptionConfiguration(const S3EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline void SetEncryptionConfiguration(S3EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline S3ExportConfiguration& WithEncryptionConfiguration(const S3EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The encryption settings that are used by a journal export job to write data
     * in an Amazon S3 bucket.</p>
     */
    inline S3ExportConfiguration& WithEncryptionConfiguration(S3EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    S3EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
