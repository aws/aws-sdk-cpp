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
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the UpdateCertificate operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the certificate. (The last part of the certificate ARN contains the
     * certificate ID.)</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    UpdateCertificateRequest& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status.</p> <p> <b>Note:</b> Setting the status to PENDING_TRANSFER
     * or PENDING_ACTIVATION will result in an exception being thrown. PENDING_TRANSFER
     * and PENDING_ACTIVATION are statuses used internally by IoT. They are not
     * intended for developer use.</p> <p> <b>Note:</b> The status value
     * REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline CertificateStatus GetNewStatus() const { return m_newStatus; }
    inline bool NewStatusHasBeenSet() const { return m_newStatusHasBeenSet; }
    inline void SetNewStatus(CertificateStatus value) { m_newStatusHasBeenSet = true; m_newStatus = value; }
    inline UpdateCertificateRequest& WithNewStatus(CertificateStatus value) { SetNewStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CertificateStatus m_newStatus{CertificateStatus::NOT_SET};
    bool m_newStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
