/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>

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
   * <p>The updated Kinesis video stream configuration object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamConfigurationUpdate
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamConfigurationUpdate();
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated time that data is retained.</p>
     */
    inline int GetDataRetentionInHours() const{ return m_dataRetentionInHours; }

    /**
     * <p>The updated time that data is retained.</p>
     */
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }

    /**
     * <p>The updated time that data is retained.</p>
     */
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }

    /**
     * <p>The updated time that data is retained.</p>
     */
    inline KinesisVideoStreamConfigurationUpdate& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}

  private:

    int m_dataRetentionInHours;
    bool m_dataRetentionInHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
