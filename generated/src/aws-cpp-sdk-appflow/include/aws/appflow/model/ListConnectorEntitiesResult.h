/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ConnectorEntity.h>
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
namespace Appflow
{
namespace Model
{
  class ListConnectorEntitiesResult
  {
  public:
    AWS_APPFLOW_API ListConnectorEntitiesResult() = default;
    AWS_APPFLOW_API ListConnectorEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API ListConnectorEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>& GetConnectorEntityMap() const { return m_connectorEntityMap; }
    template<typename ConnectorEntityMapT = Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>>
    void SetConnectorEntityMap(ConnectorEntityMapT&& value) { m_connectorEntityMapHasBeenSet = true; m_connectorEntityMap = std::forward<ConnectorEntityMapT>(value); }
    template<typename ConnectorEntityMapT = Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>>
    ListConnectorEntitiesResult& WithConnectorEntityMap(ConnectorEntityMapT&& value) { SetConnectorEntityMap(std::forward<ConnectorEntityMapT>(value)); return *this;}
    template<typename ConnectorEntityMapKeyT = Aws::String, typename ConnectorEntityMapValueT = Aws::Vector<ConnectorEntity>>
    ListConnectorEntitiesResult& AddConnectorEntityMap(ConnectorEntityMapKeyT&& key, ConnectorEntityMapValueT&& value) {
      m_connectorEntityMapHasBeenSet = true; m_connectorEntityMap.emplace(std::forward<ConnectorEntityMapKeyT>(key), std::forward<ConnectorEntityMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A token that you specify in your next <code>ListConnectorEntities</code>
     * operation to get the next page of results in paginated response. The
     * <code>ListConnectorEntities</code> operation provides this token if the response
     * is too big for the page size.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorEntitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorEntitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>> m_connectorEntityMap;
    bool m_connectorEntityMapHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
