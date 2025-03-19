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
   * <p>Provides information about the default server-side encryption settings for an
   * S3 bucket or the encryption settings for an S3 object.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ServerSideEncryption">AWS
   * API Reference</a></p>
   */
  class ServerSideEncryption
  {
  public:
    AWS_MACIE2_API ServerSideEncryption() = default;
    AWS_MACIE2_API ServerSideEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ServerSideEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server-side encryption algorithm that's used when storing data in the
     * bucket or object. If default encryption settings aren't configured for the
     * bucket or the object isn't encrypted using server-side encryption, this value is
     * NONE.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline ServerSideEncryption& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or unique identifier (key ID) for the KMS key
     * that's used to encrypt data in the bucket or the object. This value is null if
     * an KMS key isn't used to encrypt the data.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const { return m_kmsMasterKeyId; }
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }
    template<typename KmsMasterKeyIdT = Aws::String>
    void SetKmsMasterKeyId(KmsMasterKeyIdT&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::forward<KmsMasterKeyIdT>(value); }
    template<typename KmsMasterKeyIdT = Aws::String>
    ServerSideEncryption& WithKmsMasterKeyId(KmsMasterKeyIdT&& value) { SetKmsMasterKeyId(std::forward<KmsMasterKeyIdT>(value)); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
