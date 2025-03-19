/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class CancelPipelineReprocessingRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API CancelPipelineReprocessingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelPipelineReprocessing"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    CancelPipelineReprocessingRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the reprocessing task (returned by
     * <code>StartPipelineReprocessing</code>).</p>
     */
    inline const Aws::String& GetReprocessingId() const { return m_reprocessingId; }
    inline bool ReprocessingIdHasBeenSet() const { return m_reprocessingIdHasBeenSet; }
    template<typename ReprocessingIdT = Aws::String>
    void SetReprocessingId(ReprocessingIdT&& value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId = std::forward<ReprocessingIdT>(value); }
    template<typename ReprocessingIdT = Aws::String>
    CancelPipelineReprocessingRequest& WithReprocessingId(ReprocessingIdT&& value) { SetReprocessingId(std::forward<ReprocessingIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_reprocessingId;
    bool m_reprocessingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
