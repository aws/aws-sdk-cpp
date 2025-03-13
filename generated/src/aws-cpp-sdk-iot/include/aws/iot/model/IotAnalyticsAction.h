/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Sends message data to an IoT Analytics channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/IotAnalyticsAction">AWS
   * API Reference</a></p>
   */
  class IotAnalyticsAction
  {
  public:
    AWS_IOT_API IotAnalyticsAction() = default;
    AWS_IOT_API IotAnalyticsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IotAnalyticsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>(deprecated) The ARN of the IoT Analytics channel to which message data will
     * be sent.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    IotAnalyticsAction& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IoT Analytics channel to which message data will be sent.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    IotAnalyticsAction& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to process the action as a batch. The default value is
     * <code>false</code>.</p> <p>When <code>batchMode</code> is <code>true</code> and
     * the rule SQL statement evaluates to an Array, each Array element is delivered as
     * a separate message when passed by <a
     * href="https://docs.aws.amazon.com/iotanalytics/latest/APIReference/API_BatchPutMessage.html">
     * <code>BatchPutMessage</code> </a> to the IoT Analytics channel. The resulting
     * array can't have more than 100 messages.</p>
     */
    inline bool GetBatchMode() const { return m_batchMode; }
    inline bool BatchModeHasBeenSet() const { return m_batchModeHasBeenSet; }
    inline void SetBatchMode(bool value) { m_batchModeHasBeenSet = true; m_batchMode = value; }
    inline IotAnalyticsAction& WithBatchMode(bool value) { SetBatchMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role which has a policy that grants IoT Analytics permission
     * to send message data via IoT Analytics (iotanalytics:BatchPutMessage).</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IotAnalyticsAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    bool m_batchMode{false};
    bool m_batchModeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
