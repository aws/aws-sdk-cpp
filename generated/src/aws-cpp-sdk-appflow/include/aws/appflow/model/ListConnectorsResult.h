/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorDetail.h>
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
  class ListConnectorsResult
  {
  public:
    AWS_APPFLOW_API ListConnectorsResult() = default;
    AWS_APPFLOW_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline const Aws::Vector<ConnectorDetail>& GetConnectors() const { return m_connectors; }
    template<typename ConnectorsT = Aws::Vector<ConnectorDetail>>
    void SetConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors = std::forward<ConnectorsT>(value); }
    template<typename ConnectorsT = Aws::Vector<ConnectorDetail>>
    ListConnectorsResult& WithConnectors(ConnectorsT&& value) { SetConnectors(std::forward<ConnectorsT>(value)); return *this;}
    template<typename ConnectorsT = ConnectorDetail>
    ListConnectorsResult& AddConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors.emplace_back(std::forward<ConnectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorDetail> m_connectors;
    bool m_connectorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
