/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowSummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListWorkflowBuildVersionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsResult();
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline const Aws::Vector<WorkflowSummary>& GetWorkflowSummaryList() const{ return m_workflowSummaryList; }

    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline void SetWorkflowSummaryList(const Aws::Vector<WorkflowSummary>& value) { m_workflowSummaryList = value; }

    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline void SetWorkflowSummaryList(Aws::Vector<WorkflowSummary>&& value) { m_workflowSummaryList = std::move(value); }

    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline ListWorkflowBuildVersionsResult& WithWorkflowSummaryList(const Aws::Vector<WorkflowSummary>& value) { SetWorkflowSummaryList(value); return *this;}

    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline ListWorkflowBuildVersionsResult& WithWorkflowSummaryList(Aws::Vector<WorkflowSummary>&& value) { SetWorkflowSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline ListWorkflowBuildVersionsResult& AddWorkflowSummaryList(const WorkflowSummary& value) { m_workflowSummaryList.push_back(value); return *this; }

    /**
     * <p>A list that contains metadata for the workflow builds that have run for the
     * workflow resource specified in the request.</p>
     */
    inline ListWorkflowBuildVersionsResult& AddWorkflowSummaryList(WorkflowSummary&& value) { m_workflowSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListWorkflowBuildVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListWorkflowBuildVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListWorkflowBuildVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWorkflowBuildVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWorkflowBuildVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWorkflowBuildVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<WorkflowSummary> m_workflowSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
