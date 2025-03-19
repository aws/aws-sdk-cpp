/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateSummary.h>
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
namespace ACM
{
namespace Model
{
  class ListCertificatesResult
  {
  public:
    AWS_ACM_API ListCertificatesResult() = default;
    AWS_ACM_API ListCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API ListCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCertificatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ACM certificates.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificateSummaryList() const { return m_certificateSummaryList; }
    template<typename CertificateSummaryListT = Aws::Vector<CertificateSummary>>
    void SetCertificateSummaryList(CertificateSummaryListT&& value) { m_certificateSummaryListHasBeenSet = true; m_certificateSummaryList = std::forward<CertificateSummaryListT>(value); }
    template<typename CertificateSummaryListT = Aws::Vector<CertificateSummary>>
    ListCertificatesResult& WithCertificateSummaryList(CertificateSummaryListT&& value) { SetCertificateSummaryList(std::forward<CertificateSummaryListT>(value)); return *this;}
    template<typename CertificateSummaryListT = CertificateSummary>
    ListCertificatesResult& AddCertificateSummaryList(CertificateSummaryListT&& value) { m_certificateSummaryListHasBeenSet = true; m_certificateSummaryList.emplace_back(std::forward<CertificateSummaryListT>(value)); return *this; }
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

    Aws::Vector<CertificateSummary> m_certificateSummaryList;
    bool m_certificateSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
