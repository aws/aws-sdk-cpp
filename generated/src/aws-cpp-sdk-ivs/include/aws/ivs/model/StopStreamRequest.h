/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class StopStreamRequest : public IVSRequest
  {
  public:
    AWS_IVS_API StopStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopStream"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN of the channel for which the stream is to be stopped.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    StopStreamRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
