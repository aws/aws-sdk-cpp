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
    AWS_LIGHTSAIL_API CreateKeyPairResult() = default;
    AWS_LIGHTSAIL_API CreateKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about the new key pair you
     * just created.</p>
     */
    inline const KeyPair& GetKeyPair() const { return m_keyPair; }
    template<typename KeyPairT = KeyPair>
    void SetKeyPair(KeyPairT&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::forward<KeyPairT>(value); }
    template<typename KeyPairT = KeyPair>
    CreateKeyPairResult& WithKeyPair(KeyPairT&& value) { SetKeyPair(std::forward<KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const { return m_publicKeyBase64; }
    template<typename PublicKeyBase64T = Aws::String>
    void SetPublicKeyBase64(PublicKeyBase64T&& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = std::forward<PublicKeyBase64T>(value); }
    template<typename PublicKeyBase64T = Aws::String>
    CreateKeyPairResult& WithPublicKeyBase64(PublicKeyBase64T&& value) { SetPublicKeyBase64(std::forward<PublicKeyBase64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline const Aws::String& GetPrivateKeyBase64() const { return m_privateKeyBase64; }
    template<typename PrivateKeyBase64T = Aws::String>
    void SetPrivateKeyBase64(PrivateKeyBase64T&& value) { m_privateKeyBase64HasBeenSet = true; m_privateKeyBase64 = std::forward<PrivateKeyBase64T>(value); }
    template<typename PrivateKeyBase64T = Aws::String>
    CreateKeyPairResult& WithPrivateKeyBase64(PrivateKeyBase64T&& value) { SetPrivateKeyBase64(std::forward<PrivateKeyBase64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const { return m_operation; }
    template<typename OperationT = Operation>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Operation>
    CreateKeyPairResult& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateKeyPairResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KeyPair m_keyPair;
    bool m_keyPairHasBeenSet = false;

    Aws::String m_publicKeyBase64;
    bool m_publicKeyBase64HasBeenSet = false;

    Aws::String m_privateKeyBase64;
    bool m_privateKeyBase64HasBeenSet = false;

    Operation m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
