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
    AWS_IOT_API CreateKeysAndCertificateResult();
    AWS_IOT_API CreateKeysAndCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateKeysAndCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArn.assign(value); }
    inline CreateKeysAndCertificateResult& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline CreateKeysAndCertificateResult& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline CreateKeysAndCertificateResult& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the certificate. IoT issues a default subject name for the
     * certificate (for example, IoT Certificate).</p>
     */
    inline const Aws::String& GetCertificateId() const{ return m_certificateId; }
    inline void SetCertificateId(const Aws::String& value) { m_certificateId = value; }
    inline void SetCertificateId(Aws::String&& value) { m_certificateId = std::move(value); }
    inline void SetCertificateId(const char* value) { m_certificateId.assign(value); }
    inline CreateKeysAndCertificateResult& WithCertificateId(const Aws::String& value) { SetCertificateId(value); return *this;}
    inline CreateKeysAndCertificateResult& WithCertificateId(Aws::String&& value) { SetCertificateId(std::move(value)); return *this;}
    inline CreateKeysAndCertificateResult& WithCertificateId(const char* value) { SetCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePem = value; }
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePem = std::move(value); }
    inline void SetCertificatePem(const char* value) { m_certificatePem.assign(value); }
    inline CreateKeysAndCertificateResult& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}
    inline CreateKeysAndCertificateResult& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}
    inline CreateKeysAndCertificateResult& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated key pair.</p>
     */
    inline const KeyPair& GetKeyPair() const{ return m_keyPair; }
    inline void SetKeyPair(const KeyPair& value) { m_keyPair = value; }
    inline void SetKeyPair(KeyPair&& value) { m_keyPair = std::move(value); }
    inline CreateKeysAndCertificateResult& WithKeyPair(const KeyPair& value) { SetKeyPair(value); return *this;}
    inline CreateKeysAndCertificateResult& WithKeyPair(KeyPair&& value) { SetKeyPair(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateKeysAndCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateKeysAndCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateKeysAndCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;

    Aws::String m_certificateId;

    Aws::String m_certificatePem;

    KeyPair m_keyPair;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
