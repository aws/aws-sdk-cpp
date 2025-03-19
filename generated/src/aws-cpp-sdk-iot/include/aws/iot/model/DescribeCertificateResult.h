/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CertificateDescription.h>
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
   * <p>The output of the DescribeCertificate operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificateResponse">AWS
   * API Reference</a></p>
   */
  class DescribeCertificateResult
  {
  public:
    AWS_IOT_API DescribeCertificateResult() = default;
    AWS_IOT_API DescribeCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the certificate.</p>
     */
    inline const CertificateDescription& GetCertificateDescription() const { return m_certificateDescription; }
    template<typename CertificateDescriptionT = CertificateDescription>
    void SetCertificateDescription(CertificateDescriptionT&& value) { m_certificateDescriptionHasBeenSet = true; m_certificateDescription = std::forward<CertificateDescriptionT>(value); }
    template<typename CertificateDescriptionT = CertificateDescription>
    DescribeCertificateResult& WithCertificateDescription(CertificateDescriptionT&& value) { SetCertificateDescription(std::forward<CertificateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCertificateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CertificateDescription m_certificateDescription;
    bool m_certificateDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
