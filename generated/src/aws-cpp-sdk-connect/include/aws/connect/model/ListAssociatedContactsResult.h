/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AssociatedContactSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListAssociatedContactsResult
  {
  public:
    AWS_CONNECT_API ListAssociatedContactsResult();
    AWS_CONNECT_API ListAssociatedContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAssociatedContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the contact summary for all the contacts in contact tree associated
     * with unique identifier.</p>
     */
    inline const Aws::Vector<AssociatedContactSummary>& GetContactSummaryList() const{ return m_contactSummaryList; }
    inline void SetContactSummaryList(const Aws::Vector<AssociatedContactSummary>& value) { m_contactSummaryList = value; }
    inline void SetContactSummaryList(Aws::Vector<AssociatedContactSummary>&& value) { m_contactSummaryList = std::move(value); }
    inline ListAssociatedContactsResult& WithContactSummaryList(const Aws::Vector<AssociatedContactSummary>& value) { SetContactSummaryList(value); return *this;}
    inline ListAssociatedContactsResult& WithContactSummaryList(Aws::Vector<AssociatedContactSummary>&& value) { SetContactSummaryList(std::move(value)); return *this;}
    inline ListAssociatedContactsResult& AddContactSummaryList(const AssociatedContactSummary& value) { m_contactSummaryList.push_back(value); return *this; }
    inline ListAssociatedContactsResult& AddContactSummaryList(AssociatedContactSummary&& value) { m_contactSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssociatedContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociatedContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociatedContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssociatedContactsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssociatedContactsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssociatedContactsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedContactSummary> m_contactSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
