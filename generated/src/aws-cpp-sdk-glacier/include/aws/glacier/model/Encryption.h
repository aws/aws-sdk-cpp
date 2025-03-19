/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/EncryptionType.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the encryption used to store the job results in
   * Amazon S3. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/Encryption">AWS
   * API Reference</a></p>
   */
  class Encryption
  {
  public:
    AWS_GLACIER_API Encryption() = default;
    AWS_GLACIER_API Encryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline Encryption& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    Encryption& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline const Aws::String& GetKMSContext() const { return m_kMSContext; }
    inline bool KMSContextHasBeenSet() const { return m_kMSContextHasBeenSet; }
    template<typename KMSContextT = Aws::String>
    void SetKMSContext(KMSContextT&& value) { m_kMSContextHasBeenSet = true; m_kMSContext = std::forward<KMSContextT>(value); }
    template<typename KMSContextT = Aws::String>
    Encryption& WithKMSContext(KMSContextT&& value) { SetKMSContext(std::forward<KMSContextT>(value)); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    Aws::String m_kMSContext;
    bool m_kMSContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
