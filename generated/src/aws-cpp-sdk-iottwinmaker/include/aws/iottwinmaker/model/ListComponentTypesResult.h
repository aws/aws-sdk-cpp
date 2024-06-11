/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/ComponentTypeSummary.h>
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
  class ListComponentTypesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListComponentTypesResult();
    AWS_IOTTWINMAKER_API ListComponentTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListComponentTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline ListComponentTypesResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline ListComponentTypesResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline ListComponentTypesResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects that contain information about the component types.</p>
     */
    inline const Aws::Vector<ComponentTypeSummary>& GetComponentTypeSummaries() const{ return m_componentTypeSummaries; }
    inline void SetComponentTypeSummaries(const Aws::Vector<ComponentTypeSummary>& value) { m_componentTypeSummaries = value; }
    inline void SetComponentTypeSummaries(Aws::Vector<ComponentTypeSummary>&& value) { m_componentTypeSummaries = std::move(value); }
    inline ListComponentTypesResult& WithComponentTypeSummaries(const Aws::Vector<ComponentTypeSummary>& value) { SetComponentTypeSummaries(value); return *this;}
    inline ListComponentTypesResult& WithComponentTypeSummaries(Aws::Vector<ComponentTypeSummary>&& value) { SetComponentTypeSummaries(std::move(value)); return *this;}
    inline ListComponentTypesResult& AddComponentTypeSummaries(const ComponentTypeSummary& value) { m_componentTypeSummaries.push_back(value); return *this; }
    inline ListComponentTypesResult& AddComponentTypeSummaries(ComponentTypeSummary&& value) { m_componentTypeSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListComponentTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListComponentTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListComponentTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of results to display.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResults = value; }
    inline ListComponentTypesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListComponentTypesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListComponentTypesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListComponentTypesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;

    Aws::Vector<ComponentTypeSummary> m_componentTypeSummaries;

    Aws::String m_nextToken;

    int m_maxResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
