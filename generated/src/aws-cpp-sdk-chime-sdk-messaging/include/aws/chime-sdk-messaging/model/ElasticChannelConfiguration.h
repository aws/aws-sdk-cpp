﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>

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
   * <p>The attributes required to configure and create an elastic channel. An
   * elastic channel can support a maximum of 1-million members.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ElasticChannelConfiguration">AWS
   * API Reference</a></p>
   */
  class ElasticChannelConfiguration
  {
  public:
    AWS_CHIMESDKMESSAGING_API ElasticChannelConfiguration() = default;
    AWS_CHIMESDKMESSAGING_API ElasticChannelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ElasticChannelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of SubChannels that you want to allow in the elastic
     * channel.</p>
     */
    inline int GetMaximumSubChannels() const { return m_maximumSubChannels; }
    inline bool MaximumSubChannelsHasBeenSet() const { return m_maximumSubChannelsHasBeenSet; }
    inline void SetMaximumSubChannels(int value) { m_maximumSubChannelsHasBeenSet = true; m_maximumSubChannels = value; }
    inline ElasticChannelConfiguration& WithMaximumSubChannels(int value) { SetMaximumSubChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of members allowed in a SubChannel.</p>
     */
    inline int GetTargetMembershipsPerSubChannel() const { return m_targetMembershipsPerSubChannel; }
    inline bool TargetMembershipsPerSubChannelHasBeenSet() const { return m_targetMembershipsPerSubChannelHasBeenSet; }
    inline void SetTargetMembershipsPerSubChannel(int value) { m_targetMembershipsPerSubChannelHasBeenSet = true; m_targetMembershipsPerSubChannel = value; }
    inline ElasticChannelConfiguration& WithTargetMembershipsPerSubChannel(int value) { SetTargetMembershipsPerSubChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum allowed percentage of TargetMembershipsPerSubChannel users. Ceil
     * of the calculated value is used in balancing members among SubChannels of the
     * elastic channel.</p>
     */
    inline int GetMinimumMembershipPercentage() const { return m_minimumMembershipPercentage; }
    inline bool MinimumMembershipPercentageHasBeenSet() const { return m_minimumMembershipPercentageHasBeenSet; }
    inline void SetMinimumMembershipPercentage(int value) { m_minimumMembershipPercentageHasBeenSet = true; m_minimumMembershipPercentage = value; }
    inline ElasticChannelConfiguration& WithMinimumMembershipPercentage(int value) { SetMinimumMembershipPercentage(value); return *this;}
    ///@}
  private:

    int m_maximumSubChannels{0};
    bool m_maximumSubChannelsHasBeenSet = false;

    int m_targetMembershipsPerSubChannel{0};
    bool m_targetMembershipsPerSubChannelHasBeenSet = false;

    int m_minimumMembershipPercentage{0};
    bool m_minimumMembershipPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
