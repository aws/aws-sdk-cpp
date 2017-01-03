﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the output of a get pipeline action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API GetPipelineResult
  {
  public:
    GetPipelineResult();
    GetPipelineResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPipelineResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipeline = value; }

    
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipeline = value; }

    
    inline GetPipelineResult& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    
    inline GetPipelineResult& WithPipeline(PipelineDeclaration&& value) { SetPipeline(value); return *this;}

  private:
    PipelineDeclaration m_pipeline;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
