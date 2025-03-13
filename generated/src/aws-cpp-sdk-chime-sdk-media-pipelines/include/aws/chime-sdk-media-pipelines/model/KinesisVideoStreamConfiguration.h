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
   * <p>The configuration of an Kinesis video stream.</p>  <p>If a meeting uses
   * an opt-in Region as its <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/APIReference/API_meeting-chime_CreateMeeting.html#chimesdk-meeting-chime_CreateMeeting-request-MediaRegion">MediaRegion</a>,
   * the KVS stream must be in that same Region. For example, if a meeting uses the
   * <code>af-south-1</code> Region, the KVS stream must also be in
   * <code>af-south-1</code>. However, if the meeting uses a Region that AWS turns on
   * by default, the KVS stream can be in any available Region, including an opt-in
   * Region. For example, if the meeting uses <code>ca-central-1</code>, the KVS
   * stream can be in <code>eu-west-2</code>, <code>us-east-1</code>,
   * <code>af-south-1</code>, or any other Region that the Amazon Chime SDK
   * supports.</p> <p>To learn which AWS Region a meeting uses, call the <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/APIReference/API_meeting-chime_GetMeeting.html">GetMeeting</a>
   * API and use the <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/APIReference/API_meeting-chime_CreateMeeting.html#chimesdk-meeting-chime_CreateMeeting-request-MediaRegion">MediaRegion</a>
   * parameter from the response.</p> <p>For more information about opt-in Regions,
   * refer to <a
   * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/sdk-available-regions.html">Available
   * Regions</a> in the <i>Amazon Chime SDK Developer Guide</i>, and <a
   * href="https://docs.aws.amazon.com/accounts/latest/reference/manage-acct-regions.html#rande-manage-enable.html">Specify
   * which AWS Regions your account can use</a>, in the <i>AWS Account Management
   * Reference Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region of the video stream.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    KinesisVideoStreamConfiguration& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that data is retained.</p>
     */
    inline int GetDataRetentionInHours() const { return m_dataRetentionInHours; }
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }
    inline KinesisVideoStreamConfiguration& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    int m_dataRetentionInHours{0};
    bool m_dataRetentionInHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
