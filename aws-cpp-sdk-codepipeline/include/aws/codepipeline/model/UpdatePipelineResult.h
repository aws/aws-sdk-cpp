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
#include <aws/codepipeline/model/PipelineDeclaration.h>
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
   * <p>Represents the output of an <code>UpdatePipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdatePipelineOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API UpdatePipelineResult
  {
  public:
    UpdatePipelineResult();
    UpdatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipeline = value; }

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipeline = std::move(value); }

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline UpdatePipelineResult& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline UpdatePipelineResult& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    PipelineDeclaration m_pipeline;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
