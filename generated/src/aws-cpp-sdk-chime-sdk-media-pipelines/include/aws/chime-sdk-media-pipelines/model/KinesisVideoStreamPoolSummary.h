/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of the Kinesis video stream pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamPoolSummary">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamPoolSummary
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolSummary();
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamPoolSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the video stream pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline bool PoolArnHasBeenSet() const { return m_poolArnHasBeenSet; }

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline void SetPoolArn(const Aws::String& value) { m_poolArnHasBeenSet = true; m_poolArn = value; }

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline void SetPoolArn(Aws::String&& value) { m_poolArnHasBeenSet = true; m_poolArn = std::move(value); }

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline void SetPoolArn(const char* value) { m_poolArnHasBeenSet = true; m_poolArn.assign(value); }

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the video stream pool.</p>
     */
    inline KinesisVideoStreamPoolSummary& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}

  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_poolArn;
    bool m_poolArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
