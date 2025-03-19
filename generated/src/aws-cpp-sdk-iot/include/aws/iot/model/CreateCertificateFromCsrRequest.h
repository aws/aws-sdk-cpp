/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The input for the CreateCertificateFromCsr operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateFromCsrRequest">AWS
   * API Reference</a></p>
   */
  class CreateCertificateFromCsrRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateCertificateFromCsrRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateFromCsr"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The certificate signing request (CSR).</p>
     */
    inline const Aws::String& GetCertificateSigningRequest() const { return m_certificateSigningRequest; }
    inline bool CertificateSigningRequestHasBeenSet() const { return m_certificateSigningRequestHasBeenSet; }
    template<typename CertificateSigningRequestT = Aws::String>
    void SetCertificateSigningRequest(CertificateSigningRequestT&& value) { m_certificateSigningRequestHasBeenSet = true; m_certificateSigningRequest = std::forward<CertificateSigningRequestT>(value); }
    template<typename CertificateSigningRequestT = Aws::String>
    CreateCertificateFromCsrRequest& WithCertificateSigningRequest(CertificateSigningRequestT&& value) { SetCertificateSigningRequest(std::forward<CertificateSigningRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the certificate is active.</p>
     */
    inline bool GetSetAsActive() const { return m_setAsActive; }
    inline bool SetAsActiveHasBeenSet() const { return m_setAsActiveHasBeenSet; }
    inline void SetSetAsActive(bool value) { m_setAsActiveHasBeenSet = true; m_setAsActive = value; }
    inline CreateCertificateFromCsrRequest& WithSetAsActive(bool value) { SetSetAsActive(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateSigningRequest;
    bool m_certificateSigningRequestHasBeenSet = false;

    bool m_setAsActive{false};
    bool m_setAsActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
