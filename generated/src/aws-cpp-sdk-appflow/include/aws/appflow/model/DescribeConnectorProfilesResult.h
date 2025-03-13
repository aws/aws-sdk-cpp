/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorProfile.h>
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
  class DescribeConnectorProfilesResult
  {
  public:
    AWS_APPFLOW_API DescribeConnectorProfilesResult() = default;
    AWS_APPFLOW_API DescribeConnectorProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Returns information about the connector profiles associated with the flow.
     * </p>
     */
    inline const Aws::Vector<ConnectorProfile>& GetConnectorProfileDetails() const { return m_connectorProfileDetails; }
    template<typename ConnectorProfileDetailsT = Aws::Vector<ConnectorProfile>>
    void SetConnectorProfileDetails(ConnectorProfileDetailsT&& value) { m_connectorProfileDetailsHasBeenSet = true; m_connectorProfileDetails = std::forward<ConnectorProfileDetailsT>(value); }
    template<typename ConnectorProfileDetailsT = Aws::Vector<ConnectorProfile>>
    DescribeConnectorProfilesResult& WithConnectorProfileDetails(ConnectorProfileDetailsT&& value) { SetConnectorProfileDetails(std::forward<ConnectorProfileDetailsT>(value)); return *this;}
    template<typename ConnectorProfileDetailsT = ConnectorProfile>
    DescribeConnectorProfilesResult& AddConnectorProfileDetails(ConnectorProfileDetailsT&& value) { m_connectorProfileDetailsHasBeenSet = true; m_connectorProfileDetails.emplace_back(std::forward<ConnectorProfileDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token for the next page of data. If
     * <code>nextToken=null</code>, this means that all records have been fetched. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConnectorProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectorProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorProfile> m_connectorProfileDetails;
    bool m_connectorProfileDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
