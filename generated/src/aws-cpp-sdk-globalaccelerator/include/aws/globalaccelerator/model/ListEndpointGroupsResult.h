/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointGroup.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListEndpointGroupsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListEndpointGroupsResult() = default;
    AWS_GLOBALACCELERATOR_API ListEndpointGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListEndpointGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the endpoint groups associated with a listener.</p>
     */
    inline const Aws::Vector<EndpointGroup>& GetEndpointGroups() const { return m_endpointGroups; }
    template<typename EndpointGroupsT = Aws::Vector<EndpointGroup>>
    void SetEndpointGroups(EndpointGroupsT&& value) { m_endpointGroupsHasBeenSet = true; m_endpointGroups = std::forward<EndpointGroupsT>(value); }
    template<typename EndpointGroupsT = Aws::Vector<EndpointGroup>>
    ListEndpointGroupsResult& WithEndpointGroups(EndpointGroupsT&& value) { SetEndpointGroups(std::forward<EndpointGroupsT>(value)); return *this;}
    template<typename EndpointGroupsT = EndpointGroup>
    ListEndpointGroupsResult& AddEndpointGroups(EndpointGroupsT&& value) { m_endpointGroupsHasBeenSet = true; m_endpointGroups.emplace_back(std::forward<EndpointGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEndpointGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEndpointGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointGroup> m_endpointGroups;
    bool m_endpointGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
