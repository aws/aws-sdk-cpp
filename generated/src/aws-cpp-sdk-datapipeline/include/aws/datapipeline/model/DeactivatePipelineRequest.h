/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for DeactivatePipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DeactivatePipelineInput">AWS
   * API Reference</a></p>
   */
  class DeactivatePipelineRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API DeactivatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeactivatePipeline"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

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
    inline DeactivatePipelineRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

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
    inline bool CancelActiveHasBeenSet() const { return m_cancelActiveHasBeenSet; }

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
    bool m_pipelineIdHasBeenSet = false;

    bool m_cancelActive;
    bool m_cancelActiveHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
