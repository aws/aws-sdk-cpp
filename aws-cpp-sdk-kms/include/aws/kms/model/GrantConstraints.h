/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{

  /**
   * <p>A structure for specifying the conditions under which the operations
   * permitted by the grant are allowed.</p> <p>You can use this structure to allow
   * the operations permitted by the grant only when a specified encryption context
   * is present. For more information about encryption context, see <a
   * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
   * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
   */
  class AWS_KMS_API GrantConstraints
  {
  public:
    GrantConstraints();
    GrantConstraints(const Aws::Utils::Json::JsonValue& jsonValue);
    GrantConstraints& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextSubset() const{ return m_encryptionContextSubset; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline void SetEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = value; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline void SetEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = value; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& WithEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextSubset(value); return *this;}

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& WithEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextSubset(value); return *this;}

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs, a subset of which must be present in the
     * encryption context of a subsequent operation permitted by the grant. When a
     * subsequent operation permitted by the grant includes an encryption context that
     * matches this list or is a subset of this list, the grant allows the operation.
     * Otherwise, the operation is not allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextEquals() const{ return m_encryptionContextEquals; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline void SetEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = value; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline void SetEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = value; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& WithEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextEquals(value); return *this;}

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& WithEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextEquals(value); return *this;}

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const char* key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /**
     * <p>Contains a list of key-value pairs that must be present in the encryption
     * context of a subsequent operation permitted by the grant. When a subsequent
     * operation permitted by the grant includes an encryption context that matches
     * this list, the grant allows the operation. Otherwise, the operation is not
     * allowed.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const char* key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

  private:
    Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;
    bool m_encryptionContextSubsetHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;
    bool m_encryptionContextEqualsHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
