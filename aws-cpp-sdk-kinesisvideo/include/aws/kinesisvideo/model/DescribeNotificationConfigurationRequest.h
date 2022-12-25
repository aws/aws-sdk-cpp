/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class DescribeNotificationConfigurationRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API DescribeNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNotificationConfiguration"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline DescribeNotificationConfigurationRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline DescribeNotificationConfigurationRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream from which to retrieve the notification configuration.
     * You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline DescribeNotificationConfigurationRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline DescribeNotificationConfigurationRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline DescribeNotificationConfigurationRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis video stream from where you
     * want to retrieve the notification configuration. You must specify either the
     * <code>StreamName</code> or the StreamARN.</p>
     */
    inline DescribeNotificationConfigurationRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
