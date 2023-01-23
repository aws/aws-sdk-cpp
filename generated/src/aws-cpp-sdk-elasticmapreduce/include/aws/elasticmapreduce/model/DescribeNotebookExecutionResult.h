/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/NotebookExecution.h>
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
    AWS_EMR_API DescribeNotebookExecutionResult();
    AWS_EMR_API DescribeNotebookExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API DescribeNotebookExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties of the notebook execution.</p>
     */
    inline const NotebookExecution& GetNotebookExecution() const{ return m_notebookExecution; }

    /**
     * <p>Properties of the notebook execution.</p>
     */
    inline void SetNotebookExecution(const NotebookExecution& value) { m_notebookExecution = value; }

    /**
     * <p>Properties of the notebook execution.</p>
     */
    inline void SetNotebookExecution(NotebookExecution&& value) { m_notebookExecution = std::move(value); }

    /**
     * <p>Properties of the notebook execution.</p>
     */
    inline DescribeNotebookExecutionResult& WithNotebookExecution(const NotebookExecution& value) { SetNotebookExecution(value); return *this;}

    /**
     * <p>Properties of the notebook execution.</p>
     */
    inline DescribeNotebookExecutionResult& WithNotebookExecution(NotebookExecution&& value) { SetNotebookExecution(std::move(value)); return *this;}

  private:

    NotebookExecution m_notebookExecution;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
