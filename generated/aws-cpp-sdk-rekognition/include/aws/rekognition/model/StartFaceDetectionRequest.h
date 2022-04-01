﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Video.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/NotificationChannel.h>
#include <aws/rekognition/model/FaceAttributes.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API StartFaceDetectionRequest : public RekognitionRequest
  {
  public:
    StartFaceDetectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFaceDetection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The video in which you want to detect faces. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline const Video& GetVideo() const{ return m_video; }

    /**
     * <p>The video in which you want to detect faces. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The video in which you want to detect faces. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline void SetVideo(const Video& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The video in which you want to detect faces. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline void SetVideo(Video&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The video in which you want to detect faces. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline StartFaceDetectionRequest& WithVideo(const Video& value) { SetVideo(value); return *this;}

    /**
     * <p>The video in which you want to detect faces. The video must be stored in an
     * Amazon S3 bucket.</p>
     */
    inline StartFaceDetectionRequest& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartFaceDetectionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartFaceDetectionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartFaceDetection</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartFaceDetectionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the face detection operation. The Amazon SNS
     * topic must have a topic name that begins with <i>AmazonRekognition</i> if you
     * are using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the face detection operation. The Amazon SNS
     * topic must have a topic name that begins with <i>AmazonRekognition</i> if you
     * are using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the face detection operation. The Amazon SNS
     * topic must have a topic name that begins with <i>AmazonRekognition</i> if you
     * are using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the face detection operation. The Amazon SNS
     * topic must have a topic name that begins with <i>AmazonRekognition</i> if you
     * are using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the face detection operation. The Amazon SNS
     * topic must have a topic name that begins with <i>AmazonRekognition</i> if you
     * are using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline StartFaceDetectionRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The ARN of the Amazon SNS topic to which you want Amazon Rekognition Video to
     * publish the completion status of the face detection operation. The Amazon SNS
     * topic must have a topic name that begins with <i>AmazonRekognition</i> if you
     * are using the AmazonRekognitionServiceRole permissions policy.</p>
     */
    inline StartFaceDetectionRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


    /**
     * <p>The face attributes you want returned.</p> <p> <code>DEFAULT</code> - The
     * following subset of facial attributes are returned: BoundingBox, Confidence,
     * Pose, Quality and Landmarks. </p> <p> <code>ALL</code> - All facial attributes
     * are returned.</p>
     */
    inline const FaceAttributes& GetFaceAttributes() const{ return m_faceAttributes; }

    /**
     * <p>The face attributes you want returned.</p> <p> <code>DEFAULT</code> - The
     * following subset of facial attributes are returned: BoundingBox, Confidence,
     * Pose, Quality and Landmarks. </p> <p> <code>ALL</code> - All facial attributes
     * are returned.</p>
     */
    inline bool FaceAttributesHasBeenSet() const { return m_faceAttributesHasBeenSet; }

    /**
     * <p>The face attributes you want returned.</p> <p> <code>DEFAULT</code> - The
     * following subset of facial attributes are returned: BoundingBox, Confidence,
     * Pose, Quality and Landmarks. </p> <p> <code>ALL</code> - All facial attributes
     * are returned.</p>
     */
    inline void SetFaceAttributes(const FaceAttributes& value) { m_faceAttributesHasBeenSet = true; m_faceAttributes = value; }

    /**
     * <p>The face attributes you want returned.</p> <p> <code>DEFAULT</code> - The
     * following subset of facial attributes are returned: BoundingBox, Confidence,
     * Pose, Quality and Landmarks. </p> <p> <code>ALL</code> - All facial attributes
     * are returned.</p>
     */
    inline void SetFaceAttributes(FaceAttributes&& value) { m_faceAttributesHasBeenSet = true; m_faceAttributes = std::move(value); }

    /**
     * <p>The face attributes you want returned.</p> <p> <code>DEFAULT</code> - The
     * following subset of facial attributes are returned: BoundingBox, Confidence,
     * Pose, Quality and Landmarks. </p> <p> <code>ALL</code> - All facial attributes
     * are returned.</p>
     */
    inline StartFaceDetectionRequest& WithFaceAttributes(const FaceAttributes& value) { SetFaceAttributes(value); return *this;}

    /**
     * <p>The face attributes you want returned.</p> <p> <code>DEFAULT</code> - The
     * following subset of facial attributes are returned: BoundingBox, Confidence,
     * Pose, Quality and Landmarks. </p> <p> <code>ALL</code> - All facial attributes
     * are returned.</p>
     */
    inline StartFaceDetectionRequest& WithFaceAttributes(FaceAttributes&& value) { SetFaceAttributes(std::move(value)); return *this;}


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
    inline StartFaceDetectionRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartFaceDetectionRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartFaceDetectionRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}

  private:

    Video m_video;
    bool m_videoHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet;

    FaceAttributes m_faceAttributes;
    bool m_faceAttributesHasBeenSet;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
