/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedAgreement.h>
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
namespace Transfer
{
namespace Model
{
  class ListAgreementsResult
  {
  public:
    AWS_TRANSFER_API ListAgreementsResult() = default;
    AWS_TRANSFER_API ListAgreementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListAgreementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a token that you can use to call <code>ListAgreements</code> again
     * and receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAgreementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array, where each item contains the details of an agreement.</p>
     */
    inline const Aws::Vector<ListedAgreement>& GetAgreements() const { return m_agreements; }
    template<typename AgreementsT = Aws::Vector<ListedAgreement>>
    void SetAgreements(AgreementsT&& value) { m_agreementsHasBeenSet = true; m_agreements = std::forward<AgreementsT>(value); }
    template<typename AgreementsT = Aws::Vector<ListedAgreement>>
    ListAgreementsResult& WithAgreements(AgreementsT&& value) { SetAgreements(std::forward<AgreementsT>(value)); return *this;}
    template<typename AgreementsT = ListedAgreement>
    ListAgreementsResult& AddAgreements(AgreementsT&& value) { m_agreementsHasBeenSet = true; m_agreements.emplace_back(std::forward<AgreementsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAgreementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListedAgreement> m_agreements;
    bool m_agreementsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
