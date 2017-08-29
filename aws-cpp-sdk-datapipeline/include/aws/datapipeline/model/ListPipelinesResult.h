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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineIdName.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ListPipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelinesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API ListPipelinesResult
  {
  public:
    ListPipelinesResult();
    ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline const Aws::Vector<PipelineIdName>& GetPipelineIdList() const{ return m_pipelineIdList; }

    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline void SetPipelineIdList(const Aws::Vector<PipelineIdName>& value) { m_pipelineIdList = value; }

    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline void SetPipelineIdList(Aws::Vector<PipelineIdName>&& value) { m_pipelineIdList = std::move(value); }

    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline ListPipelinesResult& WithPipelineIdList(const Aws::Vector<PipelineIdName>& value) { SetPipelineIdList(value); return *this;}

    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline ListPipelinesResult& WithPipelineIdList(Aws::Vector<PipelineIdName>&& value) { SetPipelineIdList(std::move(value)); return *this;}

    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline ListPipelinesResult& AddPipelineIdList(const PipelineIdName& value) { m_pipelineIdList.push_back(value); return *this; }

    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline ListPipelinesResult& AddPipelineIdList(PipelineIdName&& value) { m_pipelineIdList.push_back(std::move(value)); return *this; }


    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline ListPipelinesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline ListPipelinesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline ListPipelinesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline bool GetHasMoreResults() const{ return m_hasMoreResults; }

    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline void SetHasMoreResults(bool value) { m_hasMoreResults = value; }

    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline ListPipelinesResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}

  private:

    Aws::Vector<PipelineIdName> m_pipelineIdList;

    Aws::String m_marker;

    bool m_hasMoreResults;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
