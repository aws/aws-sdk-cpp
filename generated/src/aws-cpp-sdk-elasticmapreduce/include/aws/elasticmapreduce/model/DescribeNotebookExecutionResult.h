/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/NotebookExecution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMR
{
namespace Model
{
  class DescribeNotebookExecutionResult
  {
  public:
    AWS_EMR_API DescribeNotebookExecutionResult() = default;
    AWS_EMR_API DescribeNotebookExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeNotebookExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Properties of the notebook execution.</p>
     */
    inline const NotebookExecution& GetNotebookExecution() const { return m_notebookExecution; }
    template<typename NotebookExecutionT = NotebookExecution>
    void SetNotebookExecution(NotebookExecutionT&& value) { m_notebookExecutionHasBeenSet = true; m_notebookExecution = std::forward<NotebookExecutionT>(value); }
    template<typename NotebookExecutionT = NotebookExecution>
    DescribeNotebookExecutionResult& WithNotebookExecution(NotebookExecutionT&& value) { SetNotebookExecution(std::forward<NotebookExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeNotebookExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NotebookExecution m_notebookExecution;
    bool m_notebookExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
