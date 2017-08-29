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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/KeyPair.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Operation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API CreateKeyPairResult
  {
  public:
    CreateKeyPairResult();
    CreateKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the new key pair you
     * just created.</p>
     */
    inline const KeyPair& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p>An array of key-value pairs containing information about the new key pair you
     * just created.</p>
     */
    inline void SetKeyPair(const KeyPair& value) { m_keyPair = value; }

    /**
     * <p>An array of key-value pairs containing information about the new key pair you
     * just created.</p>
     */
    inline void SetKeyPair(KeyPair&& value) { m_keyPair = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the new key pair you
     * just created.</p>
     */
    inline CreateKeyPairResult& WithKeyPair(const KeyPair& value) { SetKeyPair(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the new key pair you
     * just created.</p>
     */
    inline CreateKeyPairResult& WithKeyPair(KeyPair&& value) { SetKeyPair(std::move(value)); return *this;}


    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const{ return m_publicKeyBase64; }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline void SetPublicKeyBase64(const Aws::String& value) { m_publicKeyBase64 = value; }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline void SetPublicKeyBase64(Aws::String&& value) { m_publicKeyBase64 = std::move(value); }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline void SetPublicKeyBase64(const char* value) { m_publicKeyBase64.assign(value); }

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline CreateKeyPairResult& WithPublicKeyBase64(const Aws::String& value) { SetPublicKeyBase64(value); return *this;}

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline CreateKeyPairResult& WithPublicKeyBase64(Aws::String&& value) { SetPublicKeyBase64(std::move(value)); return *this;}

    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline CreateKeyPairResult& WithPublicKeyBase64(const char* value) { SetPublicKeyBase64(value); return *this;}


    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline const Aws::String& GetPrivateKeyBase64() const{ return m_privateKeyBase64; }

    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline void SetPrivateKeyBase64(const Aws::String& value) { m_privateKeyBase64 = value; }

    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline void SetPrivateKeyBase64(Aws::String&& value) { m_privateKeyBase64 = std::move(value); }

    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline void SetPrivateKeyBase64(const char* value) { m_privateKeyBase64.assign(value); }

    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline CreateKeyPairResult& WithPrivateKeyBase64(const Aws::String& value) { SetPrivateKeyBase64(value); return *this;}

    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline CreateKeyPairResult& WithPrivateKeyBase64(Aws::String&& value) { SetPrivateKeyBase64(std::move(value)); return *this;}

    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline CreateKeyPairResult& WithPrivateKeyBase64(const char* value) { SetPrivateKeyBase64(value); return *this;}


    /**
     * <p>An array of key-value pairs containing information about the results of your
     * create key pair request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * create key pair request.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * create key pair request.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * create key pair request.</p>
     */
    inline CreateKeyPairResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the results of your
     * create key pair request.</p>
     */
    inline CreateKeyPairResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    KeyPair m_keyPair;

    Aws::String m_publicKeyBase64;

    Aws::String m_privateKeyBase64;

    Operation m_operation;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
