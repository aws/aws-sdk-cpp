/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionOperation.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class UpdateDataRetentionRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API UpdateDataRetentionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataRetention"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    UpdateDataRetentionRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    UpdateDataRetentionRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateDataRetentionRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline UpdateDataRetentionOperation GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(UpdateDataRetentionOperation value) { m_operationHasBeenSet = true; m_operation = value; }
    inline UpdateDataRetentionRequest& WithOperation(UpdateDataRetentionOperation value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours to adjust the current retention by. The value you specify
     * is added to or subtracted from the current value, depending on the
     * <code>operation</code>.</p> <p>The minimum value for data retention is 0 and the
     * maximum value is 87600 (ten years).</p>
     */
    inline int GetDataRetentionChangeInHours() const { return m_dataRetentionChangeInHours; }
    inline bool DataRetentionChangeInHoursHasBeenSet() const { return m_dataRetentionChangeInHoursHasBeenSet; }
    inline void SetDataRetentionChangeInHours(int value) { m_dataRetentionChangeInHoursHasBeenSet = true; m_dataRetentionChangeInHours = value; }
    inline UpdateDataRetentionRequest& WithDataRetentionChangeInHours(int value) { SetDataRetentionChangeInHours(value); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    UpdateDataRetentionOperation m_operation{UpdateDataRetentionOperation::NOT_SET};
    bool m_operationHasBeenSet = false;

    int m_dataRetentionChangeInHours{0};
    bool m_dataRetentionChangeInHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
