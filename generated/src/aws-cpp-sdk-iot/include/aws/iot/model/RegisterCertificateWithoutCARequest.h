/**
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
   */
  class RegisterCertificateWithoutCARequest : public IoTRequest
  {
  public:
    AWS_IOT_API RegisterCertificateWithoutCARequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCertificateWithoutCA"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }
    inline RegisterCertificateWithoutCARequest& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}
    inline RegisterCertificateWithoutCARequest& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}
    inline RegisterCertificateWithoutCARequest& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the register certificate request.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RegisterCertificateWithoutCARequest& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}
    inline RegisterCertificateWithoutCARequest& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet = false;

    CertificateStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
