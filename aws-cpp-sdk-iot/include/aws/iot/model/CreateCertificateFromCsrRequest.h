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
   * <p>The input for the CreateCertificateFromCsr operation.</p>
   */
  class AWS_IOT_API CreateCertificateFromCsrRequest : public IoTRequest
  {
  public:
    CreateCertificateFromCsrRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline const Aws::String& GetCertificateSigningRequest() const{ return m_certificateSigningRequest; }

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline void SetCertificateSigningRequest(const Aws::String& value) { m_certificateSigningRequestHasBeenSet = true; m_certificateSigningRequest = value; }

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline void SetCertificateSigningRequest(Aws::String&& value) { m_certificateSigningRequestHasBeenSet = true; m_certificateSigningRequest = value; }

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline void SetCertificateSigningRequest(const char* value) { m_certificateSigningRequestHasBeenSet = true; m_certificateSigningRequest.assign(value); }

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline CreateCertificateFromCsrRequest& WithCertificateSigningRequest(const Aws::String& value) { SetCertificateSigningRequest(value); return *this;}

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline CreateCertificateFromCsrRequest& WithCertificateSigningRequest(Aws::String&& value) { SetCertificateSigningRequest(value); return *this;}

    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline CreateCertificateFromCsrRequest& WithCertificateSigningRequest(const char* value) { SetCertificateSigningRequest(value); return *this;}

    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline bool GetSetAsActive() const{ return m_setAsActive; }

    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }

    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline CreateCertificateFromCsrRequest& WithSetAsActive(bool value) { SetSetAsActive(value); return *this;}

  private:
    Aws::String m_certificateSigningRequest;
    bool m_certificateSigningRequestHasBeenSet;
    bool m_setAsActive;
    bool m_setAsActiveHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
