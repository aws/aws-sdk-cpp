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
    AWS_IOTANALYTICS_API CancelPipelineReprocessingRequest();

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
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline CancelPipelineReprocessingRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline CancelPipelineReprocessingRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline CancelPipelineReprocessingRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the reprocessing task (returned by
     * <code>StartPipelineReprocessing</code>).</p>
     */
    inline const Aws::String& GetReprocessingId() const{ return m_reprocessingId; }
    inline bool ReprocessingIdHasBeenSet() const { return m_reprocessingIdHasBeenSet; }
    inline void SetReprocessingId(const Aws::String& value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId = value; }
    inline void SetReprocessingId(Aws::String&& value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId = std::move(value); }
    inline void SetReprocessingId(const char* value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId.assign(value); }
    inline CancelPipelineReprocessingRequest& WithReprocessingId(const Aws::String& value) { SetReprocessingId(value); return *this;}
    inline CancelPipelineReprocessingRequest& WithReprocessingId(Aws::String&& value) { SetReprocessingId(std::move(value)); return *this;}
    inline CancelPipelineReprocessingRequest& WithReprocessingId(const char* value) { SetReprocessingId(value); return *this;}
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
