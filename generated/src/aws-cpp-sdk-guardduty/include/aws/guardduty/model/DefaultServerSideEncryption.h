/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the server side encryption method used in the S3
   * bucket. See <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">S3
   * Server-Side Encryption</a> for more information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DefaultServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class DefaultServerSideEncryption
  {
  public:
    AWS_GUARDDUTY_API DefaultServerSideEncryption();
    AWS_GUARDDUTY_API DefaultServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DefaultServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of encryption used for objects within the S3 bucket.</p>
     */
    inline const Aws::String& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const Aws::String& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(Aws::String&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline void SetEncryptionType(const char* value) { m_encryptionTypeHasBeenSet = true; m_encryptionType.assign(value); }
    inline DefaultServerSideEncryption& WithEncryptionType(const Aws::String& value) { SetEncryptionType(value); return *this;}
    inline DefaultServerSideEncryption& WithEncryptionType(Aws::String&& value) { SetEncryptionType(std::move(value)); return *this;}
    inline DefaultServerSideEncryption& WithEncryptionType(const char* value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS encryption key. Only available if
     * the bucket <code>EncryptionType</code> is <code>aws:kms</code>.</p>
     */
    inline const Aws::String& GetKmsMasterKeyArn() const{ return m_kmsMasterKeyArn; }
    inline bool KmsMasterKeyArnHasBeenSet() const { return m_kmsMasterKeyArnHasBeenSet; }
    inline void SetKmsMasterKeyArn(const Aws::String& value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn = value; }
    inline void SetKmsMasterKeyArn(Aws::String&& value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn = std::move(value); }
    inline void SetKmsMasterKeyArn(const char* value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn.assign(value); }
    inline DefaultServerSideEncryption& WithKmsMasterKeyArn(const Aws::String& value) { SetKmsMasterKeyArn(value); return *this;}
    inline DefaultServerSideEncryption& WithKmsMasterKeyArn(Aws::String&& value) { SetKmsMasterKeyArn(std::move(value)); return *this;}
    inline DefaultServerSideEncryption& WithKmsMasterKeyArn(const char* value) { SetKmsMasterKeyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsMasterKeyArn;
    bool m_kmsMasterKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
