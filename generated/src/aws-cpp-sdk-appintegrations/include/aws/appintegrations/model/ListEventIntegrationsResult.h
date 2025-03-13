/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventIntegration.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class ListEventIntegrationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationsResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event integrations.</p>
     */
    inline const Aws::Vector<EventIntegration>& GetEventIntegrations() const { return m_eventIntegrations; }
    template<typename EventIntegrationsT = Aws::Vector<EventIntegration>>
    void SetEventIntegrations(EventIntegrationsT&& value) { m_eventIntegrationsHasBeenSet = true; m_eventIntegrations = std::forward<EventIntegrationsT>(value); }
    template<typename EventIntegrationsT = Aws::Vector<EventIntegration>>
    ListEventIntegrationsResult& WithEventIntegrations(EventIntegrationsT&& value) { SetEventIntegrations(std::forward<EventIntegrationsT>(value)); return *this;}
    template<typename EventIntegrationsT = EventIntegration>
    ListEventIntegrationsResult& AddEventIntegrations(EventIntegrationsT&& value) { m_eventIntegrationsHasBeenSet = true; m_eventIntegrations.emplace_back(std::forward<EventIntegrationsT>(value)); return *this; }
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
    ListEventIntegrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventIntegrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventIntegration> m_eventIntegrations;
    bool m_eventIntegrationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
