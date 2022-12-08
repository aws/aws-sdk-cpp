/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ConnectorConfiguration.h>
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
    AWS_APPFLOW_API DescribeConnectorResult();
    AWS_APPFLOW_API DescribeConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Configuration info of all the connectors that the user requested.</p>
     */
    inline const ConnectorConfiguration& GetConnectorConfiguration() const{ return m_connectorConfiguration; }

    /**
     * <p>Configuration info of all the connectors that the user requested.</p>
     */
    inline void SetConnectorConfiguration(const ConnectorConfiguration& value) { m_connectorConfiguration = value; }

    /**
     * <p>Configuration info of all the connectors that the user requested.</p>
     */
    inline void SetConnectorConfiguration(ConnectorConfiguration&& value) { m_connectorConfiguration = std::move(value); }

    /**
     * <p>Configuration info of all the connectors that the user requested.</p>
     */
    inline DescribeConnectorResult& WithConnectorConfiguration(const ConnectorConfiguration& value) { SetConnectorConfiguration(value); return *this;}

    /**
     * <p>Configuration info of all the connectors that the user requested.</p>
     */
    inline DescribeConnectorResult& WithConnectorConfiguration(ConnectorConfiguration&& value) { SetConnectorConfiguration(std::move(value)); return *this;}

  private:

    ConnectorConfiguration m_connectorConfiguration;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
