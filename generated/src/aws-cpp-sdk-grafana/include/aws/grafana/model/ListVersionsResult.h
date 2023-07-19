/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class ListVersionsResult
  {
  public:
    AWS_MANAGEDGRAFANA_API ListVersionsResult();
    AWS_MANAGEDGRAFANA_API ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrafanaVersions() const{ return m_grafanaVersions; }

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline void SetGrafanaVersions(const Aws::Vector<Aws::String>& value) { m_grafanaVersions = value; }

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline void SetGrafanaVersions(Aws::Vector<Aws::String>&& value) { m_grafanaVersions = std::move(value); }

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline ListVersionsResult& WithGrafanaVersions(const Aws::Vector<Aws::String>& value) { SetGrafanaVersions(value); return *this;}

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline ListVersionsResult& WithGrafanaVersions(Aws::Vector<Aws::String>&& value) { SetGrafanaVersions(std::move(value)); return *this;}

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline ListVersionsResult& AddGrafanaVersions(const Aws::String& value) { m_grafanaVersions.push_back(value); return *this; }

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline ListVersionsResult& AddGrafanaVersions(Aws::String&& value) { m_grafanaVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The Grafana versions available to create. If a workspace ID is included in
     * the request, the Grafana versions to which this workspace can be upgraded.</p>
     */
    inline ListVersionsResult& AddGrafanaVersions(const char* value) { m_grafanaVersions.push_back(value); return *this; }


    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline ListVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline ListVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListVersions</code> operation to
     * return the next set of results.</p>
     */
    inline ListVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_grafanaVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
