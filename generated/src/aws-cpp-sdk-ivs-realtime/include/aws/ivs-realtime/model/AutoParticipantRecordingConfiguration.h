/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/ParticipantRecordingMediaType.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Object specifying an auto-participant-recording configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/AutoParticipantRecordingConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoParticipantRecordingConfiguration
  {
  public:
    AWS_IVSREALTIME_API AutoParticipantRecordingConfiguration();
    AWS_IVSREALTIME_API AutoParticipantRecordingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API AutoParticipantRecordingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the <a>StorageConfiguration</a> resource to use for auto participant
     * recording. Default: "" (empty string, no storage configuration is specified).
     * Individual participant recording cannot be started unless a storage
     * configuration is specified, when a <a>Stage</a> is created or updated.</p>
     */
    inline const Aws::String& GetStorageConfigurationArn() const{ return m_storageConfigurationArn; }
    inline bool StorageConfigurationArnHasBeenSet() const { return m_storageConfigurationArnHasBeenSet; }
    inline void SetStorageConfigurationArn(const Aws::String& value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn = value; }
    inline void SetStorageConfigurationArn(Aws::String&& value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn = std::move(value); }
    inline void SetStorageConfigurationArn(const char* value) { m_storageConfigurationArnHasBeenSet = true; m_storageConfigurationArn.assign(value); }
    inline AutoParticipantRecordingConfiguration& WithStorageConfigurationArn(const Aws::String& value) { SetStorageConfigurationArn(value); return *this;}
    inline AutoParticipantRecordingConfiguration& WithStorageConfigurationArn(Aws::String&& value) { SetStorageConfigurationArn(std::move(value)); return *this;}
    inline AutoParticipantRecordingConfiguration& WithStorageConfigurationArn(const char* value) { SetStorageConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Types of media to be recorded. Default: <code>AUDIO_VIDEO</code>.</p>
     */
    inline const Aws::Vector<ParticipantRecordingMediaType>& GetMediaTypes() const{ return m_mediaTypes; }
    inline bool MediaTypesHasBeenSet() const { return m_mediaTypesHasBeenSet; }
    inline void SetMediaTypes(const Aws::Vector<ParticipantRecordingMediaType>& value) { m_mediaTypesHasBeenSet = true; m_mediaTypes = value; }
    inline void SetMediaTypes(Aws::Vector<ParticipantRecordingMediaType>&& value) { m_mediaTypesHasBeenSet = true; m_mediaTypes = std::move(value); }
    inline AutoParticipantRecordingConfiguration& WithMediaTypes(const Aws::Vector<ParticipantRecordingMediaType>& value) { SetMediaTypes(value); return *this;}
    inline AutoParticipantRecordingConfiguration& WithMediaTypes(Aws::Vector<ParticipantRecordingMediaType>&& value) { SetMediaTypes(std::move(value)); return *this;}
    inline AutoParticipantRecordingConfiguration& AddMediaTypes(const ParticipantRecordingMediaType& value) { m_mediaTypesHasBeenSet = true; m_mediaTypes.push_back(value); return *this; }
    inline AutoParticipantRecordingConfiguration& AddMediaTypes(ParticipantRecordingMediaType&& value) { m_mediaTypesHasBeenSet = true; m_mediaTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_storageConfigurationArn;
    bool m_storageConfigurationArnHasBeenSet = false;

    Aws::Vector<ParticipantRecordingMediaType> m_mediaTypes;
    bool m_mediaTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
