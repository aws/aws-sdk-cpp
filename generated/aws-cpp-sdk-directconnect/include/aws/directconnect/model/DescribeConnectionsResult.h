﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Connection.h>
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
namespace DirectConnect
{
namespace Model
{
  class AWS_DIRECTCONNECT_API DescribeConnectionsResult
  {
  public:
    DescribeConnectionsResult();
    DescribeConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connections.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>The connections.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }

    /**
     * <p>The connections.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }

    /**
     * <p>The connections.</p>
     */
    inline DescribeConnectionsResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>The connections.</p>
     */
    inline DescribeConnectionsResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}

    /**
     * <p>The connections.</p>
     */
    inline DescribeConnectionsResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>The connections.</p>
     */
    inline DescribeConnectionsResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Connection> m_connections;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
