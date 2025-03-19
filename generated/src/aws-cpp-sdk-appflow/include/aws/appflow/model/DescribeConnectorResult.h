/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ConnectorConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeConnectorResult
  {
  public:
    AWS_APPFLOW_API DescribeConnectorResult() = default;
    AWS_APPFLOW_API DescribeConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Configuration info of all the connectors that the user requested.</p>
     */
    inline const ConnectorConfiguration& GetConnectorConfiguration() const { return m_connectorConfiguration; }
    template<typename ConnectorConfigurationT = ConnectorConfiguration>
    void SetConnectorConfiguration(ConnectorConfigurationT&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value); }
    template<typename ConnectorConfigurationT = ConnectorConfiguration>
    DescribeConnectorResult& WithConnectorConfiguration(ConnectorConfigurationT&& value) { SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectorConfiguration m_connectorConfiguration;
    bool m_connectorConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
