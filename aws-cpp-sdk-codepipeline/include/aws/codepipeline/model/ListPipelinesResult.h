/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineSummary.h>
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
   * <p>Represents the output of a <code>ListPipelines</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelinesOutput">AWS
   * API Reference</a></p>
   */
  class ListPipelinesResult
  {
  public:
    AWS_CODEPIPELINE_API ListPipelinesResult();
    AWS_CODEPIPELINE_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of pipelines.</p>
     */
    inline const Aws::Vector<PipelineSummary>& GetPipelines() const{ return m_pipelines; }

    /**
     * <p>The list of pipelines.</p>
     */
    inline void SetPipelines(const Aws::Vector<PipelineSummary>& value) { m_pipelines = value; }

    /**
     * <p>The list of pipelines.</p>
     */
    inline void SetPipelines(Aws::Vector<PipelineSummary>&& value) { m_pipelines = std::move(value); }

    /**
     * <p>The list of pipelines.</p>
     */
    inline ListPipelinesResult& WithPipelines(const Aws::Vector<PipelineSummary>& value) { SetPipelines(value); return *this;}

    /**
     * <p>The list of pipelines.</p>
     */
    inline ListPipelinesResult& WithPipelines(Aws::Vector<PipelineSummary>&& value) { SetPipelines(std::move(value)); return *this;}

    /**
     * <p>The list of pipelines.</p>
     */
    inline ListPipelinesResult& AddPipelines(const PipelineSummary& value) { m_pipelines.push_back(value); return *this; }

    /**
     * <p>The list of pipelines.</p>
     */
    inline ListPipelinesResult& AddPipelines(PipelineSummary&& value) { m_pipelines.push_back(std::move(value)); return *this; }


    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline ListPipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline ListPipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list pipelines call to return
     * the next set of pipelines in the list.</p>
     */
    inline ListPipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PipelineSummary> m_pipelines;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
