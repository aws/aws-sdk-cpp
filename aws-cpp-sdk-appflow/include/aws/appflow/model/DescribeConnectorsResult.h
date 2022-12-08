/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/appflow/model/ConnectorConfiguration.h>
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
  class DescribeConnectorsResult
  {
  public:
    AWS_APPFLOW_API DescribeConnectorsResult();
    AWS_APPFLOW_API DescribeConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline const Aws::Map<ConnectorType, ConnectorConfiguration>& GetConnectorConfigurations() const{ return m_connectorConfigurations; }

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline void SetConnectorConfigurations(const Aws::Map<ConnectorType, ConnectorConfiguration>& value) { m_connectorConfigurations = value; }

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline void SetConnectorConfigurations(Aws::Map<ConnectorType, ConnectorConfiguration>&& value) { m_connectorConfigurations = std::move(value); }

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline DescribeConnectorsResult& WithConnectorConfigurations(const Aws::Map<ConnectorType, ConnectorConfiguration>& value) { SetConnectorConfigurations(value); return *this;}

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline DescribeConnectorsResult& WithConnectorConfigurations(Aws::Map<ConnectorType, ConnectorConfiguration>&& value) { SetConnectorConfigurations(std::move(value)); return *this;}

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline DescribeConnectorsResult& AddConnectorConfigurations(const ConnectorType& key, const ConnectorConfiguration& value) { m_connectorConfigurations.emplace(key, value); return *this; }

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline DescribeConnectorsResult& AddConnectorConfigurations(ConnectorType&& key, const ConnectorConfiguration& value) { m_connectorConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline DescribeConnectorsResult& AddConnectorConfigurations(const ConnectorType& key, ConnectorConfiguration&& value) { m_connectorConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The configuration that is applied to the connectors used in the flow. </p>
     */
    inline DescribeConnectorsResult& AddConnectorConfigurations(ConnectorType&& key, ConnectorConfiguration&& value) { m_connectorConfigurations.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline const Aws::Vector<ConnectorDetail>& GetConnectors() const{ return m_connectors; }

    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline void SetConnectors(const Aws::Vector<ConnectorDetail>& value) { m_connectors = value; }

    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline void SetConnectors(Aws::Vector<ConnectorDetail>&& value) { m_connectors = std::move(value); }

    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline DescribeConnectorsResult& WithConnectors(const Aws::Vector<ConnectorDetail>& value) { SetConnectors(value); return *this;}

    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline DescribeConnectorsResult& WithConnectors(Aws::Vector<ConnectorDetail>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline DescribeConnectorsResult& AddConnectors(const ConnectorDetail& value) { m_connectors.push_back(value); return *this; }

    /**
     * <p>Information about the connectors supported in Amazon AppFlow.</p>
     */
    inline DescribeConnectorsResult& AddConnectors(ConnectorDetail&& value) { m_connectors.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<ConnectorType, ConnectorConfiguration> m_connectorConfigurations;

    Aws::Vector<ConnectorDetail> m_connectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
