/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/PortMapping.h>
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
  class ListCustomRoutingPortMappingsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsResult() = default;
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingPortMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The port mappings for a custom routing accelerator.</p>
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const { return m_portMappings; }
    template<typename PortMappingsT = Aws::Vector<PortMapping>>
    void SetPortMappings(PortMappingsT&& value) { m_portMappingsHasBeenSet = true; m_portMappings = std::forward<PortMappingsT>(value); }
    template<typename PortMappingsT = Aws::Vector<PortMapping>>
    ListCustomRoutingPortMappingsResult& WithPortMappings(PortMappingsT&& value) { SetPortMappings(std::forward<PortMappingsT>(value)); return *this;}
    template<typename PortMappingsT = PortMapping>
    ListCustomRoutingPortMappingsResult& AddPortMappings(PortMappingsT&& value) { m_portMappingsHasBeenSet = true; m_portMappings.emplace_back(std::forward<PortMappingsT>(value)); return *this; }
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
    ListCustomRoutingPortMappingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomRoutingPortMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PortMapping> m_portMappings;
    bool m_portMappingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
