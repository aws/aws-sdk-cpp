/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEO_API UpdateDataRetentionRequest : public KinesisVideoRequest
  {
  public:
    UpdateDataRetentionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataRetention"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline UpdateDataRetentionRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline UpdateDataRetentionRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream whose retention period you want to change.</p>
     */
    inline UpdateDataRetentionRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline UpdateDataRetentionRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline UpdateDataRetentionRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream whose retention period you want
     * to change.</p>
     */
    inline UpdateDataRetentionRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline UpdateDataRetentionRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline UpdateDataRetentionRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the stream whose retention period you want to change. To get
     * the version, call either the <code>DescribeStream</code> or the
     * <code>ListStreams</code> API.</p>
     */
    inline UpdateDataRetentionRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline const UpdateDataRetentionOperation& GetOperation() const{ return m_operation; }

    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline void SetOperation(const UpdateDataRetentionOperation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline void SetOperation(UpdateDataRetentionOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline UpdateDataRetentionRequest& WithOperation(const UpdateDataRetentionOperation& value) { SetOperation(value); return *this;}

    /**
     * <p>Indicates whether you want to increase or decrease the retention period.</p>
     */
    inline UpdateDataRetentionRequest& WithOperation(UpdateDataRetentionOperation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The retention period, in hours. The value you specify replaces the current
     * value. The maximum value for this parameter is 87600 (ten years).</p>
     */
    inline int GetDataRetentionChangeInHours() const{ return m_dataRetentionChangeInHours; }

    /**
     * <p>The retention period, in hours. The value you specify replaces the current
     * value. The maximum value for this parameter is 87600 (ten years).</p>
     */
    inline bool DataRetentionChangeInHoursHasBeenSet() const { return m_dataRetentionChangeInHoursHasBeenSet; }

    /**
     * <p>The retention period, in hours. The value you specify replaces the current
     * value. The maximum value for this parameter is 87600 (ten years).</p>
     */
    inline void SetDataRetentionChangeInHours(int value) { m_dataRetentionChangeInHoursHasBeenSet = true; m_dataRetentionChangeInHours = value; }

    /**
     * <p>The retention period, in hours. The value you specify replaces the current
     * value. The maximum value for this parameter is 87600 (ten years).</p>
     */
    inline UpdateDataRetentionRequest& WithDataRetentionChangeInHours(int value) { SetDataRetentionChangeInHours(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;

    UpdateDataRetentionOperation m_operation;
    bool m_operationHasBeenSet;

    int m_dataRetentionChangeInHours;
    bool m_dataRetentionChangeInHoursHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
