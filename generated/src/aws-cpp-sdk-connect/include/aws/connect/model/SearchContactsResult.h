/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactSearchSummary.h>
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
  class SearchContactsResult
  {
  public:
    AWS_CONNECT_API SearchContactsResult();
    AWS_CONNECT_API SearchContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the contacts.</p>
     */
    inline const Aws::Vector<ContactSearchSummary>& GetContacts() const{ return m_contacts; }

    /**
     * <p>Information about the contacts.</p>
     */
    inline void SetContacts(const Aws::Vector<ContactSearchSummary>& value) { m_contacts = value; }

    /**
     * <p>Information about the contacts.</p>
     */
    inline void SetContacts(Aws::Vector<ContactSearchSummary>&& value) { m_contacts = std::move(value); }

    /**
     * <p>Information about the contacts.</p>
     */
    inline SearchContactsResult& WithContacts(const Aws::Vector<ContactSearchSummary>& value) { SetContacts(value); return *this;}

    /**
     * <p>Information about the contacts.</p>
     */
    inline SearchContactsResult& WithContacts(Aws::Vector<ContactSearchSummary>&& value) { SetContacts(std::move(value)); return *this;}

    /**
     * <p>Information about the contacts.</p>
     */
    inline SearchContactsResult& AddContacts(const ContactSearchSummary& value) { m_contacts.push_back(value); return *this; }

    /**
     * <p>Information about the contacts.</p>
     */
    inline SearchContactsResult& AddContacts(ContactSearchSummary&& value) { m_contacts.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of contacts which matched your search query.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of contacts which matched your search query.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCount = value; }

    /**
     * <p>The total number of contacts which matched your search query.</p>
     */
    inline SearchContactsResult& WithTotalCount(long long value) { SetTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchContactsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchContactsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchContactsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ContactSearchSummary> m_contacts;

    Aws::String m_nextToken;

    long long m_totalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
