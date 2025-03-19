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
   * <p>The input for the TransferCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificateRequest">AWS
   * API Reference</a></p>
   */
  class TransferCertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API TransferCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransferCertificate"; }

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
    TransferCertificateRequest& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTargetAwsAccount() const { return m_targetAwsAccount; }
    inline bool TargetAwsAccountHasBeenSet() const { return m_targetAwsAccountHasBeenSet; }
    template<typename TargetAwsAccountT = Aws::String>
    void SetTargetAwsAccount(TargetAwsAccountT&& value) { m_targetAwsAccountHasBeenSet = true; m_targetAwsAccount = std::forward<TargetAwsAccountT>(value); }
    template<typename TargetAwsAccountT = Aws::String>
    TransferCertificateRequest& WithTargetAwsAccount(TargetAwsAccountT&& value) { SetTargetAwsAccount(std::forward<TargetAwsAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transfer message.</p>
     */
    inline const Aws::String& GetTransferMessage() const { return m_transferMessage; }
    inline bool TransferMessageHasBeenSet() const { return m_transferMessageHasBeenSet; }
    template<typename TransferMessageT = Aws::String>
    void SetTransferMessage(TransferMessageT&& value) { m_transferMessageHasBeenSet = true; m_transferMessage = std::forward<TransferMessageT>(value); }
    template<typename TransferMessageT = Aws::String>
    TransferCertificateRequest& WithTransferMessage(TransferMessageT&& value) { SetTransferMessage(std::forward<TransferMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_targetAwsAccount;
    bool m_targetAwsAccountHasBeenSet = false;

    Aws::String m_transferMessage;
    bool m_transferMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
