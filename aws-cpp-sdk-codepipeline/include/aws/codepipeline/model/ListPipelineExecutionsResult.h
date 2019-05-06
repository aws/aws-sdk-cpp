/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineExecutionSummary.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListPipelineExecutions</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutionsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ListPipelineExecutionsResult
  {
  public:
    ListPipelineExecutionsResult();
    ListPipelineExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPipelineExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline const Aws::Vector<PipelineExecutionSummary>& GetPipelineExecutionSummaries() const{ return m_pipelineExecutionSummaries; }

    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline void SetPipelineExecutionSummaries(const Aws::Vector<PipelineExecutionSummary>& value) { m_pipelineExecutionSummaries = value; }

    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline void SetPipelineExecutionSummaries(Aws::Vector<PipelineExecutionSummary>&& value) { m_pipelineExecutionSummaries = std::move(value); }

    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline ListPipelineExecutionsResult& WithPipelineExecutionSummaries(const Aws::Vector<PipelineExecutionSummary>& value) { SetPipelineExecutionSummaries(value); return *this;}

    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline ListPipelineExecutionsResult& WithPipelineExecutionSummaries(Aws::Vector<PipelineExecutionSummary>&& value) { SetPipelineExecutionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline ListPipelineExecutionsResult& AddPipelineExecutionSummaries(const PipelineExecutionSummary& value) { m_pipelineExecutionSummaries.push_back(value); return *this; }

    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline ListPipelineExecutionsResult& AddPipelineExecutionSummaries(PipelineExecutionSummary&& value) { m_pipelineExecutionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline ListPipelineExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline ListPipelineExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline ListPipelineExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PipelineExecutionSummary> m_pipelineExecutionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
