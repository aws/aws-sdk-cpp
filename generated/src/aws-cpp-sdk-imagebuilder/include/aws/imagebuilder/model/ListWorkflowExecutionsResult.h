﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/WorkflowExecutionMetadata.h>
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
  class ListWorkflowExecutionsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowExecutionsResult();
    AWS_IMAGEBUILDER_API ListWorkflowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkflowExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkflowExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkflowExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of runtime details that represents each time a workflow ran
     * for the requested image build version.</p>
     */
    inline const Aws::Vector<WorkflowExecutionMetadata>& GetWorkflowExecutions() const{ return m_workflowExecutions; }
    inline void SetWorkflowExecutions(const Aws::Vector<WorkflowExecutionMetadata>& value) { m_workflowExecutions = value; }
    inline void SetWorkflowExecutions(Aws::Vector<WorkflowExecutionMetadata>&& value) { m_workflowExecutions = std::move(value); }
    inline ListWorkflowExecutionsResult& WithWorkflowExecutions(const Aws::Vector<WorkflowExecutionMetadata>& value) { SetWorkflowExecutions(value); return *this;}
    inline ListWorkflowExecutionsResult& WithWorkflowExecutions(Aws::Vector<WorkflowExecutionMetadata>&& value) { SetWorkflowExecutions(std::move(value)); return *this;}
    inline ListWorkflowExecutionsResult& AddWorkflowExecutions(const WorkflowExecutionMetadata& value) { m_workflowExecutions.push_back(value); return *this; }
    inline ListWorkflowExecutionsResult& AddWorkflowExecutions(WorkflowExecutionMetadata&& value) { m_workflowExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource ARN of the image build version for which you requested a list of
     * workflow runtime details.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArn.assign(value); }
    inline ListWorkflowExecutionsResult& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline ListWorkflowExecutionsResult& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline ListWorkflowExecutionsResult& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output message from the list action, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline ListWorkflowExecutionsResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ListWorkflowExecutionsResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ListWorkflowExecutionsResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkflowExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkflowExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkflowExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<WorkflowExecutionMetadata> m_workflowExecutions;

    Aws::String m_imageBuildVersionArn;

    Aws::String m_message;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
