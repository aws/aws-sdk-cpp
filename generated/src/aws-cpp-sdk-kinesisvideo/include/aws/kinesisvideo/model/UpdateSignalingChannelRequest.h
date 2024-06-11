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
    AWS_KINESISVIDEO_API UpdateSignalingChannelRequest();

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
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }
    inline UpdateSignalingChannelRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}
    inline UpdateSignalingChannelRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}
    inline UpdateSignalingChannelRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the signaling channel that you want to update.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline UpdateSignalingChannelRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline UpdateSignalingChannelRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline UpdateSignalingChannelRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure containing the configuration for the <code>SINGLE_MASTER</code>
     * type of the signaling channel that you want to update. </p>
     */
    inline const SingleMasterConfiguration& GetSingleMasterConfiguration() const{ return m_singleMasterConfiguration; }
    inline bool SingleMasterConfigurationHasBeenSet() const { return m_singleMasterConfigurationHasBeenSet; }
    inline void SetSingleMasterConfiguration(const SingleMasterConfiguration& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = value; }
    inline void SetSingleMasterConfiguration(SingleMasterConfiguration&& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = std::move(value); }
    inline UpdateSignalingChannelRequest& WithSingleMasterConfiguration(const SingleMasterConfiguration& value) { SetSingleMasterConfiguration(value); return *this;}
    inline UpdateSignalingChannelRequest& WithSingleMasterConfiguration(SingleMasterConfiguration&& value) { SetSingleMasterConfiguration(std::move(value)); return *this;}
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
