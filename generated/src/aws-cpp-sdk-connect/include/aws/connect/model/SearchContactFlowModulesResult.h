/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowModule.h>
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
  class SearchContactFlowModulesResult
  {
  public:
    AWS_CONNECT_API SearchContactFlowModulesResult();
    AWS_CONNECT_API SearchContactFlowModulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchContactFlowModulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The search criteria to be used to return flow modules.</p>
     */
    inline const Aws::Vector<ContactFlowModule>& GetContactFlowModules() const{ return m_contactFlowModules; }
    inline void SetContactFlowModules(const Aws::Vector<ContactFlowModule>& value) { m_contactFlowModules = value; }
    inline void SetContactFlowModules(Aws::Vector<ContactFlowModule>&& value) { m_contactFlowModules = std::move(value); }
    inline SearchContactFlowModulesResult& WithContactFlowModules(const Aws::Vector<ContactFlowModule>& value) { SetContactFlowModules(value); return *this;}
    inline SearchContactFlowModulesResult& WithContactFlowModules(Aws::Vector<ContactFlowModule>&& value) { SetContactFlowModules(std::move(value)); return *this;}
    inline SearchContactFlowModulesResult& AddContactFlowModules(const ContactFlowModule& value) { m_contactFlowModules.push_back(value); return *this; }
    inline SearchContactFlowModulesResult& AddContactFlowModules(ContactFlowModule&& value) { m_contactFlowModules.push_back(std::move(value)); return *this; }
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
    inline SearchContactFlowModulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchContactFlowModulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchContactFlowModulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of flows which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchContactFlowModulesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchContactFlowModulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchContactFlowModulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchContactFlowModulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowModule> m_contactFlowModules;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
