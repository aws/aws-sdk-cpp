/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/PartnershipSummary.h>
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
namespace B2BI
{
namespace Model
{
  class ListPartnershipsResult
  {
  public:
    AWS_B2BI_API ListPartnershipsResult() = default;
    AWS_B2BI_API ListPartnershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API ListPartnershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline const Aws::Vector<PartnershipSummary>& GetPartnerships() const { return m_partnerships; }
    template<typename PartnershipsT = Aws::Vector<PartnershipSummary>>
    void SetPartnerships(PartnershipsT&& value) { m_partnershipsHasBeenSet = true; m_partnerships = std::forward<PartnershipsT>(value); }
    template<typename PartnershipsT = Aws::Vector<PartnershipSummary>>
    ListPartnershipsResult& WithPartnerships(PartnershipsT&& value) { SetPartnerships(std::forward<PartnershipsT>(value)); return *this;}
    template<typename PartnershipsT = PartnershipSummary>
    ListPartnershipsResult& AddPartnerships(PartnershipsT&& value) { m_partnershipsHasBeenSet = true; m_partnerships.emplace_back(std::forward<PartnershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPartnershipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPartnershipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PartnershipSummary> m_partnerships;
    bool m_partnershipsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
