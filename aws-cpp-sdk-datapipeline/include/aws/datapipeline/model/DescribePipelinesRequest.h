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
  class AWS_DATAPIPELINE_API DescribePipelinesRequest : public DataPipelineRequest
  {
  public:
    DescribePipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePipelines"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPipelineIds() const{ return m_pipelineIds; }

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline bool PipelineIdsHasBeenSet() const { return m_pipelineIdsHasBeenSet; }

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline void SetPipelineIds(const Aws::Vector<Aws::String>& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds = value; }

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline void SetPipelineIds(Aws::Vector<Aws::String>&& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds = std::move(value); }

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline DescribePipelinesRequest& WithPipelineIds(const Aws::Vector<Aws::String>& value) { SetPipelineIds(value); return *this;}

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline DescribePipelinesRequest& WithPipelineIds(Aws::Vector<Aws::String>&& value) { SetPipelineIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline DescribePipelinesRequest& AddPipelineIds(const Aws::String& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline DescribePipelinesRequest& AddPipelineIds(Aws::String&& value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the pipelines to describe. You can pass as many as 25 identifiers
     * in a single call. To obtain pipeline IDs, call <a>ListPipelines</a>.</p>
     */
    inline DescribePipelinesRequest& AddPipelineIds(const char* value) { m_pipelineIdsHasBeenSet = true; m_pipelineIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_pipelineIds;
    bool m_pipelineIdsHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
