/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateKeyPairResult
  {
  public:
    AWS_LIGHTSAIL_API CreateKeyPairResult();
    AWS_LIGHTSAIL_API CreateKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateKeyPairResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
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
