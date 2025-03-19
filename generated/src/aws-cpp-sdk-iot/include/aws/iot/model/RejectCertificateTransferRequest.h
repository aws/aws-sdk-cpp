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
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the RejectCertificateTransfer operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RejectCertificateTransferRequest">AWS
   * API Reference</a></p>
   */
  class RejectCertificateTransferRequest : public IoTRequest
  {
  public:
    AWS_IOT_API RejectCertificateTransferRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectCertificateTransfer"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


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
    RejectCertificateTransferRequest& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the certificate transfer was rejected.</p>
     */
    inline const Aws::String& GetRejectReason() const { return m_rejectReason; }
    inline bool RejectReasonHasBeenSet() const { return m_rejectReasonHasBeenSet; }
    template<typename RejectReasonT = Aws::String>
    void SetRejectReason(RejectReasonT&& value) { m_rejectReasonHasBeenSet = true; m_rejectReason = std::forward<RejectReasonT>(value); }
    template<typename RejectReasonT = Aws::String>
    RejectCertificateTransferRequest& WithRejectReason(RejectReasonT&& value) { SetRejectReason(std::forward<RejectReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_rejectReason;
    bool m_rejectReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
