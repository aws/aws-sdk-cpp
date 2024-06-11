﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Connection.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeConnectionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConnectionsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConnectionsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeConnectionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeConnectionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeConnectionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connections.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = std::move(value); }
    inline DescribeConnectionsResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}
    inline DescribeConnectionsResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(std::move(value)); return *this;}
    inline DescribeConnectionsResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }
    inline DescribeConnectionsResult& AddConnections(Connection&& value) { m_connections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConnectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConnectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConnectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<Connection> m_connections;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
