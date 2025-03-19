/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/CertificateInfo.h>
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
namespace DirectoryService
{
namespace Model
{
  class ListCertificatesResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListCertificatesResult() = default;
    AWS_DIRECTORYSERVICE_API ListCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether another page of certificates is available when the number
     * of available certificates exceeds the page limit.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCertificatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of certificates with basic details including certificate ID,
     * certificate common name, certificate state.</p>
     */
    inline const Aws::Vector<CertificateInfo>& GetCertificatesInfo() const { return m_certificatesInfo; }
    template<typename CertificatesInfoT = Aws::Vector<CertificateInfo>>
    void SetCertificatesInfo(CertificatesInfoT&& value) { m_certificatesInfoHasBeenSet = true; m_certificatesInfo = std::forward<CertificatesInfoT>(value); }
    template<typename CertificatesInfoT = Aws::Vector<CertificateInfo>>
    ListCertificatesResult& WithCertificatesInfo(CertificatesInfoT&& value) { SetCertificatesInfo(std::forward<CertificatesInfoT>(value)); return *this;}
    template<typename CertificatesInfoT = CertificateInfo>
    ListCertificatesResult& AddCertificatesInfo(CertificatesInfoT&& value) { m_certificatesInfoHasBeenSet = true; m_certificatesInfo.emplace_back(std::forward<CertificatesInfoT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCertificatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CertificateInfo> m_certificatesInfo;
    bool m_certificatesInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
