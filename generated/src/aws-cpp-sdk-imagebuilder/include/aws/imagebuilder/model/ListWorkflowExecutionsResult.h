/**
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
    AWS_IMAGEBUILDER_API ListWorkflowExecutionsResult() = default;
    AWS_IMAGEBUILDER_API ListWorkflowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListWorkflowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkflowExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of runtime details that represents each time a workflow ran
     * for the requested image build version.</p>
     */
    inline const Aws::Vector<WorkflowExecutionMetadata>& GetWorkflowExecutions() const { return m_workflowExecutions; }
    template<typename WorkflowExecutionsT = Aws::Vector<WorkflowExecutionMetadata>>
    void SetWorkflowExecutions(WorkflowExecutionsT&& value) { m_workflowExecutionsHasBeenSet = true; m_workflowExecutions = std::forward<WorkflowExecutionsT>(value); }
    template<typename WorkflowExecutionsT = Aws::Vector<WorkflowExecutionMetadata>>
    ListWorkflowExecutionsResult& WithWorkflowExecutions(WorkflowExecutionsT&& value) { SetWorkflowExecutions(std::forward<WorkflowExecutionsT>(value)); return *this;}
    template<typename WorkflowExecutionsT = WorkflowExecutionMetadata>
    ListWorkflowExecutionsResult& AddWorkflowExecutions(WorkflowExecutionsT&& value) { m_workflowExecutionsHasBeenSet = true; m_workflowExecutions.emplace_back(std::forward<WorkflowExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource ARN of the image build version for which you requested a list of
     * workflow runtime details.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
    template<typename ImageBuildVersionArnT = Aws::String>
    void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value); }
    template<typename ImageBuildVersionArnT = Aws::String>
    ListWorkflowExecutionsResult& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) { SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output message from the list action, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ListWorkflowExecutionsResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkflowExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<WorkflowExecutionMetadata> m_workflowExecutions;
    bool m_workflowExecutionsHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
