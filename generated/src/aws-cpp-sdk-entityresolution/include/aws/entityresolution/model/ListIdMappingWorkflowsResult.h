/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdMappingWorkflowSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListIdMappingWorkflowsResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListIdMappingWorkflowsResult();
    AWS_ENTITYRESOLUTION_API ListIdMappingWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListIdMappingWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListIdMappingWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListIdMappingWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListIdMappingWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowSummary>& GetWorkflowSummaries() const{ return m_workflowSummaries; }

    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline void SetWorkflowSummaries(const Aws::Vector<IdMappingWorkflowSummary>& value) { m_workflowSummaries = value; }

    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline void SetWorkflowSummaries(Aws::Vector<IdMappingWorkflowSummary>&& value) { m_workflowSummaries = std::move(value); }

    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline ListIdMappingWorkflowsResult& WithWorkflowSummaries(const Aws::Vector<IdMappingWorkflowSummary>& value) { SetWorkflowSummaries(value); return *this;}

    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline ListIdMappingWorkflowsResult& WithWorkflowSummaries(Aws::Vector<IdMappingWorkflowSummary>&& value) { SetWorkflowSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline ListIdMappingWorkflowsResult& AddWorkflowSummaries(const IdMappingWorkflowSummary& value) { m_workflowSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>IdMappingWorkflowSummary</code> objects.</p>
     */
    inline ListIdMappingWorkflowsResult& AddWorkflowSummaries(IdMappingWorkflowSummary&& value) { m_workflowSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIdMappingWorkflowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIdMappingWorkflowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIdMappingWorkflowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<IdMappingWorkflowSummary> m_workflowSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
