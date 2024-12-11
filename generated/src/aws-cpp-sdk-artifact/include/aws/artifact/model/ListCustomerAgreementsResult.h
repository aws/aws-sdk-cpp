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
    AWS_ARTIFACT_API ListCustomerAgreementsResult();
    AWS_ARTIFACT_API ListCustomerAgreementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API ListCustomerAgreementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of customer-agreement resources.</p>
     */
    inline const Aws::Vector<CustomerAgreementSummary>& GetCustomerAgreements() const{ return m_customerAgreements; }
    inline void SetCustomerAgreements(const Aws::Vector<CustomerAgreementSummary>& value) { m_customerAgreements = value; }
    inline void SetCustomerAgreements(Aws::Vector<CustomerAgreementSummary>&& value) { m_customerAgreements = std::move(value); }
    inline ListCustomerAgreementsResult& WithCustomerAgreements(const Aws::Vector<CustomerAgreementSummary>& value) { SetCustomerAgreements(value); return *this;}
    inline ListCustomerAgreementsResult& WithCustomerAgreements(Aws::Vector<CustomerAgreementSummary>&& value) { SetCustomerAgreements(std::move(value)); return *this;}
    inline ListCustomerAgreementsResult& AddCustomerAgreements(const CustomerAgreementSummary& value) { m_customerAgreements.push_back(value); return *this; }
    inline ListCustomerAgreementsResult& AddCustomerAgreements(CustomerAgreementSummary&& value) { m_customerAgreements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token to request the next page of resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomerAgreementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomerAgreementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomerAgreementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomerAgreementsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomerAgreementsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomerAgreementsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerAgreementSummary> m_customerAgreements;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
