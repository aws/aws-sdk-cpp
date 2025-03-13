/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The output from the TransferCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificateResponse">AWS
   * API Reference</a></p>
   */
  class TransferCertificateResult
  {
  public:
    AWS_IOT_API TransferCertificateResult() = default;
    AWS_IOT_API TransferCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API TransferCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the certificate.</p>
     */
    inline const Aws::String& GetTransferredCertificateArn() const { return m_transferredCertificateArn; }
    template<typename TransferredCertificateArnT = Aws::String>
    void SetTransferredCertificateArn(TransferredCertificateArnT&& value) { m_transferredCertificateArnHasBeenSet = true; m_transferredCertificateArn = std::forward<TransferredCertificateArnT>(value); }
    template<typename TransferredCertificateArnT = Aws::String>
    TransferCertificateResult& WithTransferredCertificateArn(TransferredCertificateArnT&& value) { SetTransferredCertificateArn(std::forward<TransferredCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TransferCertificateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transferredCertificateArn;
    bool m_transferredCertificateArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
