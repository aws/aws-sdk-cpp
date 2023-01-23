/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/Type.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the default server-side encryption settings for an
   * S3 bucket. For detailed information about these settings, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucket-encryption.html">Setting
   * default server-side encryption behavior for Amazon S3 buckets</a> in the
   * <i>Amazon Simple Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class BucketServerSideEncryption
  {
  public:
    AWS_MACIE2_API BucketServerSideEncryption();
    AWS_MACIE2_API BucketServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline BucketServerSideEncryption& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline BucketServerSideEncryption& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used by default to encrypt objects that are added to the bucket. This
     * value is null if the bucket uses an Amazon S3 managed key to encrypt new objects
     * or the bucket doesn't encrypt new objects by default.</p>
     */
    inline BucketServerSideEncryption& WithKmsMasterKeyId(const char* value) { SetKmsMasterKeyId(value); return *this;}


    /**
     * <p>The type of server-side encryption that's used by default when storing new
     * objects in the bucket. Possible values are:</p> <ul><li><p>AES256 - New objects
     * are encrypted with an Amazon S3 managed key. They use SSE-S3
     * encryption.</p></li> <li><p>aws:kms - New objects are encrypted with an KMS key
     * (kmsMasterKeyId), either an Amazon Web Services managed key or a customer
     * managed key. They use SSE-KMS encryption.</p></li> <li><p>NONE - New objects
     * aren't encrypted by default. Default encryption is disabled for the
     * bucket.</p></li></ul>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of server-side encryption that's used by default when storing new
     * objects in the bucket. Possible values are:</p> <ul><li><p>AES256 - New objects
     * are encrypted with an Amazon S3 managed key. They use SSE-S3
     * encryption.</p></li> <li><p>aws:kms - New objects are encrypted with an KMS key
     * (kmsMasterKeyId), either an Amazon Web Services managed key or a customer
     * managed key. They use SSE-KMS encryption.</p></li> <li><p>NONE - New objects
     * aren't encrypted by default. Default encryption is disabled for the
     * bucket.</p></li></ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of server-side encryption that's used by default when storing new
     * objects in the bucket. Possible values are:</p> <ul><li><p>AES256 - New objects
     * are encrypted with an Amazon S3 managed key. They use SSE-S3
     * encryption.</p></li> <li><p>aws:kms - New objects are encrypted with an KMS key
     * (kmsMasterKeyId), either an Amazon Web Services managed key or a customer
     * managed key. They use SSE-KMS encryption.</p></li> <li><p>NONE - New objects
     * aren't encrypted by default. Default encryption is disabled for the
     * bucket.</p></li></ul>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of server-side encryption that's used by default when storing new
     * objects in the bucket. Possible values are:</p> <ul><li><p>AES256 - New objects
     * are encrypted with an Amazon S3 managed key. They use SSE-S3
     * encryption.</p></li> <li><p>aws:kms - New objects are encrypted with an KMS key
     * (kmsMasterKeyId), either an Amazon Web Services managed key or a customer
     * managed key. They use SSE-KMS encryption.</p></li> <li><p>NONE - New objects
     * aren't encrypted by default. Default encryption is disabled for the
     * bucket.</p></li></ul>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of server-side encryption that's used by default when storing new
     * objects in the bucket. Possible values are:</p> <ul><li><p>AES256 - New objects
     * are encrypted with an Amazon S3 managed key. They use SSE-S3
     * encryption.</p></li> <li><p>aws:kms - New objects are encrypted with an KMS key
     * (kmsMasterKeyId), either an Amazon Web Services managed key or a customer
     * managed key. They use SSE-KMS encryption.</p></li> <li><p>NONE - New objects
     * aren't encrypted by default. Default encryption is disabled for the
     * bucket.</p></li></ul>
     */
    inline BucketServerSideEncryption& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of server-side encryption that's used by default when storing new
     * objects in the bucket. Possible values are:</p> <ul><li><p>AES256 - New objects
     * are encrypted with an Amazon S3 managed key. They use SSE-S3
     * encryption.</p></li> <li><p>aws:kms - New objects are encrypted with an KMS key
     * (kmsMasterKeyId), either an Amazon Web Services managed key or a customer
     * managed key. They use SSE-KMS encryption.</p></li> <li><p>NONE - New objects
     * aren't encrypted by default. Default encryption is disabled for the
     * bucket.</p></li></ul>
     */
    inline BucketServerSideEncryption& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
