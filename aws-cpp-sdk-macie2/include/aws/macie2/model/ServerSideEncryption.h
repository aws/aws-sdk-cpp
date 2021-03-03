/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/EncryptionType.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the server-side encryption settings for an S3
   * bucket or S3 object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ServerSideEncryption
  {
  public:
    ServerSideEncryption();
    ServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    ServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption is disabled for the bucket or the object
     * isn't encrypted using server-side encryption, this value is NONE.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption is disabled for the bucket or the object
     * isn't encrypted using server-side encryption, this value is NONE.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption is disabled for the bucket or the object
     * isn't encrypted using server-side encryption, this value is NONE.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption is disabled for the bucket or the object
     * isn't encrypted using server-side encryption, this value is NONE.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption is disabled for the bucket or the object
     * isn't encrypted using server-side encryption, this value is NONE.</p>
     */
    inline ServerSideEncryption& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption is disabled for the bucket or the object
     * isn't encrypted using server-side encryption, this value is NONE.</p>
     */
    inline ServerSideEncryption& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline ServerSideEncryption& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline ServerSideEncryption& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the AWS Key
     * Management Service (AWS KMS) customer master key (CMK) that's used to encrypt
     * data in the bucket or the object. If an AWS KMS CMK isn't used, this value is
     * null.</p>
     */
    inline ServerSideEncryption& WithKmsMasterKeyId(const char* value) { SetKmsMasterKeyId(value); return *this;}

  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet;

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
