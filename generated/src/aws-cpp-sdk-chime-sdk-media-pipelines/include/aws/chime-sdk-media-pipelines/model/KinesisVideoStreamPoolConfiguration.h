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
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the video stream pool configuration.</p>
     */
    inline const Aws::String& GetPoolArn() const { return m_poolArn; }
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }
    template<typename PoolArnT = Aws::String>
    void SetPoolArn(PoolArnT&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::forward<PoolArnT>(value); }
    template<typename PoolArnT = Aws::String>
    KinesisVideoStreamPoolConfiguration& WithPoolArn(PoolArnT&& value) { SetPoolArn(std::forward<PoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the video stream pool configuration.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    KinesisVideoStreamPoolConfiguration& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the video stream pool in the configuration.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    KinesisVideoStreamPoolConfiguration& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the video stream pool in the configuration. </p>
     */
    inline KinesisVideoStreamPoolStatus GetPoolStatus() const { return m_poolStatus; }
    inline bool PoolStatusHasBeenSet() const { return m_poolStatusHasBeenSet; }
    inline void SetPoolStatus(KinesisVideoStreamPoolStatus value) { m_poolStatusHasBeenSet = true; m_poolStatus = value; }
    inline KinesisVideoStreamPoolConfiguration& WithPoolStatus(KinesisVideoStreamPoolStatus value) { SetPoolStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the video stream pool in the configuration.</p>
     */
    inline int GetPoolSize() const { return m_poolSize; }
    inline bool PoolSizeHasBeenSet() const { return m_poolSizeHasBeenSet; }
    inline void SetPoolSize(int value) { m_poolSizeHasBeenSet = true; m_poolSize = value; }
    inline KinesisVideoStreamPoolConfiguration& WithPoolSize(int value) { SetPoolSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kinesis video stream pool configuration object.</p>
     */
    inline const KinesisVideoStreamConfiguration& GetStreamConfiguration() const { return m_streamConfiguration; }
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }
    template<typename StreamConfigurationT = KinesisVideoStreamConfiguration>
    void SetStreamConfiguration(StreamConfigurationT&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::forward<StreamConfigurationT>(value); }
    template<typename StreamConfigurationT = KinesisVideoStreamConfiguration>
    KinesisVideoStreamPoolConfiguration& WithStreamConfiguration(StreamConfigurationT&& value) { SetStreamConfiguration(std::forward<StreamConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    KinesisVideoStreamPoolConfiguration& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    KinesisVideoStreamPoolConfiguration& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    KinesisVideoStreamPoolStatus m_poolStatus{KinesisVideoStreamPoolStatus::NOT_SET};
    bool m_poolStatusHasBeenSet = false;

    int m_poolSize{0};
    bool m_poolSizeHasBeenSet = false;

    KinesisVideoStreamConfiguration m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
