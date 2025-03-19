/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/DestinationPortMapping.h>
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
  class ListCustomRoutingPortMappingsByDestinationResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationResult() = default;
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsByDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The port mappings for the endpoint IP address that you specified in the
     * request.</p>
     */
    inline const Aws::Vector<DestinationPortMapping>& GetDestinationPortMappings() const { return m_destinationPortMappings; }
    template<typename DestinationPortMappingsT = Aws::Vector<DestinationPortMapping>>
    void SetDestinationPortMappings(DestinationPortMappingsT&& value) { m_destinationPortMappingsHasBeenSet = true; m_destinationPortMappings = std::forward<DestinationPortMappingsT>(value); }
    template<typename DestinationPortMappingsT = Aws::Vector<DestinationPortMapping>>
    ListCustomRoutingPortMappingsByDestinationResult& WithDestinationPortMappings(DestinationPortMappingsT&& value) { SetDestinationPortMappings(std::forward<DestinationPortMappingsT>(value)); return *this;}
    template<typename DestinationPortMappingsT = DestinationPortMapping>
    ListCustomRoutingPortMappingsByDestinationResult& AddDestinationPortMappings(DestinationPortMappingsT&& value) { m_destinationPortMappingsHasBeenSet = true; m_destinationPortMappings.emplace_back(std::forward<DestinationPortMappingsT>(value)); return *this; }
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
    ListCustomRoutingPortMappingsByDestinationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomRoutingPortMappingsByDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DestinationPortMapping> m_destinationPortMappings;
    bool m_destinationPortMappingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
