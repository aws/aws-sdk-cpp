/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/SingleMasterChannelEndpointConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class GetSignalingChannelEndpointRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API GetSignalingChannelEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSignalingChannelEndpoint"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signalling channel for which you want
     * to get an endpoint.</p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    GetSignalingChannelEndpointRequest& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline const SingleMasterChannelEndpointConfiguration& GetSingleMasterChannelEndpointConfiguration() const { return m_singleMasterChannelEndpointConfiguration; }
    inline bool SingleMasterChannelEndpointConfigurationHasBeenSet() const { return m_singleMasterChannelEndpointConfigurationHasBeenSet; }
    template<typename SingleMasterChannelEndpointConfigurationT = SingleMasterChannelEndpointConfiguration>
    void SetSingleMasterChannelEndpointConfiguration(SingleMasterChannelEndpointConfigurationT&& value) { m_singleMasterChannelEndpointConfigurationHasBeenSet = true; m_singleMasterChannelEndpointConfiguration = std::forward<SingleMasterChannelEndpointConfigurationT>(value); }
    template<typename SingleMasterChannelEndpointConfigurationT = SingleMasterChannelEndpointConfiguration>
    GetSignalingChannelEndpointRequest& WithSingleMasterChannelEndpointConfiguration(SingleMasterChannelEndpointConfigurationT&& value) { SetSingleMasterChannelEndpointConfiguration(std::forward<SingleMasterChannelEndpointConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    SingleMasterChannelEndpointConfiguration m_singleMasterChannelEndpointConfiguration;
    bool m_singleMasterChannelEndpointConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
