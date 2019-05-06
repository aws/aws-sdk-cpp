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
  class AWS_IOT_API RegisterCertificateRequest : public IoTRequest
  {
  public:
    RegisterCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCertificate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline bool CertificatePemHasBeenSet() const { return m_certificatePemHasBeenSet; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = std::move(value); }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const char* value) { m_certificatePemHasBeenSet = true; m_certificatePem.assign(value); }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline RegisterCertificateRequest& WithCertificatePem(const Aws::String& value) { SetCertificatePem(value); return *this;}

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline RegisterCertificateRequest& WithCertificatePem(Aws::String&& value) { SetCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline RegisterCertificateRequest& WithCertificatePem(const char* value) { SetCertificatePem(value); return *this;}


    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline const Aws::String& GetCaCertificatePem() const{ return m_caCertificatePem; }

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline bool CaCertificatePemHasBeenSet() const { return m_caCertificatePemHasBeenSet; }

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline void SetCaCertificatePem(const Aws::String& value) { m_caCertificatePemHasBeenSet = true; m_caCertificatePem = value; }

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline void SetCaCertificatePem(Aws::String&& value) { m_caCertificatePemHasBeenSet = true; m_caCertificatePem = std::move(value); }

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline void SetCaCertificatePem(const char* value) { m_caCertificatePemHasBeenSet = true; m_caCertificatePem.assign(value); }

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline RegisterCertificateRequest& WithCaCertificatePem(const Aws::String& value) { SetCaCertificatePem(value); return *this;}

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline RegisterCertificateRequest& WithCaCertificatePem(Aws::String&& value) { SetCaCertificatePem(std::move(value)); return *this;}

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline RegisterCertificateRequest& WithCaCertificatePem(const char* value) { SetCaCertificatePem(value); return *this;}


    /**
     * <p>The status of the register certificate request.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the register certificate request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the register certificate request.</p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the register certificate request.</p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the register certificate request.</p>
     */
    inline RegisterCertificateRequest& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the register certificate request.</p>
     */
    inline RegisterCertificateRequest& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;

    Aws::String m_caCertificatePem;
    bool m_caCertificatePemHasBeenSet;

    CertificateStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
