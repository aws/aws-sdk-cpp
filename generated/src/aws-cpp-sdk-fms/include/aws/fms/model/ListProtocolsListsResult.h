/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ProtocolsListDataSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListProtocolsListsResult
  {
  public:
    AWS_FMS_API ListProtocolsListsResult() = default;
    AWS_FMS_API ListProtocolsListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListProtocolsListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline const Aws::Vector<ProtocolsListDataSummary>& GetProtocolsLists() const { return m_protocolsLists; }
    template<typename ProtocolsListsT = Aws::Vector<ProtocolsListDataSummary>>
    void SetProtocolsLists(ProtocolsListsT&& value) { m_protocolsListsHasBeenSet = true; m_protocolsLists = std::forward<ProtocolsListsT>(value); }
    template<typename ProtocolsListsT = Aws::Vector<ProtocolsListDataSummary>>
    ListProtocolsListsResult& WithProtocolsLists(ProtocolsListsT&& value) { SetProtocolsLists(std::forward<ProtocolsListsT>(value)); return *this;}
    template<typename ProtocolsListsT = ProtocolsListDataSummary>
    ListProtocolsListsResult& AddProtocolsLists(ProtocolsListsT&& value) { m_protocolsListsHasBeenSet = true; m_protocolsLists.emplace_back(std::forward<ProtocolsListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProtocolsListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProtocolsListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProtocolsListDataSummary> m_protocolsLists;
    bool m_protocolsListsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
