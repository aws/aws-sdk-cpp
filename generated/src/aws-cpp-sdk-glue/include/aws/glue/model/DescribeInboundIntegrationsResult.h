/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/InboundIntegration.h>
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
namespace Glue
{
namespace Model
{
  class DescribeInboundIntegrationsResult
  {
  public:
    AWS_GLUE_API DescribeInboundIntegrationsResult() = default;
    AWS_GLUE_API DescribeInboundIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DescribeInboundIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of inbound integrations.</p>
     */
    inline const Aws::Vector<InboundIntegration>& GetInboundIntegrations() const { return m_inboundIntegrations; }
    template<typename InboundIntegrationsT = Aws::Vector<InboundIntegration>>
    void SetInboundIntegrations(InboundIntegrationsT&& value) { m_inboundIntegrationsHasBeenSet = true; m_inboundIntegrations = std::forward<InboundIntegrationsT>(value); }
    template<typename InboundIntegrationsT = Aws::Vector<InboundIntegration>>
    DescribeInboundIntegrationsResult& WithInboundIntegrations(InboundIntegrationsT&& value) { SetInboundIntegrations(std::forward<InboundIntegrationsT>(value)); return *this;}
    template<typename InboundIntegrationsT = InboundIntegration>
    DescribeInboundIntegrationsResult& AddInboundIntegrations(InboundIntegrationsT&& value) { m_inboundIntegrationsHasBeenSet = true; m_inboundIntegrations.emplace_back(std::forward<InboundIntegrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeInboundIntegrationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInboundIntegrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InboundIntegration> m_inboundIntegrations;
    bool m_inboundIntegrationsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
