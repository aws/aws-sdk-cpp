/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotanalytics/model/ChannelMessages.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class StartPipelineReprocessingRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API StartPipelineReprocessingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPipelineReprocessing"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipeline on which to start reprocessing.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    StartPipelineReprocessingRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time (inclusive) of raw message data that is reprocessed.</p> <p>If
     * you specify a value for the <code>startTime</code> parameter, you must not use
     * the <code>channelMessages</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartPipelineReprocessingRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time (exclusive) of raw message data that is reprocessed.</p> <p>If
     * you specify a value for the <code>endTime</code> parameter, you must not use the
     * <code>channelMessages</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    StartPipelineReprocessingRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one or more sets of channel messages that you want to
     * reprocess.</p> <p>If you use the <code>channelMessages</code> object, you must
     * not specify a value for <code>startTime</code> and <code>endTime</code>.</p>
     */
    inline const ChannelMessages& GetChannelMessages() const { return m_channelMessages; }
    inline bool ChannelMessagesHasBeenSet() const { return m_channelMessagesHasBeenSet; }
    template<typename ChannelMessagesT = ChannelMessages>
    void SetChannelMessages(ChannelMessagesT&& value) { m_channelMessagesHasBeenSet = true; m_channelMessages = std::forward<ChannelMessagesT>(value); }
    template<typename ChannelMessagesT = ChannelMessages>
    StartPipelineReprocessingRequest& WithChannelMessages(ChannelMessagesT&& value) { SetChannelMessages(std::forward<ChannelMessagesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ChannelMessages m_channelMessages;
    bool m_channelMessagesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
