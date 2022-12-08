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
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class StartContentModerationRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API StartContentModerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartContentModeration"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The video in which you want to detect inappropriate, unwanted, or offensive
     * content. The video must be stored in an Amazon S3 bucket.</p>
     */
    inline const Video& GetVideo() const{ return m_video; }

    /**
     * <p>The video in which you want to detect inappropriate, unwanted, or offensive
     * content. The video must be stored in an Amazon S3 bucket.</p>
     */
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }

    /**
     * <p>The video in which you want to detect inappropriate, unwanted, or offensive
     * content. The video must be stored in an Amazon S3 bucket.</p>
     */
    inline void SetVideo(const Video& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>The video in which you want to detect inappropriate, unwanted, or offensive
     * content. The video must be stored in an Amazon S3 bucket.</p>
     */
    inline void SetVideo(Video&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }

    /**
     * <p>The video in which you want to detect inappropriate, unwanted, or offensive
     * content. The video must be stored in an Amazon S3 bucket.</p>
     */
    inline StartContentModerationRequest& WithVideo(const Video& value) { SetVideo(value); return *this;}

    /**
     * <p>The video in which you want to detect inappropriate, unwanted, or offensive
     * content. The video must be stored in an Amazon S3 bucket.</p>
     */
    inline StartContentModerationRequest& WithVideo(Video&& value) { SetVideo(std::move(value)); return *this;}


    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition must have in order
     * to return a moderated content label. Confidence represents how certain Amazon
     * Rekognition is that the moderated content is correctly identified. 0 is the
     * lowest confidence. 100 is the highest confidence. Amazon Rekognition doesn't
     * return any moderated content labels with a confidence level lower than this
     * specified value. If you don't specify <code>MinConfidence</code>,
     * <code>GetContentModeration</code> returns labels with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition must have in order
     * to return a moderated content label. Confidence represents how certain Amazon
     * Rekognition is that the moderated content is correctly identified. 0 is the
     * lowest confidence. 100 is the highest confidence. Amazon Rekognition doesn't
     * return any moderated content labels with a confidence level lower than this
     * specified value. If you don't specify <code>MinConfidence</code>,
     * <code>GetContentModeration</code> returns labels with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition must have in order
     * to return a moderated content label. Confidence represents how certain Amazon
     * Rekognition is that the moderated content is correctly identified. 0 is the
     * lowest confidence. 100 is the highest confidence. Amazon Rekognition doesn't
     * return any moderated content labels with a confidence level lower than this
     * specified value. If you don't specify <code>MinConfidence</code>,
     * <code>GetContentModeration</code> returns labels with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence that Amazon Rekognition must have in order
     * to return a moderated content label. Confidence represents how certain Amazon
     * Rekognition is that the moderated content is correctly identified. 0 is the
     * lowest confidence. 100 is the highest confidence. Amazon Rekognition doesn't
     * return any moderated content labels with a confidence level lower than this
     * specified value. If you don't specify <code>MinConfidence</code>,
     * <code>GetContentModeration</code> returns labels with confidence values greater
     * than or equal to 50 percent.</p>
     */
    inline StartContentModerationRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}


    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartContentModerationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartContentModerationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the start request. If you use the same
     * token with multiple <code>StartContentModeration</code> requests, the same
     * <code>JobId</code> is returned. Use <code>ClientRequestToken</code> to prevent
     * the same job from being accidently started more than once. </p>
     */
    inline StartContentModerationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the content analysis to. The Amazon SNS topic must have
     * a topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline const NotificationChannel& GetNotificationChannel() const{ return m_notificationChannel; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the content analysis to. The Amazon SNS topic must have
     * a topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline bool NotificationChannelHasBeenSet() const { return m_notificationChannelHasBeenSet; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the content analysis to. The Amazon SNS topic must have
     * a topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline void SetNotificationChannel(const NotificationChannel& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = value; }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the content analysis to. The Amazon SNS topic must have
     * a topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline void SetNotificationChannel(NotificationChannel&& value) { m_notificationChannelHasBeenSet = true; m_notificationChannel = std::move(value); }

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the content analysis to. The Amazon SNS topic must have
     * a topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline StartContentModerationRequest& WithNotificationChannel(const NotificationChannel& value) { SetNotificationChannel(value); return *this;}

    /**
     * <p>The Amazon SNS topic ARN that you want Amazon Rekognition Video to publish
     * the completion status of the content analysis to. The Amazon SNS topic must have
     * a topic name that begins with <i>AmazonRekognition</i> if you are using the
     * AmazonRekognitionServiceRole permissions policy to access the topic.</p>
     */
    inline StartContentModerationRequest& WithNotificationChannel(NotificationChannel&& value) { SetNotificationChannel(std::move(value)); return *this;}


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
    inline StartContentModerationRequest& WithJobTag(const Aws::String& value) { SetJobTag(value); return *this;}

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartContentModerationRequest& WithJobTag(Aws::String&& value) { SetJobTag(std::move(value)); return *this;}

    /**
     * <p>An identifier you specify that's returned in the completion notification
     * that's published to your Amazon Simple Notification Service topic. For example,
     * you can use <code>JobTag</code> to group related jobs and identify them in the
     * completion notification.</p>
     */
    inline StartContentModerationRequest& WithJobTag(const char* value) { SetJobTag(value); return *this;}

  private:

    Video m_video;
    bool m_videoHasBeenSet = false;

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    NotificationChannel m_notificationChannel;
    bool m_notificationChannelHasBeenSet = false;

    Aws::String m_jobTag;
    bool m_jobTagHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
