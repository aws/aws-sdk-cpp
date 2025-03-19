/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingEndpointGroup.h>
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
  class ListCustomRoutingEndpointGroupsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingEndpointGroupsResult() = default;
    AWS_GLOBALACCELERATOR_API ListCustomRoutingEndpointGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingEndpointGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of the endpoint groups associated with a listener for a custom
     * routing accelerator.</p>
     */
    inline const Aws::Vector<CustomRoutingEndpointGroup>& GetEndpointGroups() const { return m_endpointGroups; }
    template<typename EndpointGroupsT = Aws::Vector<CustomRoutingEndpointGroup>>
    void SetEndpointGroups(EndpointGroupsT&& value) { m_endpointGroupsHasBeenSet = true; m_endpointGroups = std::forward<EndpointGroupsT>(value); }
    template<typename EndpointGroupsT = Aws::Vector<CustomRoutingEndpointGroup>>
    ListCustomRoutingEndpointGroupsResult& WithEndpointGroups(EndpointGroupsT&& value) { SetEndpointGroups(std::forward<EndpointGroupsT>(value)); return *this;}
    template<typename EndpointGroupsT = CustomRoutingEndpointGroup>
    ListCustomRoutingEndpointGroupsResult& AddEndpointGroups(EndpointGroupsT&& value) { m_endpointGroupsHasBeenSet = true; m_endpointGroups.emplace_back(std::forward<EndpointGroupsT>(value)); return *this; }
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
    ListCustomRoutingEndpointGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomRoutingEndpointGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomRoutingEndpointGroup> m_endpointGroups;
    bool m_endpointGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
