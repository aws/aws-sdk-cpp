/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribePipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribePipelinesInput">AWS
   * API Reference</a></p>
   */
  class DescribePipelinesRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API DescribePipelinesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePipelines"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPipelineIds() const { return m_pipelineIds; }
    inline bool PipelineIdsHasBeenSet() const { return m_pipelineIdsHasBeenSet; }
    template<typename PipelineIdsT = Aws::Vector<Aws::String>>
    void SetPipelineIds(PipelineIdsT&& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds = std::forward<PipelineIdsT>(value); }
    template<typename PipelineIdsT = Aws::Vector<Aws::String>>
    DescribePipelinesRequest& WithPipelineIds(PipelineIdsT&& value) { SetPipelineIds(std::forward<PipelineIdsT>(value)); return *this;}
    template<typename PipelineIdsT = Aws::String>
    DescribePipelinesRequest& AddPipelineIds(PipelineIdsT&& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds.emplace_back(std::forward<PipelineIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_pipelineIds;
    bool m_pipelineIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
