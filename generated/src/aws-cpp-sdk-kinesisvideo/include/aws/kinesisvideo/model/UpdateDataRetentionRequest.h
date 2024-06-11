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
    AWS_KINESISVIDEO_API UpdateDataRetentionRequest();

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
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline UpdateDataRetentionRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline UpdateDataRetentionRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline UpdateDataRetentionRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }
    inline UpdateDataRetentionRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline UpdateDataRetentionRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline UpdateDataRetentionRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline UpdateDataRetentionRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline UpdateDataRetentionRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline UpdateDataRetentionRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline const UpdateDataRetentionOperation& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const UpdateDataRetentionOperation& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(UpdateDataRetentionOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline UpdateDataRetentionRequest& WithOperation(const UpdateDataRetentionOperation& value) { SetOperation(value); return *this;}
    inline UpdateDataRetentionRequest& WithOperation(UpdateDataRetentionOperation&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours to adjust the current retention by. The value you specify
     * is added to or subtracted from the current value, depending on the
     * <code>operation</code>.</p> <p>The minimum value for data retention is 0 and the
     * maximum value is 87600 (ten years).</p>
     */
    inline int GetDataRetentionChangeInHours() const{ return m_dataRetentionChangeInHours; }
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

    UpdateDataRetentionOperation m_operation;
    bool m_operationHasBeenSet = false;

    int m_dataRetentionChangeInHours;
    bool m_dataRetentionChangeInHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
