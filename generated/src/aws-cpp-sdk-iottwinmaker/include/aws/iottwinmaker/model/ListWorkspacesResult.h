/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/WorkspaceSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListWorkspacesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListWorkspacesResult();
    AWS_IOTTWINMAKER_API ListWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline const Aws::Vector<WorkspaceSummary>& GetWorkspaceSummaries() const{ return m_workspaceSummaries; }

    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline void SetWorkspaceSummaries(const Aws::Vector<WorkspaceSummary>& value) { m_workspaceSummaries = value; }

    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline void SetWorkspaceSummaries(Aws::Vector<WorkspaceSummary>&& value) { m_workspaceSummaries = std::move(value); }

    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline ListWorkspacesResult& WithWorkspaceSummaries(const Aws::Vector<WorkspaceSummary>& value) { SetWorkspaceSummaries(value); return *this;}

    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline ListWorkspacesResult& WithWorkspaceSummaries(Aws::Vector<WorkspaceSummary>&& value) { SetWorkspaceSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline ListWorkspacesResult& AddWorkspaceSummaries(const WorkspaceSummary& value) { m_workspaceSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain information about the workspaces.</p>
     */
    inline ListWorkspacesResult& AddWorkspaceSummaries(WorkspaceSummary&& value) { m_workspaceSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkspaceSummary> m_workspaceSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
