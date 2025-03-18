/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventIntegrationAssociation.h>
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
  class ListEventIntegrationAssociationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event integration associations.</p>
     */
    inline const Aws::Vector<EventIntegrationAssociation>& GetEventIntegrationAssociations() const { return m_eventIntegrationAssociations; }
    template<typename EventIntegrationAssociationsT = Aws::Vector<EventIntegrationAssociation>>
    void SetEventIntegrationAssociations(EventIntegrationAssociationsT&& value) { m_eventIntegrationAssociationsHasBeenSet = true; m_eventIntegrationAssociations = std::forward<EventIntegrationAssociationsT>(value); }
    template<typename EventIntegrationAssociationsT = Aws::Vector<EventIntegrationAssociation>>
    ListEventIntegrationAssociationsResult& WithEventIntegrationAssociations(EventIntegrationAssociationsT&& value) { SetEventIntegrationAssociations(std::forward<EventIntegrationAssociationsT>(value)); return *this;}
    template<typename EventIntegrationAssociationsT = EventIntegrationAssociation>
    ListEventIntegrationAssociationsResult& AddEventIntegrationAssociations(EventIntegrationAssociationsT&& value) { m_eventIntegrationAssociationsHasBeenSet = true; m_eventIntegrationAssociations.emplace_back(std::forward<EventIntegrationAssociationsT>(value)); return *this; }
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
    ListEventIntegrationAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventIntegrationAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventIntegrationAssociation> m_eventIntegrationAssociations;
    bool m_eventIntegrationAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
