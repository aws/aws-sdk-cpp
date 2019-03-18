/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLACIER_API Encryption
  {
  public:
    Encryption();
    Encryption(Aws::Utils::Json::JsonView jsonValue);
    Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline Encryption& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The server-side encryption algorithm used when storing job results in Amazon
     * S3, for example <code>AES256</code> or <code>aws:kms</code>.</p>
     */
    inline Encryption& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline Encryption& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline Encryption& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID to use for object encryption. All GET and PUT requests for
     * an object protected by AWS KMS fail if not made by using Secure Sockets Layer
     * (SSL) or Signature Version 4. </p>
     */
    inline Encryption& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline const Aws::String& GetKMSContext() const{ return m_kMSContext; }

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline bool KMSContextHasBeenSet() const { return m_kMSContextHasBeenSet; }

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline void SetKMSContext(const Aws::String& value) { m_kMSContextHasBeenSet = true; m_kMSContext = value; }

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline void SetKMSContext(Aws::String&& value) { m_kMSContextHasBeenSet = true; m_kMSContext = std::move(value); }

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline void SetKMSContext(const char* value) { m_kMSContextHasBeenSet = true; m_kMSContext.assign(value); }

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline Encryption& WithKMSContext(const Aws::String& value) { SetKMSContext(value); return *this;}

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline Encryption& WithKMSContext(Aws::String&& value) { SetKMSContext(std::move(value)); return *this;}

    /**
     * <p>Optional. If the encryption type is <code>aws:kms</code>, you can use this
     * value to specify the encryption context for the job results.</p>
     */
    inline Encryption& WithKMSContext(const char* value) { SetKMSContext(value); return *this;}

  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet;

    Aws::String m_kMSContext;
    bool m_kMSContextHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
