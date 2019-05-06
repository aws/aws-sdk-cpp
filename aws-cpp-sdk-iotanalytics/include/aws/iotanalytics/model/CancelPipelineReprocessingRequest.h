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
  class AWS_IOTANALYTICS_API CancelPipelineReprocessingRequest : public IoTAnalyticsRequest
  {
  public:
    CancelPipelineReprocessingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelPipelineReprocessing"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline CancelPipelineReprocessingRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline CancelPipelineReprocessingRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of pipeline for which data reprocessing is canceled.</p>
     */
    inline CancelPipelineReprocessingRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline const Aws::String& GetReprocessingId() const{ return m_reprocessingId; }

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline bool ReprocessingIdHasBeenSet() const { return m_reprocessingIdHasBeenSet; }

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline void SetReprocessingId(const Aws::String& value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId = value; }

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline void SetReprocessingId(Aws::String&& value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId = std::move(value); }

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline void SetReprocessingId(const char* value) { m_reprocessingIdHasBeenSet = true; m_reprocessingId.assign(value); }

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline CancelPipelineReprocessingRequest& WithReprocessingId(const Aws::String& value) { SetReprocessingId(value); return *this;}

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline CancelPipelineReprocessingRequest& WithReprocessingId(Aws::String&& value) { SetReprocessingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reprocessing task (returned by
     * "StartPipelineReprocessing").</p>
     */
    inline CancelPipelineReprocessingRequest& WithReprocessingId(const char* value) { SetReprocessingId(value); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::String m_reprocessingId;
    bool m_reprocessingIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
