/**
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
   * <p>Represents the output of a ListWorkspaces operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListWorkspacesResponse">AWS
   * API Reference</a></p>
   */
  class ListWorkspacesResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult();
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline ListWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline ListWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token to use when requesting the next page in this list.</p>
     */
    inline ListWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline const Aws::Vector<WorkspaceSummary>& GetWorkspaces() const{ return m_workspaces; }

    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline void SetWorkspaces(const Aws::Vector<WorkspaceSummary>& value) { m_workspaces = value; }

    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline void SetWorkspaces(Aws::Vector<WorkspaceSummary>&& value) { m_workspaces = std::move(value); }

    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline ListWorkspacesResult& WithWorkspaces(const Aws::Vector<WorkspaceSummary>& value) { SetWorkspaces(value); return *this;}

    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline ListWorkspacesResult& WithWorkspaces(Aws::Vector<WorkspaceSummary>&& value) { SetWorkspaces(std::move(value)); return *this;}

    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline ListWorkspacesResult& AddWorkspaces(const WorkspaceSummary& value) { m_workspaces.push_back(value); return *this; }

    /**
     * <p>The list of existing workspaces, including those undergoing creation or
     * deletion.</p>
     */
    inline ListWorkspacesResult& AddWorkspaces(WorkspaceSummary&& value) { m_workspaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkspaceSummary> m_workspaces;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
