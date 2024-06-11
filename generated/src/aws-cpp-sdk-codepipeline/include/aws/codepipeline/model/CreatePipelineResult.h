﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/Tag.h>
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
   * <p>Represents the output of a <code>CreatePipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreatePipelineOutput">AWS
   * API Reference</a></p>
   */
  class CreatePipelineResult
  {
  public:
    AWS_CODEPIPELINE_API CreatePipelineResult();
    AWS_CODEPIPELINE_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipeline = value; }
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipeline = std::move(value); }
    inline CreatePipelineResult& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}
    inline CreatePipelineResult& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreatePipelineResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePipelineResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePipelineResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreatePipelineResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PipelineDeclaration m_pipeline;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
