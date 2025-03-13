/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/PipelineActivity.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class UpdatePipelineRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API UpdatePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipeline"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    UpdatePipelineRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>PipelineActivity</code> objects. Activities perform
     * transformations on your messages, such as removing, renaming or adding message
     * attributes; filtering messages based on attribute values; invoking your Lambda
     * functions on messages for advanced processing; or performing mathematical
     * transformations to normalize device data.</p> <p>The list can be 2-25
     * <code>PipelineActivity</code> objects and must contain both a
     * <code>channel</code> and a <code>datastore</code> activity. Each entry in the
     * list must contain only one activity. For example:</p> <p>
     * <code>pipelineActivities = [ { "channel": { ... } }, { "lambda": { ... } }, ...
     * ]</code> </p>
     */
    inline const Aws::Vector<PipelineActivity>& GetPipelineActivities() const { return m_pipelineActivities; }
    inline bool PipelineActivitiesHasBeenSet() const { return m_pipelineActivitiesHasBeenSet; }
    template<typename PipelineActivitiesT = Aws::Vector<PipelineActivity>>
    void SetPipelineActivities(PipelineActivitiesT&& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities = std::forward<PipelineActivitiesT>(value); }
    template<typename PipelineActivitiesT = Aws::Vector<PipelineActivity>>
    UpdatePipelineRequest& WithPipelineActivities(PipelineActivitiesT&& value) { SetPipelineActivities(std::forward<PipelineActivitiesT>(value)); return *this;}
    template<typename PipelineActivitiesT = PipelineActivity>
    UpdatePipelineRequest& AddPipelineActivities(PipelineActivitiesT&& value) { m_pipelineActivitiesHasBeenSet = true; m_pipelineActivities.emplace_back(std::forward<PipelineActivitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::Vector<PipelineActivity> m_pipelineActivities;
    bool m_pipelineActivitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
