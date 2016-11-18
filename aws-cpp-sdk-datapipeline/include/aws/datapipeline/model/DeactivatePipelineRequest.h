/*
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeactivatePipeline.</p>
   */
  class AWS_DATAPIPELINE_API DeactivatePipelineRequest : public DataPipelineRequest
  {
  public:
    DeactivatePipelineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline DeactivatePipelineRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline DeactivatePipelineRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline DeactivatePipelineRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /**
     * <p>Indicates whether to cancel any running objects. The default is true, which
     * sets the state of any running objects to <code>CANCELED</code>. If this value is
     * false, the pipeline is deactivated after all running objects finish.</p>
     */
    inline bool GetCancelActive() const{ return m_cancelActive; }

    /**
     * <p>Indicates whether to cancel any running objects. The default is true, which
     * sets the state of any running objects to <code>CANCELED</code>. If this value is
     * false, the pipeline is deactivated after all running objects finish.</p>
     */
    inline void SetCancelActive(bool value) { m_cancelActiveHasBeenSet = true; m_cancelActive = value; }

    /**
     * <p>Indicates whether to cancel any running objects. The default is true, which
     * sets the state of any running objects to <code>CANCELED</code>. If this value is
     * false, the pipeline is deactivated after all running objects finish.</p>
     */
    inline DeactivatePipelineRequest& WithCancelActive(bool value) { SetCancelActive(value); return *this;}

  private:
    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
    bool m_cancelActive;
    bool m_cancelActiveHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
