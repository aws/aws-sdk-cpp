/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/SingleMasterConfiguration.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class UpdateSignalingChannelRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UpdateSignalingChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSignalingChannel"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel that you want to
     * update.</p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    UpdateSignalingChannelRequest& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the signaling channel that you want to update.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateSignalingChannelRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure containing the configuration for the <code>SINGLE_MASTER</code>
     * type of the signaling channel that you want to update. </p>
     */
    inline const SingleMasterConfiguration& GetSingleMasterConfiguration() const { return m_singleMasterConfiguration; }
    inline bool SingleMasterConfigurationHasBeenSet() const { return m_singleMasterConfigurationHasBeenSet; }
    template<typename SingleMasterConfigurationT = SingleMasterConfiguration>
    void SetSingleMasterConfiguration(SingleMasterConfigurationT&& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = std::forward<SingleMasterConfigurationT>(value); }
    template<typename SingleMasterConfigurationT = SingleMasterConfiguration>
    UpdateSignalingChannelRequest& WithSingleMasterConfiguration(SingleMasterConfigurationT&& value) { SetSingleMasterConfiguration(std::forward<SingleMasterConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    SingleMasterConfiguration m_singleMasterConfiguration;
    bool m_singleMasterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
