/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Video.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/NotificationChannel.h>
#include <aws/rekognition/model/StartSegmentDetectionFilters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/SegmentType.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartSegmentDetectionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartSegmentDetectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSegmentDetection"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Video& GetVideo() const{ return m_video; }

    
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    
    inline void SetVideo(const Video& value) { m_videoHasBeenSet = true; m_video = value; }

    
    inline void SetVideo(Video&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    
    inline StartSegmentDetectionRequest& WithVideo(const Video& value) { SetVideo(value); return *this;}

    
    inline StartSegmentDetectionRequest& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartSegmentDetectionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartSegmentDetectionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartSegmentDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartSegmentDetectionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline StartSegmentDetectionRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the segment detection operation. Note that the
     * Amazon SNS topic must have a topic name that begins with
     * <i>AmazonRekognition</i> if you are using the AmazonRekognitionServiceRole
     * permissions policy to access the topic.</p>
     */
    inline StartSegmentDetectionRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline const Aws::String& GetJobTag() const{ return m_jobTag; }

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline bool JobTagHasBeenSet() const { return m_jobTagHasBeenSet; }

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline void SetJobTag(const Aws::String& value) { m_jobTagHasBeenSet = true; m_jobTag = value; }

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline void SetJobTag(Aws::String&& value) { m_jobTagHasBeenSet = true; m_jobTag = std::move(value); }

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline void SetJobTag(const char* value) { m_jobTagHasBeenSet = true; m_jobTag.assign(value); }

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartSegmentDetectionRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartSegmentDetectionRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartSegmentDetectionRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}


    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline const StartSegmentDetectionFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline void SetFilters(const StartSegmentDetectionFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline void SetFilters(StartSegmentDetectionFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline StartSegmentDetectionRequest& WithFilters(const StartSegmentDetectionFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters for technical cue or shot detection.</p>
     */
    inline StartSegmentDetectionRequest& WithFilters(StartSegmentDetectionFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline const Aws::Vector<SegmentType>& GetSegmentTypes() const{ return m_segmentTypes; }

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline bool SegmentTypesHasBeenSet() const { return m_segmentTypesHasBeenSet; }

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline void SetSegmentTypes(const Aws::Vector<SegmentType>& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes = value; }

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline void SetSegmentTypes(Aws::Vector<SegmentType>&& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes = std::move(value); }

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline StartSegmentDetectionRequest& WithSegmentTypes(const Aws::Vector<SegmentType>& value) { SetSegmentTypes(value); return *this;}

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline StartSegmentDetectionRequest& WithSegmentTypes(Aws::Vector<SegmentType>&& value) { SetSegmentTypes(std::move(value)); return *this;}

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline StartSegmentDetectionRequest& AddSegmentTypes(const SegmentType& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes.push_back(value); return *this; }

    /**
     * <p>An array of segment types to detect in the video. Valid values are
     * TECHNICAL_CUE and SHOT.</p>
     */
    inline StartSegmentDetectionRequest& AddSegmentTypes(SegmentType&& value) { m_segmentTypesHasBeenSet = true; m_segmentTypes.push_back(std::move(value)); return *this; }

  private:

    Video m_video;
    bool m_videoHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;

    StartSegmentDetectionFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<SegmentType> m_segmentTypes;
    bool m_segmentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
