/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/InvestigationDetail.h>
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
namespace Detective
{
namespace Model
{
  class ListInvestigationsResult
  {
  public:
    AWS_DETECTIVE_API ListInvestigationsResult() = default;
    AWS_DETECTIVE_API ListInvestigationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListInvestigationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the summary of uncommon behavior or malicious activity which indicates
     * a compromise.</p>
     */
    inline const Aws::Vector<InvestigationDetail>& GetInvestigationDetails() const { return m_investigationDetails; }
    template<typename InvestigationDetailsT = Aws::Vector<InvestigationDetail>>
    void SetInvestigationDetails(InvestigationDetailsT&& value) { m_investigationDetailsHasBeenSet = true; m_investigationDetails = std::forward<InvestigationDetailsT>(value); }
    template<typename InvestigationDetailsT = Aws::Vector<InvestigationDetail>>
    ListInvestigationsResult& WithInvestigationDetails(InvestigationDetailsT&& value) { SetInvestigationDetails(std::forward<InvestigationDetailsT>(value)); return *this;}
    template<typename InvestigationDetailsT = InvestigationDetail>
    ListInvestigationsResult& AddInvestigationDetails(InvestigationDetailsT&& value) { m_investigationDetailsHasBeenSet = true; m_investigationDetails.emplace_back(std::forward<InvestigationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvestigationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvestigationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InvestigationDetail> m_investigationDetails;
    bool m_investigationDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
