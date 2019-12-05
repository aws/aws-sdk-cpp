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
  class AWS_KINESISVIDEO_API GetSignalingChannelEndpointRequest : public KinesisVideoRequest
  {
  public:
    GetSignalingChannelEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSignalingChannelEndpoint"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline GetSignalingChannelEndpointRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline GetSignalingChannelEndpointRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signalling channel for which you want to get an endpoint.</p>
     */
    inline GetSignalingChannelEndpointRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline const SingleMasterChannelEndpointConfiguration& GetSingleMasterChannelEndpointConfiguration() const{ return m_singleMasterChannelEndpointConfiguration; }

    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline bool SingleMasterChannelEndpointConfigurationHasBeenSet() const { return m_singleMasterChannelEndpointConfigurationHasBeenSet; }

    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline void SetSingleMasterChannelEndpointConfiguration(const SingleMasterChannelEndpointConfiguration& value) { m_singleMasterChannelEndpointConfigurationHasBeenSet = true; m_singleMasterChannelEndpointConfiguration = value; }

    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline void SetSingleMasterChannelEndpointConfiguration(SingleMasterChannelEndpointConfiguration&& value) { m_singleMasterChannelEndpointConfigurationHasBeenSet = true; m_singleMasterChannelEndpointConfiguration = std::move(value); }

    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline GetSignalingChannelEndpointRequest& WithSingleMasterChannelEndpointConfiguration(const SingleMasterChannelEndpointConfiguration& value) { SetSingleMasterChannelEndpointConfiguration(value); return *this;}

    /**
     * <p>A structure containing the endpoint configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline GetSignalingChannelEndpointRequest& WithSingleMasterChannelEndpointConfiguration(SingleMasterChannelEndpointConfiguration&& value) { SetSingleMasterChannelEndpointConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet;

    SingleMasterChannelEndpointConfiguration m_singleMasterChannelEndpointConfiguration;
    bool m_singleMasterChannelEndpointConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
