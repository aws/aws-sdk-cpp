/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/Processor.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Summary of details of a channel flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelFlowSummary">AWS
   * API Reference</a></p>
   */
  class ChannelFlowSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelFlowSummary() = default;
    AWS_CHIMESDKMESSAGING_API ChannelFlowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelFlowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const { return m_channelFlowArn; }
    inline bool ChannelFlowArnHasBeenSet() const { return m_channelFlowArnHasBeenSet; }
    template<typename ChannelFlowArnT = Aws::String>
    void SetChannelFlowArn(ChannelFlowArnT&& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = std::forward<ChannelFlowArnT>(value); }
    template<typename ChannelFlowArnT = Aws::String>
    ChannelFlowSummary& WithChannelFlowArn(ChannelFlowArnT&& value) { SetChannelFlowArn(std::forward<ChannelFlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ChannelFlowSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline const Aws::Vector<Processor>& GetProcessors() const { return m_processors; }
    inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }
    template<typename ProcessorsT = Aws::Vector<Processor>>
    void SetProcessors(ProcessorsT&& value) { m_processorsHasBeenSet = true; m_processors = std::forward<ProcessorsT>(value); }
    template<typename ProcessorsT = Aws::Vector<Processor>>
    ChannelFlowSummary& WithProcessors(ProcessorsT&& value) { SetProcessors(std::forward<ProcessorsT>(value)); return *this;}
    template<typename ProcessorsT = Processor>
    ChannelFlowSummary& AddProcessors(ProcessorsT&& value) { m_processorsHasBeenSet = true; m_processors.emplace_back(std::forward<ProcessorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Processor> m_processors;
    bool m_processorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
