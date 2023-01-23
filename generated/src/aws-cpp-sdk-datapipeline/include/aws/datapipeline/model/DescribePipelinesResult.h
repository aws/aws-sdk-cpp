/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribePipelinesResult
  {
  public:
    AWS_DATAPIPELINE_API DescribePipelinesResult();
    AWS_DATAPIPELINE_API DescribePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API DescribePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
