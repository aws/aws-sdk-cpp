/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The details of a channel flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelFlow">AWS
   * API Reference</a></p>
   */
  class ChannelFlow
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelFlow();
    AWS_CHIMESDKMESSAGING_API ChannelFlow(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelFlow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const{ return m_channelFlowArn; }
    inline bool ChannelFlowArnHasBeenSet() const { return m_channelFlowArnHasBeenSet; }
    inline void SetChannelFlowArn(const Aws::String& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = value; }
    inline void SetChannelFlowArn(Aws::String&& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = std::move(value); }
    inline void SetChannelFlowArn(const char* value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn.assign(value); }
    inline ChannelFlow& WithChannelFlowArn(const Aws::String& value) { SetChannelFlowArn(value); return *this;}
    inline ChannelFlow& WithChannelFlowArn(Aws::String&& value) { SetChannelFlowArn(std::move(value)); return *this;}
    inline ChannelFlow& WithChannelFlowArn(const char* value) { SetChannelFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the processor Lambda functions.</p>
     */
    inline const Aws::Vector<Processor>& GetProcessors() const{ return m_processors; }
    inline bool ProcessorsHasBeenSet() const { return m_processorsHasBeenSet; }
    inline void SetProcessors(const Aws::Vector<Processor>& value) { m_processorsHasBeenSet = true; m_processors = value; }
    inline void SetProcessors(Aws::Vector<Processor>&& value) { m_processorsHasBeenSet = true; m_processors = std::move(value); }
    inline ChannelFlow& WithProcessors(const Aws::Vector<Processor>& value) { SetProcessors(value); return *this;}
    inline ChannelFlow& WithProcessors(Aws::Vector<Processor>&& value) { SetProcessors(std::move(value)); return *this;}
    inline ChannelFlow& AddProcessors(const Processor& value) { m_processorsHasBeenSet = true; m_processors.push_back(value); return *this; }
    inline ChannelFlow& AddProcessors(Processor&& value) { m_processorsHasBeenSet = true; m_processors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the channel flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ChannelFlow& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ChannelFlow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ChannelFlow& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the channel flow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ChannelFlow& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ChannelFlow& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a channel flow was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline ChannelFlow& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline ChannelFlow& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    Aws::Vector<Processor> m_processors;
    bool m_processorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
