/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/ChannelType.h>
#include <aws/kinesisvideo/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisvideo/model/SingleMasterConfiguration.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>A structure that encapsulates a signaling channel's metadata and
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ChannelInfo">AWS
   * API Reference</a></p>
   */
  class ChannelInfo
  {
  public:
    AWS_KINESISVIDEO_API ChannelInfo() = default;
    AWS_KINESISVIDEO_API ChannelInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ChannelInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the signaling channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ChannelInfo& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel.</p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    ChannelInfo& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the signaling channel.</p>
     */
    inline ChannelType GetChannelType() const { return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(ChannelType value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline ChannelInfo& WithChannelType(ChannelType value) { SetChannelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the signaling channel.</p>
     */
    inline Status GetChannelStatus() const { return m_channelStatus; }
    inline bool ChannelStatusHasBeenSet() const { return m_channelStatusHasBeenSet; }
    inline void SetChannelStatus(Status value) { m_channelStatusHasBeenSet = true; m_channelStatus = value; }
    inline ChannelInfo& WithChannelStatus(Status value) { SetChannelStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the signaling channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ChannelInfo& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline const SingleMasterConfiguration& GetSingleMasterConfiguration() const { return m_singleMasterConfiguration; }
    inline bool SingleMasterConfigurationHasBeenSet() const { return m_singleMasterConfigurationHasBeenSet; }
    template<typename SingleMasterConfigurationT = SingleMasterConfiguration>
    void SetSingleMasterConfiguration(SingleMasterConfigurationT&& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = std::forward<SingleMasterConfigurationT>(value); }
    template<typename SingleMasterConfigurationT = SingleMasterConfiguration>
    ChannelInfo& WithSingleMasterConfiguration(SingleMasterConfigurationT&& value) { SetSingleMasterConfiguration(std::forward<SingleMasterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the signaling channel.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ChannelInfo& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    ChannelType m_channelType{ChannelType::NOT_SET};
    bool m_channelTypeHasBeenSet = false;

    Status m_channelStatus{Status::NOT_SET};
    bool m_channelStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    SingleMasterConfiguration m_singleMasterConfiguration;
    bool m_singleMasterConfigurationHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
