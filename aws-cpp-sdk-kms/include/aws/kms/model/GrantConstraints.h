/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    Contains constraints on the grant.
  */
  class AWS_KMS_API GrantConstraints
  {
  public:
    GrantConstraints();
    GrantConstraints(const Aws::Utils::Json::JsonValue& jsonValue);
    GrantConstraints& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     The constraint equals the full encryption context.
    */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextSubset() const{ return m_encryptionContextSubset; }
    /*
     The constraint equals the full encryption context.
    */
    inline void SetEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = value; }

    /*
     The constraint equals the full encryption context.
    */
    inline GrantConstraints&  WithEncryptionContextSubset(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextSubset(value); return *this;}

    /*
     The constraint equals the full encryption context.
    */
    inline GrantConstraints& AddEncryptionContextSubset(const Aws::String& key, const Aws::String& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /*
     The constraint equals the full encryption context.
    */
    inline GrantConstraints& AddEncryptionContextSubset(const char* key, const char* value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset[key] = value; return *this; }

    /*
     The constraint contains additional key/value pairs that serve to further limit the grant.
    */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextEquals() const{ return m_encryptionContextEquals; }
    /*
     The constraint contains additional key/value pairs that serve to further limit the grant.
    */
    inline void SetEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = value; }

    /*
     The constraint contains additional key/value pairs that serve to further limit the grant.
    */
    inline GrantConstraints&  WithEncryptionContextEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEncryptionContextEquals(value); return *this;}

    /*
     The constraint contains additional key/value pairs that serve to further limit the grant.
    */
    inline GrantConstraints& AddEncryptionContextEquals(const Aws::String& key, const Aws::String& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals[key] = value; return *this; }

    /*
     The constraint contains additional key/value pairs that serve to further limit the grant.
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
