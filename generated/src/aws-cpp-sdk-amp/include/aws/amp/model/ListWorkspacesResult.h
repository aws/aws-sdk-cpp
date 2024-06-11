﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amp/model/WorkspaceSummary.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListWorkspaces</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspacesResponse">AWS
   * API Reference</a></p>
   */
  class ListWorkspacesResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult();
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token indicating that there are more results to retrieve. You can use this
     * token as part of your next <code>ListWorkspaces</code> request to retrieve those
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>WorkspaceSummary</code> structures containing information
     * about the workspaces requested.</p>
     */
    inline const Aws::Vector<WorkspaceSummary>& GetWorkspaces() const{ return m_workspaces; }
    inline void SetWorkspaces(const Aws::Vector<WorkspaceSummary>& value) { m_workspaces = value; }
    inline void SetWorkspaces(Aws::Vector<WorkspaceSummary>&& value) { m_workspaces = std::move(value); }
    inline ListWorkspacesResult& WithWorkspaces(const Aws::Vector<WorkspaceSummary>& value) { SetWorkspaces(value); return *this;}
    inline ListWorkspacesResult& WithWorkspaces(Aws::Vector<WorkspaceSummary>&& value) { SetWorkspaces(std::move(value)); return *this;}
    inline ListWorkspacesResult& AddWorkspaces(const WorkspaceSummary& value) { m_workspaces.push_back(value); return *this; }
    inline ListWorkspacesResult& AddWorkspaces(WorkspaceSummary&& value) { m_workspaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkspacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkspacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkspacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkspaceSummary> m_workspaces;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
