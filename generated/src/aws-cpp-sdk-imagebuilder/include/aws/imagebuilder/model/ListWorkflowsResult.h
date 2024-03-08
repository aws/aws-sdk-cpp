/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowVersion.h>
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
  class ListWorkflowsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowsResult();
    AWS_IMAGEBUILDER_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline const Aws::Vector<WorkflowVersion>& GetWorkflowVersionList() const{ return m_workflowVersionList; }

    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline void SetWorkflowVersionList(const Aws::Vector<WorkflowVersion>& value) { m_workflowVersionList = value; }

    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline void SetWorkflowVersionList(Aws::Vector<WorkflowVersion>&& value) { m_workflowVersionList = std::move(value); }

    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline ListWorkflowsResult& WithWorkflowVersionList(const Aws::Vector<WorkflowVersion>& value) { SetWorkflowVersionList(value); return *this;}

    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline ListWorkflowsResult& WithWorkflowVersionList(Aws::Vector<WorkflowVersion>&& value) { SetWorkflowVersionList(std::move(value)); return *this;}

    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline ListWorkflowsResult& AddWorkflowVersionList(const WorkflowVersion& value) { m_workflowVersionList.push_back(value); return *this; }

    /**
     * <p>A list of workflow build versions that match the request criteria.</p>
     */
    inline ListWorkflowsResult& AddWorkflowVersionList(WorkflowVersion&& value) { m_workflowVersionList.push_back(std::move(value)); return *this; }


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
    inline ListWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWorkflowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWorkflowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWorkflowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<WorkflowVersion> m_workflowVersionList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
