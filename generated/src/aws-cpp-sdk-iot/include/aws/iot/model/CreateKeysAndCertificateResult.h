/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/KeyPair.h>
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
  /**
   * <p>The output of the CreateKeysAndCertificate operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateKeysAndCertificateResponse">AWS
   * API Reference</a></p>
   */
  class CreateKeysAndCertificateResult
  {
  public:
    AWS_IOT_API CreateKeysAndCertificateResult() = default;
    AWS_IOT_API CreateKeysAndCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateKeysAndCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    CreateKeysAndCertificateResult& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the certificate. IoT issues a default subject name for the
     * certificate (for example, IoT Certificate).</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    CreateKeysAndCertificateResult& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
    template<typename CertificatePemT = Aws::String>
    void SetCertificatePem(CertificatePemT&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::forward<CertificatePemT>(value); }
    template<typename CertificatePemT = Aws::String>
    CreateKeysAndCertificateResult& WithCertificatePem(CertificatePemT&& value) { SetCertificatePem(std::forward<CertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated key pair.</p>
     */
    inline const KeyPair& GetKeyPair() const { return m_keyPair; }
    template<typename KeyPairT = KeyPair>
    void SetKeyPair(KeyPairT&& value) { m_keyPairHasBeenSet = true; m_keyPair = std::forward<KeyPairT>(value); }
    template<typename KeyPairT = KeyPair>
    CreateKeysAndCertificateResult& WithKeyPair(KeyPairT&& value) { SetKeyPair(std::forward<KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateKeysAndCertificateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    KeyPair m_keyPair;
    bool m_keyPairHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
