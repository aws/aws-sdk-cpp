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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConnectorConfiguration m_connectorConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
