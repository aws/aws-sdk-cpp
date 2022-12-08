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
    AWS_APPFLOW_API ListConnectorsResult();
    AWS_APPFLOW_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline const Aws::Vector<ConnectorDetail>& GetConnectors() const{ return m_connectors; }

    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline void SetConnectors(const Aws::Vector<ConnectorDetail>& value) { m_connectors = value; }

    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline void SetConnectors(Aws::Vector<ConnectorDetail>&& value) { m_connectors = std::move(value); }

    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline ListConnectorsResult& WithConnectors(const Aws::Vector<ConnectorDetail>& value) { SetConnectors(value); return *this;}

    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline ListConnectorsResult& WithConnectors(Aws::Vector<ConnectorDetail>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline ListConnectorsResult& AddConnectors(const ConnectorDetail& value) { m_connectors.push_back(value); return *this; }

    /**
     * <p>Contains information about the connectors supported by Amazon AppFlow.</p>
     */
    inline ListConnectorsResult& AddConnectors(ConnectorDetail&& value) { m_connectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline ListConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline ListConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the next page of data. If nextToken=null, this means
     * that all records have been fetched.</p>
     */
    inline ListConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectorDetail> m_connectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
