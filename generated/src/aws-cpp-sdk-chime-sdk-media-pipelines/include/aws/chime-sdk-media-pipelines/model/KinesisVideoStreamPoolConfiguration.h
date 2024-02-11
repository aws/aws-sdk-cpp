/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamPoolStatus.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The video stream pool configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamPoolConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamPoolConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline void SetPoolArn(const Aws::String& value) { m_poolArnHasBeenSet = true; m_poolArn = value; }

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline void SetPoolArn(Aws::String&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::move(value); }

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline void SetPoolArn(const char* value) { m_poolArnHasBeenSet = true; m_poolArn.assign(value); }

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}


    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline const KinesisVideoStreamPoolStatus& GetPoolStatus() const{ return m_poolStatus; }

    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline bool PoolStatusHasBeenSet() const { return m_poolStatusHasBeenSet; }

    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline void SetPoolStatus(const KinesisVideoStreamPoolStatus& value) { m_poolStatusHasBeenSet = true; m_poolStatus = value; }

    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline void SetPoolStatus(KinesisVideoStreamPoolStatus&& value) { m_poolStatusHasBeenSet = true; m_poolStatus = std::move(value); }

    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolStatus(const KinesisVideoStreamPoolStatus& value) { SetPoolStatus(value); return *this;}

    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolStatus(KinesisVideoStreamPoolStatus&& value) { SetPoolStatus(std::move(value)); return *this;}


    /**
     * <p>The size of the video stream pool in the configuration.</p>
     */
    inline int GetPoolSize() const{ return m_poolSize; }

    /**
     * <p>The size of the video stream pool in the configuration.</p>
     */
    inline bool PoolSizeHasBeenSet() const { return m_poolSizeHasBeenSet; }

    /**
     * <p>The size of the video stream pool in the configuration.</p>
     */
    inline void SetPoolSize(int value) { m_poolSizeHasBeenSet = true; m_poolSize = value; }

    /**
     * <p>The size of the video stream pool in the configuration.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithPoolSize(int value) { SetPoolSize(value); return *this;}


    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline const KinesisVideoStreamConfiguration& GetStreamConfiguration() const{ return m_streamConfiguration; }

    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }

    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline void SetStreamConfiguration(const KinesisVideoStreamConfiguration& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }

    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline void SetStreamConfiguration(KinesisVideoStreamConfiguration&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }

    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithStreamConfiguration(const KinesisVideoStreamConfiguration& value) { SetStreamConfiguration(value); return *this;}

    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithStreamConfiguration(KinesisVideoStreamConfiguration&& value) { SetStreamConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline KinesisVideoStreamPoolConfiguration& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    KinesisVideoStreamPoolStatus m_poolStatus;
    bool m_poolStatusHasBeenSet = false;

    int m_poolSize;
    bool m_poolSizeHasBeenSet = false;

    KinesisVideoStreamConfiguration m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
