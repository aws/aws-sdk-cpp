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
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The data structure used by the Data Catalog to encrypt the password as part
   * of <code>CreateConnection</code> or <code>UpdateConnection</code> and store it
   * in the <code>ENCRYPTED_PASSWORD</code> field in the connection properties. You
   * can enable catalog encryption or only password encryption.</p> <p>When a
   * <code>CreationConnection</code> request arrives containing a password, the Data
   * Catalog first encrypts the password using your AWS KMS key. It then encrypts the
   * whole connection object again if catalog encryption is also enabled.</p> <p>This
   * encryption requires that you set AWS KMS key permissions to enable or restrict
   * access on the password key according to your security requirements. For example,
   * you might want only admin users to have decrypt permission on the password
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionPasswordEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ConnectionPasswordEncryption
  {
  public:
    ConnectionPasswordEncryption();
    ConnectionPasswordEncryption(Aws::Utils::Json::JsonView jsonValue);
    ConnectionPasswordEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the <code>ReturnConnectionPasswordEncrypted</code> flag is set to
     * "true", passwords remain encrypted in the responses of
     * <code>GetConnection</code> and <code>GetConnections</code>. This encryption
     * takes effect independently from catalog encryption. </p>
     */
    inline bool GetReturnConnectionPasswordEncrypted() const{ return m_returnConnectionPasswordEncrypted; }

    /**
     * <p>When the <code>ReturnConnectionPasswordEncrypted</code> flag is set to
     * "true", passwords remain encrypted in the responses of
     * <code>GetConnection</code> and <code>GetConnections</code>. This encryption
     * takes effect independently from catalog encryption. </p>
     */
    inline bool ReturnConnectionPasswordEncryptedHasBeenSet() const { return m_returnConnectionPasswordEncryptedHasBeenSet; }

    /**
     * <p>When the <code>ReturnConnectionPasswordEncrypted</code> flag is set to
     * "true", passwords remain encrypted in the responses of
     * <code>GetConnection</code> and <code>GetConnections</code>. This encryption
     * takes effect independently from catalog encryption. </p>
     */
    inline void SetReturnConnectionPasswordEncrypted(bool value) { m_returnConnectionPasswordEncryptedHasBeenSet = true; m_returnConnectionPasswordEncrypted = value; }

    /**
     * <p>When the <code>ReturnConnectionPasswordEncrypted</code> flag is set to
     * "true", passwords remain encrypted in the responses of
     * <code>GetConnection</code> and <code>GetConnections</code>. This encryption
     * takes effect independently from catalog encryption. </p>
     */
    inline ConnectionPasswordEncryption& WithReturnConnectionPasswordEncrypted(bool value) { SetReturnConnectionPasswordEncrypted(value); return *this;}


    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline const Aws::String& GetAwsKmsKeyId() const{ return m_awsKmsKeyId; }

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline bool AwsKmsKeyIdHasBeenSet() const { return m_awsKmsKeyIdHasBeenSet; }

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline void SetAwsKmsKeyId(const Aws::String& value) { m_awsKmsKeyIdHasBeenSet = true; m_awsKmsKeyId = value; }

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline void SetAwsKmsKeyId(Aws::String&& value) { m_awsKmsKeyIdHasBeenSet = true; m_awsKmsKeyId = std::move(value); }

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline void SetAwsKmsKeyId(const char* value) { m_awsKmsKeyIdHasBeenSet = true; m_awsKmsKeyId.assign(value); }

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline ConnectionPasswordEncryption& WithAwsKmsKeyId(const Aws::String& value) { SetAwsKmsKeyId(value); return *this;}

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline ConnectionPasswordEncryption& WithAwsKmsKeyId(Aws::String&& value) { SetAwsKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>An AWS KMS key that is used to encrypt the connection password. </p> <p>If
     * connection password protection is enabled, the caller of
     * <code>CreateConnection</code> and <code>UpdateConnection</code> needs at least
     * <code>kms:Encrypt</code> permission on the specified AWS KMS key, to encrypt
     * passwords before storing them in the Data Catalog. </p> <p>You can set the
     * decrypt permission to enable or restrict access on the password key according to
     * your security requirements.</p>
     */
    inline ConnectionPasswordEncryption& WithAwsKmsKeyId(const char* value) { SetAwsKmsKeyId(value); return *this;}

  private:

    bool m_returnConnectionPasswordEncrypted;
    bool m_returnConnectionPasswordEncryptedHasBeenSet;

    Aws::String m_awsKmsKeyId;
    bool m_awsKmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
