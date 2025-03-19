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
    AWS_CONNECT_API SearchContactFlowModulesResult() = default;
    AWS_CONNECT_API SearchContactFlowModulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchContactFlowModulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The search criteria to be used to return flow modules.</p>
     */
    inline const Aws::Vector<ContactFlowModule>& GetContactFlowModules() const { return m_contactFlowModules; }
    template<typename ContactFlowModulesT = Aws::Vector<ContactFlowModule>>
    void SetContactFlowModules(ContactFlowModulesT&& value) { m_contactFlowModulesHasBeenSet = true; m_contactFlowModules = std::forward<ContactFlowModulesT>(value); }
    template<typename ContactFlowModulesT = Aws::Vector<ContactFlowModule>>
    SearchContactFlowModulesResult& WithContactFlowModules(ContactFlowModulesT&& value) { SetContactFlowModules(std::forward<ContactFlowModulesT>(value)); return *this;}
    template<typename ContactFlowModulesT = ContactFlowModule>
    SearchContactFlowModulesResult& AddContactFlowModules(ContactFlowModulesT&& value) { m_contactFlowModulesHasBeenSet = true; m_contactFlowModules.emplace_back(std::forward<ContactFlowModulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchContactFlowModulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of flows which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchContactFlowModulesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchContactFlowModulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowModule> m_contactFlowModules;
    bool m_contactFlowModulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
