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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>A structure that you can use to allow certain operations in the grant only
   * when the desired encryption context is present. For more information about
   * encryption context, see <a
   * href="http://docs.aws.amazon.com/kms/latest/developerguide/encryption-context.html">Encryption
   * Context</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
   * <p>Grant constraints apply only to operations that accept encryption context as
   * input. For example, the <code> <a>DescribeKey</a> </code> operation does not
   * accept encryption context as input. A grant that allows the
   * <code>DescribeKey</code> operation does so regardless of the grant constraints.
   * In constrast, the <code> <a>Encrypt</a> </code> operation accepts encryption
   * context as input. A grant that allows the <code>Encrypt</code> operation does so
   * only when the encryption context of the <code>Encrypt</code> operation satisfies
   * the grant constraints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/GrantConstraints">AWS
   * API Reference</a></p>
   */
  class AWS_KMS_API GrantConstraints
  {
  public:
    GrantConstraints();
    GrantConstraints(const Aws::Utils::Json::JsonValue& jsonValue);
    GrantConstraints& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextSubset() const{ return m_encryptionContextSubset; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline void SetEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = value; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline void SetEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = std::move(value); }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& WithEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextSubset(value); return *this;}

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& WithEncryptionContextSubset(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextSubset(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, Aws::String&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(Aws::String&& key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs, all of which must be present in the encryption
     * context of certain subsequent operations that the grant allows. When certain
     * subsequent operations allowed by the grant include encryption context that
     * matches this list or is a superset of this list, the grant allows the operation.
     * Otherwise, the grant does not allow the operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextEquals() const{ return m_encryptionContextEquals; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline void SetEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = value; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline void SetEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = std::move(value); }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& WithEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextEquals(value); return *this;}

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& WithEncryptionContextEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetEncryptionContextEquals(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, value); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const char* key, Aws::String&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(Aws::String&& key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of key-value pairs that must be present in the encryption context of
     * certain subsequent operations that the grant allows. When certain subsequent
     * operations allowed by the grant include encryption context that matches this
     * list, the grant allows the operation. Otherwise, the grant does not allow the
     * operation.</p>
     */
    inline GrantConstraints& AddEncryptionContextEquals(const char* key, const char* value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(key, value); return *this; }

  private:
    Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;
    bool m_encryptionContextSubsetHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;
    bool m_encryptionContextEqualsHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
