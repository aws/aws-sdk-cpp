﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateStatus.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input to the RegisterCertificate operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificateRequest">AWS
   * API Reference</a></p>
   */
  class RegisterCertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API RegisterCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const { return m_certificatePem; }
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
    template<typename CertificatePemT = Aws::String>
    void SetCertificatePem(CertificatePemT&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::forward<CertificatePemT>(value); }
    template<typename CertificatePemT = Aws::String>
    RegisterCertificateRequest& WithCertificatePem(CertificatePemT&& value) { SetCertificatePem(std::forward<CertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline const Aws::String& GetCaCertificatePem() const { return m_caCertificatePem; }
    inline bool CaCertificatePemHasBeenSet() const { return m_caCertificatePemHasBeenSet; }
    template<typename CaCertificatePemT = Aws::String>
    void SetCaCertificatePem(CaCertificatePemT&& value) { m_caCertificatePemHasBeenSet = true; m_caCertificatePem = std::forward<CaCertificatePemT>(value); }
    template<typename CaCertificatePemT = Aws::String>
    RegisterCertificateRequest& WithCaCertificatePem(CaCertificatePemT&& value) { SetCaCertificatePem(std::forward<CaCertificatePemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the register certificate request. Valid values that you can use
     * include <code>ACTIVE</code>, <code>INACTIVE</code>, and
     * <code>REVOKED</code>.</p>
     */
    inline CertificateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RegisterCertificateRequest& WithStatus(CertificateStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    Aws::String m_caCertificatePem;
    bool m_caCertificatePemHasBeenSet = false;

    CertificateStatus m_status{CertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
