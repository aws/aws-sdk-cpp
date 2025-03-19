/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/KeyPair.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{
  class CreateProvisioningClaimResult
  {
  public:
    AWS_IOT_API CreateProvisioningClaimResult() = default;
    AWS_IOT_API CreateProvisioningClaimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateProvisioningClaimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    CreateProvisioningClaimResult& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning claim certificate.</p>
     */
    inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
    template<typename CertificatePemT = Aws::String>
    void SetCertificatePem(CertificatePemT&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::forward<CertificatePemT>(value); }
    template<typename CertificatePemT = Aws::String>
    CreateProvisioningClaimResult& WithCertificatePem(CertificatePemT&& value) { SetCertificatePem(std::forward<CertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning claim key pair.</p>
     */
    inline const KeyPair& GetKeyPair() const { return m_keyPair; }
    template<typename KeyPairT = KeyPair>
    void SetKeyPair(KeyPairT&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::forward<KeyPairT>(value); }
    template<typename KeyPairT = KeyPair>
    CreateProvisioningClaimResult& WithKeyPair(KeyPairT&& value) { SetKeyPair(std::forward<KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning claim expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    CreateProvisioningClaimResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProvisioningClaimResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    KeyPair m_keyPair;
    bool m_keyPairHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
