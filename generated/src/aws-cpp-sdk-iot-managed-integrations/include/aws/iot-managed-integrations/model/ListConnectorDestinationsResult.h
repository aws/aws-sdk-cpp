/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ConnectorDestinationSummary.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListConnectorDestinationsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListConnectorDestinationsResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ListConnectorDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListConnectorDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of connector destinations that match the specified criteria.</p>
     */
    inline const Aws::Vector<ConnectorDestinationSummary>& GetConnectorDestinationList() const { return m_connectorDestinationList; }
    template<typename ConnectorDestinationListT = Aws::Vector<ConnectorDestinationSummary>>
    void SetConnectorDestinationList(ConnectorDestinationListT&& value) { m_connectorDestinationListHasBeenSet = true; m_connectorDestinationList = std::forward<ConnectorDestinationListT>(value); }
    template<typename ConnectorDestinationListT = Aws::Vector<ConnectorDestinationSummary>>
    ListConnectorDestinationsResult& WithConnectorDestinationList(ConnectorDestinationListT&& value) { SetConnectorDestinationList(std::forward<ConnectorDestinationListT>(value)); return *this;}
    template<typename ConnectorDestinationListT = ConnectorDestinationSummary>
    ListConnectorDestinationsResult& AddConnectorDestinationList(ConnectorDestinationListT&& value) { m_connectorDestinationListHasBeenSet = true; m_connectorDestinationList.emplace_back(std::forward<ConnectorDestinationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results when there are more connector
     * destinations than can be returned in a single response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorDestinationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorDestinationSummary> m_connectorDestinationList;
    bool m_connectorDestinationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
