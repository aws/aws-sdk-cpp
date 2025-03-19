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
  class UpdateCertificateProviderResult
  {
  public:
    AWS_IOT_API UpdateCertificateProviderResult() = default;
    AWS_IOT_API UpdateCertificateProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateCertificateProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const { return m_certificateProviderName; }
    template<typename CertificateProviderNameT = Aws::String>
    void SetCertificateProviderName(CertificateProviderNameT&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::forward<CertificateProviderNameT>(value); }
    template<typename CertificateProviderNameT = Aws::String>
    UpdateCertificateProviderResult& WithCertificateProviderName(CertificateProviderNameT&& value) { SetCertificateProviderName(std::forward<CertificateProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderArn() const { return m_certificateProviderArn; }
    template<typename CertificateProviderArnT = Aws::String>
    void SetCertificateProviderArn(CertificateProviderArnT&& value) { m_certificateProviderArnHasBeenSet = true; m_certificateProviderArn = std::forward<CertificateProviderArnT>(value); }
    template<typename CertificateProviderArnT = Aws::String>
    UpdateCertificateProviderResult& WithCertificateProviderArn(CertificateProviderArnT&& value) { SetCertificateProviderArn(std::forward<CertificateProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCertificateProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;

    Aws::String m_certificateProviderArn;
    bool m_certificateProviderArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
