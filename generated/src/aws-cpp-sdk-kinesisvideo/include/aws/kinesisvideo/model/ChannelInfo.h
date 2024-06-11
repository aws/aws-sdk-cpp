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
    AWS_KINESISVIDEO_API ChannelInfo();
    AWS_KINESISVIDEO_API ChannelInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ChannelInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the signaling channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline ChannelInfo& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ChannelInfo& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ChannelInfo& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signaling channel.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }
    inline ChannelInfo& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}
    inline ChannelInfo& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}
    inline ChannelInfo& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the signaling channel.</p>
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }
    inline ChannelInfo& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}
    inline ChannelInfo& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the signaling channel.</p>
     */
    inline const Status& GetChannelStatus() const{ return m_channelStatus; }
    inline bool ChannelStatusHasBeenSet() const { return m_channelStatusHasBeenSet; }
    inline void SetChannelStatus(const Status& value) { m_channelStatusHasBeenSet = true; m_channelStatus = value; }
    inline void SetChannelStatus(Status&& value) { m_channelStatusHasBeenSet = true; m_channelStatus = std::move(value); }
    inline ChannelInfo& WithChannelStatus(const Status& value) { SetChannelStatus(value); return *this;}
    inline ChannelInfo& WithChannelStatus(Status&& value) { SetChannelStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the signaling channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ChannelInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ChannelInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration for the
     * <code>SINGLE_MASTER</code> channel type.</p>
     */
    inline const SingleMasterConfiguration& GetSingleMasterConfiguration() const{ return m_singleMasterConfiguration; }
    inline bool SingleMasterConfigurationHasBeenSet() const { return m_singleMasterConfigurationHasBeenSet; }
    inline void SetSingleMasterConfiguration(const SingleMasterConfiguration& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = value; }
    inline void SetSingleMasterConfiguration(SingleMasterConfiguration&& value) { m_singleMasterConfigurationHasBeenSet = true; m_singleMasterConfiguration = std::move(value); }
    inline ChannelInfo& WithSingleMasterConfiguration(const SingleMasterConfiguration& value) { SetSingleMasterConfiguration(value); return *this;}
    inline ChannelInfo& WithSingleMasterConfiguration(SingleMasterConfiguration&& value) { SetSingleMasterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the signaling channel.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ChannelInfo& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ChannelInfo& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ChannelInfo& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet = false;

    Status m_channelStatus;
    bool m_channelStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    SingleMasterConfiguration m_singleMasterConfiguration;
    bool m_singleMasterConfigurationHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
