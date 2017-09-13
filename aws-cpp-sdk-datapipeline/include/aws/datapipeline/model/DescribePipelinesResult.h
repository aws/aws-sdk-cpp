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
#include <aws/datapipeline/model/PipelineDescription.h>
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
   * <p>Contains the output of DescribePipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribePipelinesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API DescribePipelinesResult
  {
  public:
    DescribePipelinesResult();
    DescribePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline const Aws::Vector<PipelineDescription>& GetPipelineDescriptionList() const{ return m_pipelineDescriptionList; }

    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline void SetPipelineDescriptionList(const Aws::Vector<PipelineDescription>& value) { m_pipelineDescriptionList = value; }

    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline void SetPipelineDescriptionList(Aws::Vector<PipelineDescription>&& value) { m_pipelineDescriptionList = std::move(value); }

    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline DescribePipelinesResult& WithPipelineDescriptionList(const Aws::Vector<PipelineDescription>& value) { SetPipelineDescriptionList(value); return *this;}

    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline DescribePipelinesResult& WithPipelineDescriptionList(Aws::Vector<PipelineDescription>&& value) { SetPipelineDescriptionList(std::move(value)); return *this;}

    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline DescribePipelinesResult& AddPipelineDescriptionList(const PipelineDescription& value) { m_pipelineDescriptionList.push_back(value); return *this; }

    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline DescribePipelinesResult& AddPipelineDescriptionList(PipelineDescription&& value) { m_pipelineDescriptionList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PipelineDescription> m_pipelineDescriptionList;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
