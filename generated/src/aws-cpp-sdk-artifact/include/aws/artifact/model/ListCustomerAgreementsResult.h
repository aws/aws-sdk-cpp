/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/artifact/model/CustomerAgreementSummary.h>
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
namespace Artifact
{
namespace Model
{
  class ListCustomerAgreementsResult
  {
  public:
    AWS_ARTIFACT_API ListCustomerAgreementsResult() = default;
    AWS_ARTIFACT_API ListCustomerAgreementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API ListCustomerAgreementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of customer-agreement resources.</p>
     */
    inline const Aws::Vector<CustomerAgreementSummary>& GetCustomerAgreements() const { return m_customerAgreements; }
    template<typename CustomerAgreementsT = Aws::Vector<CustomerAgreementSummary>>
    void SetCustomerAgreements(CustomerAgreementsT&& value) { m_customerAgreementsHasBeenSet = true; m_customerAgreements = std::forward<CustomerAgreementsT>(value); }
    template<typename CustomerAgreementsT = Aws::Vector<CustomerAgreementSummary>>
    ListCustomerAgreementsResult& WithCustomerAgreements(CustomerAgreementsT&& value) { SetCustomerAgreements(std::forward<CustomerAgreementsT>(value)); return *this;}
    template<typename CustomerAgreementsT = CustomerAgreementSummary>
    ListCustomerAgreementsResult& AddCustomerAgreements(CustomerAgreementsT&& value) { m_customerAgreementsHasBeenSet = true; m_customerAgreements.emplace_back(std::forward<CustomerAgreementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token to request the next page of resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomerAgreementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomerAgreementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerAgreementSummary> m_customerAgreements;
    bool m_customerAgreementsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
