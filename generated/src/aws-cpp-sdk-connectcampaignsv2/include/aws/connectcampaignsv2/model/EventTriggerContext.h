/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/ChannelContext.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Event trigger context data</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/EventTriggerContext">AWS
 * API Reference</a></p>
 */
class EventTriggerContext {
 public:
  AWS_CONNECTCAMPAIGNSV2_API EventTriggerContext() = default;
  AWS_CONNECTCAMPAIGNSV2_API EventTriggerContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API EventTriggerContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetSourceEvent() const { return m_sourceEvent; }
  inline bool SourceEventHasBeenSet() const { return m_sourceEventHasBeenSet; }
  template <typename SourceEventT = Aws::String>
  void SetSourceEvent(SourceEventT&& value) {
    m_sourceEventHasBeenSet = true;
    m_sourceEvent = std::forward<SourceEventT>(value);
  }
  template <typename SourceEventT = Aws::String>
  EventTriggerContext& WithSourceEvent(SourceEventT&& value) {
    SetSourceEvent(std::forward<SourceEventT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ChannelContext& GetChannelContext() const { return m_channelContext; }
  inline bool ChannelContextHasBeenSet() const { return m_channelContextHasBeenSet; }
  template <typename ChannelContextT = ChannelContext>
  void SetChannelContext(ChannelContextT&& value) {
    m_channelContextHasBeenSet = true;
    m_channelContext = std::forward<ChannelContextT>(value);
  }
  template <typename ChannelContextT = ChannelContext>
  EventTriggerContext& WithChannelContext(ChannelContextT&& value) {
    SetChannelContext(std::forward<ChannelContextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceEvent;

  ChannelContext m_channelContext;
  bool m_sourceEventHasBeenSet = false;
  bool m_channelContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
