/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/MatchingWorkflowSummary.h>
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
  class ListMatchingWorkflowsResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListMatchingWorkflowsResult();
    AWS_ENTITYRESOLUTION_API ListMatchingWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListMatchingWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListMatchingWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListMatchingWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListMatchingWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline const Aws::Vector<MatchingWorkflowSummary>& GetWorkflowSummaries() const{ return m_workflowSummaries; }

    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline void SetWorkflowSummaries(const Aws::Vector<MatchingWorkflowSummary>& value) { m_workflowSummaries = value; }

    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline void SetWorkflowSummaries(Aws::Vector<MatchingWorkflowSummary>&& value) { m_workflowSummaries = std::move(value); }

    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline ListMatchingWorkflowsResult& WithWorkflowSummaries(const Aws::Vector<MatchingWorkflowSummary>& value) { SetWorkflowSummaries(value); return *this;}

    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline ListMatchingWorkflowsResult& WithWorkflowSummaries(Aws::Vector<MatchingWorkflowSummary>&& value) { SetWorkflowSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline ListMatchingWorkflowsResult& AddWorkflowSummaries(const MatchingWorkflowSummary& value) { m_workflowSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>MatchingWorkflowSummary</code> objects, each of which contain
     * the fields <code>WorkflowName</code>, <code>WorkflowArn</code>,
     * <code>CreatedAt</code>, and <code>UpdatedAt</code>.</p>
     */
    inline ListMatchingWorkflowsResult& AddWorkflowSummaries(MatchingWorkflowSummary&& value) { m_workflowSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMatchingWorkflowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMatchingWorkflowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMatchingWorkflowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MatchingWorkflowSummary> m_workflowSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
