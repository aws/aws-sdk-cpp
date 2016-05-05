/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input to the RegisterCertificate operation.</p>
   */
  class AWS_IOT_API RegisterCertificateRequest : public IoTRequest
  {
  public:
    RegisterCertificateRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline const Aws::String& GetCertificatePem() const{ return m_certificatePem; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(const Aws::String& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

    /**
     * <p>The certificate data, in PEM format.</p>
     */
    inline void SetCertificatePem(Aws::String&& value) { m_certificatePemHasBeenSet = true; m_certificatePem = value; }

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
    inline RegisterCertificateRequest& WithCertificatePem(Aws::String&& value) { SetCertificatePem(value); return *this;}

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
    inline void SetCaCertificatePem(const Aws::String& value) { m_caCertificatePemHasBeenSet = true; m_caCertificatePem = value; }

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline void SetCaCertificatePem(Aws::String&& value) { m_caCertificatePemHasBeenSet = true; m_caCertificatePem = value; }

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
    inline RegisterCertificateRequest& WithCaCertificatePem(Aws::String&& value) { SetCaCertificatePem(value); return *this;}

    /**
     * <p>The CA certificate used to sign the device certificate being registered.</p>
     */
    inline RegisterCertificateRequest& WithCaCertificatePem(const char* value) { SetCaCertificatePem(value); return *this;}

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline bool GetSetAsActive() const{ return m_setAsActive; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }

    /**
     * <p>A boolean value that specifies if the CA certificate is set to active.</p>
     */
    inline RegisterCertificateRequest& WithSetAsActive(bool value) { SetSetAsActive(value); return *this;}

  private:
    Aws::String m_certificatePem;
    bool m_certificatePemHasBeenSet;
    Aws::String m_caCertificatePem;
    bool m_caCertificatePemHasBeenSet;
    bool m_setAsActive;
    bool m_setAsActiveHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
