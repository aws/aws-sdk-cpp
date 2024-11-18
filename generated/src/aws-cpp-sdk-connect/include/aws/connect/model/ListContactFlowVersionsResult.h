/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowVersionSummary.h>
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
  class ListContactFlowVersionsResult
  {
  public:
    AWS_CONNECT_API ListContactFlowVersionsResult();
    AWS_CONNECT_API ListContactFlowVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListContactFlowVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of flow version summaries.</p>
     */
    inline const Aws::Vector<ContactFlowVersionSummary>& GetContactFlowVersionSummaryList() const{ return m_contactFlowVersionSummaryList; }
    inline void SetContactFlowVersionSummaryList(const Aws::Vector<ContactFlowVersionSummary>& value) { m_contactFlowVersionSummaryList = value; }
    inline void SetContactFlowVersionSummaryList(Aws::Vector<ContactFlowVersionSummary>&& value) { m_contactFlowVersionSummaryList = std::move(value); }
    inline ListContactFlowVersionsResult& WithContactFlowVersionSummaryList(const Aws::Vector<ContactFlowVersionSummary>& value) { SetContactFlowVersionSummaryList(value); return *this;}
    inline ListContactFlowVersionsResult& WithContactFlowVersionSummaryList(Aws::Vector<ContactFlowVersionSummary>&& value) { SetContactFlowVersionSummaryList(std::move(value)); return *this;}
    inline ListContactFlowVersionsResult& AddContactFlowVersionSummaryList(const ContactFlowVersionSummary& value) { m_contactFlowVersionSummaryList.push_back(value); return *this; }
    inline ListContactFlowVersionsResult& AddContactFlowVersionSummaryList(ContactFlowVersionSummary&& value) { m_contactFlowVersionSummaryList.push_back(std::move(value)); return *this; }
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
    inline ListContactFlowVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContactFlowVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContactFlowVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListContactFlowVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListContactFlowVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListContactFlowVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowVersionSummary> m_contactFlowVersionSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
